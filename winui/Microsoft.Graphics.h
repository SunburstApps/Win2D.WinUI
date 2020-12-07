/* Header file automatically generated from Microsoft.Graphics.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0229 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Microsoft2EGraphics_h__
#define __Microsoft2EGraphics_h__
#ifndef __Microsoft2EGraphics_p_h__
#define __Microsoft2EGraphics_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION)
#define MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.Foundation.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            interface IGeometrySource2D;
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D ABI::Microsoft::Graphics::IGeometrySource2D

#endif // ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__






/*
 *
 * Interface Microsoft.Graphics.IGeometrySource2D
 *
 * Introduced to Microsoft.Foundation.LiftedContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_IGeometrySource2D[] = L"Microsoft.Graphics.IGeometrySource2D";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            /* [object, uuid("EB4728DE-0C12-4428-A840-4DCAC71490E8"), contract] */
            MIDL_INTERFACE("EB4728DE-0C12-4428-A840-4DCAC71490E8")
            IGeometrySource2D : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IGeometrySource2D=_uuidof(IGeometrySource2D);
            
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D;

#endif // ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__





/*
 *
 * Interface Microsoft.Graphics.IGeometrySource2D
 *
 * Introduced to Microsoft.Foundation.LiftedContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_IGeometrySource2D[] = L"Microsoft.Graphics.IGeometrySource2D";
/* [object, uuid("EB4728DE-0C12-4428-A840-4DCAC71490E8"), contract] */
typedef struct __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2DVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2DVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000



#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EGraphics_p_h__

#endif // __Microsoft2EGraphics_h__
