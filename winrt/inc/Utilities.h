// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

#include <windows.foundation.h>


template<typename T>
inline Microsoft::WRL::ComPtr<IUnknown> AsUnknown(T* value)
{
    Microsoft::WRL::ComPtr<IUnknown> unknown;
    ThrowIfFailed(value->QueryInterface(IID_PPV_ARGS(unknown.ReleaseAndGetAddressOf())));
    return unknown;
}

// Compares two interface pointers, querying to IUnknown to follow COM identity rules.
template<typename T, typename U>
inline bool IsSameInstance(T* value1, U* value2)
{
    if (reinterpret_cast<void*>(value1) == reinterpret_cast<void*>(value2))
        return true; //Easy, early out, and covers null==null case

    if ((value1 == nullptr) || (value2 == nullptr))
        return false;

    return AsUnknown(value1) == AsUnknown(value2);
}

// Shortcut QueryInterface
template<typename T, typename U>
inline Microsoft::WRL::ComPtr<T> As(Microsoft::WRL::ComPtr<U> const& u)
{
    static_assert(!std::is_same<T, U>::value, "types should differ");

    Microsoft::WRL::ComPtr<T> t;
    ThrowIfFailed(u.As(&t));
    return t;
}

template<typename T, typename U>
inline Microsoft::WRL::ComPtr<T> As(U* u)
{
    static_assert(!std::is_same<T, U>::value, "types should differ");

    Microsoft::WRL::ComPtr<T> t;
    ThrowIfFailed(u->QueryInterface(IID_PPV_ARGS(t.ReleaseAndGetAddressOf())));
    return t;
}

#ifdef __cplusplus_winrt

template<typename T, typename U>
inline Microsoft::WRL::ComPtr<T> As(U^ u)
{
    return As<T>(reinterpret_cast<IInspectable*>(u));
}

#endif

template<typename T, typename U>
inline Microsoft::WRL::ComPtr<T> MaybeAs(Microsoft::WRL::ComPtr<U> const& u)
{
    static_assert(!std::is_same<T, U>::value, "types should differ");

    Microsoft::WRL::ComPtr<T> t;
    if (u && SUCCEEDED(u.As(&t)))
        return t;
    else
        return nullptr;
}

template<typename T, typename U>
inline Microsoft::WRL::ComPtr<T> MaybeAs(U* u)
{
    static_assert(!std::is_same<T, U>::value, "types should differ");

    Microsoft::WRL::ComPtr<T> t;
    if (u && SUCCEEDED(u->QueryInterface(IID_PPV_ARGS(t.ReleaseAndGetAddressOf()))))
        return t;
    else
        return nullptr;
}

template<typename T>
inline Microsoft::WRL::WeakRef AsWeak(T* t)
{
    Microsoft::WRL::WeakRef weakRef;
    ThrowIfFailed(AsWeak(t, &weakRef));
    return weakRef;
}

template<typename T>
inline Microsoft::WRL::ComPtr<T> LockWeakRef(Microsoft::WRL::WeakRef& weakRef)
{
    Microsoft::WRL::ComPtr<T> t;
    ThrowIfFailed(weakRef.As(&t));
    return t;
}

inline bool operator!=(ABI::Windows::Foundation::Size const& left, ABI::Windows::Foundation::Size const& right)
{
    return (left.Width != right.Width) || (left.Height != right.Height);
}

template<typename T>
class SimpleAgileActivationFactory WrlSealed : public Microsoft::WRL::AgileActivationFactory<>
{
public:
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
        return MakeAndInitialize<T>(ppvObject);
    }
};
