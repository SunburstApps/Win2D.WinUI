// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

//
// Adapted from:
//   http://channel9.msdn.com/Series/C9-Lectures-Stephan-T-Lavavej-Advanced-STL/C9-Lectures-Stephan-T-Lavavej-Advanced-STL-6-of-n#c634477472460000000
//
// which is similar to ScopeGuard described here:
//   http://channel9.msdn.com/Shows/Going+Deep/C-and-Beyond-2012-Andrei-Alexandrescu-Systematic-Error-Handling-in-C.
//
// The point of it is to provide a way to ensure that an action is executed,
// even if an exception if thrown.  The Dismiss() method can be used to say
// prevent the action executing.
//
template<typename FN>
class ScopeWarden
{
public:
    explicit __declspec(nothrow) ScopeWarden(FN&& fn)
        : m_fn(fn)
        , m_dismissed(false)
    {
    }

    void __declspec(nothrow) Dismiss()
    {
        m_dismissed = true;
    }

    __declspec(nothrow) ~ScopeWarden()
    {
        if (!m_dismissed)
        {
            try
            {
                m_fn();
            }
            catch (...)
            {
                std::terminate();
            }
        }
    }

    // Copy constructor is public, but not implemented - return-value
    // optimization will mean that any attempt to actually copy one will fail at
    // link time.
    ScopeWarden(ScopeWarden const& other);

    ScopeWarden& operator=(ScopeWarden const&) = delete;

private:
    FN m_fn;
    bool m_dismissed;
};

template<typename FN>
ScopeWarden<FN> MakeScopeWarden(FN&& fn)
{
    return ScopeWarden<FN>(std::move(fn));
}
