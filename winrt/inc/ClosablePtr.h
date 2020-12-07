// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

//
// This wraps up a ComPtr to make sure that it cannot be accessed without
// first checking to see if it has been 'closed'.  This is to help enforce
// Windows.Foundation.IClosable semantics.
//
// Usage:
//
//   ClosablePtr<IInspectable> foo = original;
//
//   auto& definitelyNotClosedFoo = foo.EnsureNotClosed();
//
// Note the "auto&".  This prevents an unnecessary AddRef/Release call.
//   

template<class T>
class ClosablePtr
{
    Microsoft::WRL::ComPtr<T> m_ptr;

public:
    ClosablePtr()
    {
    }

    ClosablePtr(ClosablePtr const& other)
        : m_ptr(other.m_ptr)
    {
    }

    ClosablePtr(T* other)
        : m_ptr(other)
    {
    }

    ClosablePtr& operator=(ClosablePtr const& other)
    {
        m_ptr = other.m_ptr;
        return *this;
    }

    ClosablePtr& operator=(Microsoft::WRL::ComPtr<T> const& other)
    {
        m_ptr = other;
        return *this;
    }

    ClosablePtr& operator=(T* other)
    {
        m_ptr = other;
        return *this;
    }

    auto operator&() -> decltype(&m_ptr)
    {
        return &m_ptr;
    }

    Microsoft::WRL::ComPtr<T> Close() throw()
    {
        Microsoft::WRL::ComPtr<T> ptr;
        std::swap(ptr, m_ptr);
        return ptr;
    }

    Microsoft::WRL::ComPtr<T> const& EnsureNotClosed() const
    {
        if (!m_ptr)
            ThrowHR(RO_E_CLOSED);
            
        //
        // There's a potential race condition here -- if another thread
        // calls Close() before we manage to return (and the caller uses
        // m_ptr) then we're likely to AV.  
        //
        // This would be an application bug -- it's the moral equivalent of
        // calling 'delete foo' on one thread while trying to use 'foo' on
        // another.
        //
        // We do not try and detect or handle this case.
        //

        return m_ptr;
    }

    Microsoft::WRL::ComPtr<T> const& UncheckedGet() const
    {
        return m_ptr;
    }

    explicit operator bool() const
    {
        return static_cast<bool>(m_ptr);
    }
};
