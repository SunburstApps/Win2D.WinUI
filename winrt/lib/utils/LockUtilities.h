// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas
{
    typedef std::unique_lock<std::mutex> Lock;
    typedef std::unique_lock<std::recursive_mutex> RecursiveLock;

    template<typename LOCK>
    inline void MustOwnLock(LOCK const& lock)
    {
        assert(lock.owns_lock());
        UNREFERENCED_PARAMETER(lock);
    }

}}}}
