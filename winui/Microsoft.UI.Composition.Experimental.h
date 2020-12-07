/* Header file automatically generated from Microsoft.UI.Composition.Experimental.idl */
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
#ifndef __Microsoft2EUI2EComposition2EExperimental_h__
#define __Microsoft2EUI2EComposition2EExperimental_h__
#ifndef __Microsoft2EUI2EComposition2EExperimental_p_h__
#define __Microsoft2EUI2EComposition2EExperimental_p_h__


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
#include "Microsoft.System.h"
#include "Microsoft.UI.Composition.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContent;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentAutomationProviderRequestedEventArgs;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentAutomationProviderRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentEnvironment;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEnvironment

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentEnvironmentStatics;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEnvironmentStatics

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentEventArgs;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentFactory;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentFactory

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionContentStatics;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentStatics

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionPropertyChanged;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged ABI::Microsoft::UI::Composition::Experimental::IExpCompositionPropertyChanged

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionPropertyChangedListener;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener ABI::Microsoft::UI::Composition::Experimental::IExpCompositionPropertyChangedListener

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositionVisualSurfaceStatics;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics ABI::Microsoft::UI::Composition::Experimental::IExpCompositionVisualSurfaceStatics

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpCompositor;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor ABI::Microsoft::UI::Composition::Experimental::IExpCompositor

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    interface IExpVisual;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual ABI::Microsoft::UI::Composition::Experimental::IExpVisual

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    class ExpCompositionContent;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    class ExpCompositionContentAutomationProviderRequestedEventArgs;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f0cf2975-12f5-50af-845a-1af3c23139f9"))
ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentAutomationProviderRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*, ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentAutomationProviderRequestedEventArgs*, ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentAutomationProviderRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Composition.Experimental.ExpCompositionContent, Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentAutomationProviderRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentAutomationProviderRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentAutomationProviderRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    class ExpCompositionContentEventArgs;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e4f515f-7ec9-526b-b7e0-b4038f5ae71e"))
ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*, ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentEventArgs*, ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Composition.Experimental.ExpCompositionContent, Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::ExpCompositionContentEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent*,ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000






namespace ABI {
    namespace Microsoft {
        namespace System {
            class DispatcherQueue;
        } /* System */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace System {
            interface IDispatcherQueue;
        } /* System */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CSystem_CIDispatcherQueue ABI::Microsoft::System::IDispatcherQueue

#endif // ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionNotificationDeferral;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionNotificationDeferral;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral ABI::Microsoft::UI::Composition::ICompositionNotificationDeferral

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionObject;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionObject;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject ABI::Microsoft::UI::Composition::ICompositionObject

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionVisualSurface;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionVisualSurface;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface ABI::Microsoft::UI::Composition::ICompositionVisualSurface

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class Compositor;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositor;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositor ABI::Microsoft::UI::Composition::ICompositor

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class Visual;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface IVisual;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CIVisual ABI::Microsoft::UI::Composition::IVisual

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix3x2 Matrix3x2;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector2 Vector2;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector4 Vector4;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Graphics {
            
            typedef struct SizeInt32 SizeInt32;
            
        } /* Graphics */
    } /* Windows */
} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* UI */
    } /* Windows */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    
                    typedef enum ExpExpressionNotificationProperty : int ExpExpressionNotificationProperty;
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */















namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    class ExpCompositionContentEnvironment;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */














/*
 *
 * Struct Microsoft.UI.Composition.Experimental.ExpExpressionNotificationProperty
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [v1_enum, contract] */
                    enum ExpExpressionNotificationProperty : int
                    {
                        ExpExpressionNotificationProperty_Undefined = 0,
                        ExpExpressionNotificationProperty_Clip = 1,
                        ExpExpressionNotificationProperty_Offset = 2,
                        ExpExpressionNotificationProperty_Opacity = 3,
                        ExpExpressionNotificationProperty_Size = 4,
                        ExpExpressionNotificationProperty_RelativeOffset = 5,
                        ExpExpressionNotificationProperty_RelativeSize = 6,
                        ExpExpressionNotificationProperty_AnchorPoint = 7,
                        ExpExpressionNotificationProperty_CenterPoint = 8,
                        ExpExpressionNotificationProperty_Orientation = 9,
                        ExpExpressionNotificationProperty_RotationAngle = 10,
                        ExpExpressionNotificationProperty_RotationAxis = 11,
                        ExpExpressionNotificationProperty_Scale = 12,
                        ExpExpressionNotificationProperty_TransformMatrix = 13,
                        ExpExpressionNotificationProperty_BottomInset = 14,
                        ExpExpressionNotificationProperty_LeftInset = 15,
                        ExpExpressionNotificationProperty_RightInset = 16,
                        ExpExpressionNotificationProperty_TopInset = 17,
                        ExpExpressionNotificationProperty_LeftRadiusX = 18,
                        ExpExpressionNotificationProperty_LeftRadiusY = 19,
                        ExpExpressionNotificationProperty_BottomRightRadiusX = 20,
                        ExpExpressionNotificationProperty_BottomRightRadiusY = 21,
                        ExpExpressionNotificationProperty_TopLeftRadiusX = 22,
                        ExpExpressionNotificationProperty_TopLeftRadiusY = 23,
                        ExpExpressionNotificationProperty_TopRightRadiusX = 24,
                        ExpExpressionNotificationProperty_TopRightRadiusY = 25,
                    };
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContent
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContent[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContent";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("7E8E5D4C-B0C8-5070-BD3B-123714471328"), exclusiveto, contract] */
                    MIDL_INTERFACE("7E8E5D4C-B0C8-5070-BD3B-123714471328")
                    IExpCompositionContent : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualSize(
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Compositor(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositor * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                            /* [retval, out] */ABI::Microsoft::System::IDispatcherQueue * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayScale(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Environment(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEnvironment * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Environment(
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEnvironment * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentVisible(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsContentVisible(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSiteVisible(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizationScale(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedSize(
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestedSize(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Root(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::IVisual * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Root(
                            /* [in] */ABI::Microsoft::UI::Composition::IVisual * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStateChangedDeferral(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionNotificationDeferral * * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AutomationProviderRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AutomationProviderRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Closed(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Closed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CompositorConnected(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CompositorConnected(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StateChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContent=_uuidof(IExpCompositionContent);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("B2539FAA-F8A7-580E-B7BA-A87C916D531B"), exclusiveto, contract] */
                    MIDL_INTERFACE("B2539FAA-F8A7-580E-B7BA-A87C916D531B")
                    IExpCompositionContentAutomationProviderRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationProvider(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutomationProvider(
                            /* [in] */IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentAutomationProviderRequestedEventArgs=_uuidof(IExpCompositionContentAutomationProviderRequestedEventArgs);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEnvironment[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("A9BDC47F-7C18-5236-A1A6-D45BA30C4A14"), exclusiveto, contract] */
                    MIDL_INTERFACE("A9BDC47F-7C18-5236-A1A6-D45BA30C4A14")
                    IExpCompositionContentEnvironment : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayScale(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultOrientation(
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultRasterizationScale(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ChangeValues(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 defaultOrientation,
                            /* [in] */FLOAT defaultRasterizationScale,
                            /* [in] */FLOAT displayScale
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentEnvironment=_uuidof(IExpCompositionContentEnvironment);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEnvironmentStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("BFF53B2E-9FD5-5062-BFE2-A8B13E7A0265"), exclusiveto, contract] */
                    MIDL_INTERFACE("BFF53B2E-9FD5-5062-BFE2-A8B13E7A0265")
                    IExpCompositionContentEnvironmentStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContentEnvironment * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentEnvironmentStatics=_uuidof(IExpCompositionContentEnvironmentStatics);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEventArgs[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("AE73101F-CAA8-5194-BA00-77284B776FD3"), exclusiveto, contract] */
                    MIDL_INTERFACE("AE73101F-CAA8-5194-BA00-77284B776FD3")
                    IExpCompositionContentEventArgs : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentEventArgs=_uuidof(IExpCompositionContentEventArgs);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentFactory[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("1F44103A-6222-5B72-A663-3ADC17561DCD"), exclusiveto, contract] */
                    MIDL_INTERFACE("1F44103A-6222-5B72-A663-3ADC17561DCD")
                    IExpCompositionContentFactory : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentFactory=_uuidof(IExpCompositionContentFactory);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("1292B60A-3F39-5C71-B827-98EF24F41111"), exclusiveto, contract] */
                    MIDL_INTERFACE("1292B60A-3F39-5C71-B827-98EF24F41111")
                    IExpCompositionContentStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositor * compositor,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionContentStatics=_uuidof(IExpCompositionContentStatics);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChanged
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionPropertyChanged[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChanged";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("12B579A9-6A27-5CDE-A2A1-C557BB7DFDB3"), contract] */
                    MIDL_INTERFACE("12B579A9-6A27-5CDE-A2A1-C557BB7DFDB3")
                    IExpCompositionPropertyChanged : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyChangedListener(
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionPropertyChangedListener * listener
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionPropertyChanged=_uuidof(IExpCompositionPropertyChanged);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChangedListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionPropertyChangedListener[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChangedListener";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("5F9C3D96-1E77-5980-8B28-7A9B8614A863"), contract] */
                    MIDL_INTERFACE("5F9C3D96-1E77-5980-8B28-7A9B8614A863")
                    IExpCompositionPropertyChangedListener : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE NotifyBooleanPropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */::boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyColorPropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::UI::Color value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyMatrix3x2PropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyMatrix4x4PropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix4x4 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyReferencePropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifySinglePropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyVector2PropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyVector3PropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyVector4PropertyChanged(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionObject * target,
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::ExpExpressionNotificationProperty property,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector4 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionPropertyChangedListener=_uuidof(IExpCompositionPropertyChangedListener);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionVisualSurfaceStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("46193461-9018-5674-A09C-4AE6A29DAA35"), exclusiveto, contract] */
                    MIDL_INTERFACE("46193461-9018-5674-A09C-4AE6A29DAA35")
                    IExpCompositionVisualSurfaceStatics : public IInspectable
                    {
                    public:
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateVisualSurfaceWithRealizationSize(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositor * compositor,
                            /* [in] */ABI::Windows::Graphics::SizeInt32 realizationSize,
                            /* [in] */::boolean frozen,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionVisualSurface * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositionVisualSurfaceStatics=_uuidof(IExpCompositionVisualSurfaceStatics);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositor
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositor[] = L"Microsoft.UI.Composition.Experimental.IExpCompositor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("DDFE7441-66C9-5654-9E80-FF2677295995"), contract] */
                    MIDL_INTERFACE("DDFE7441-66C9-5654-9E80-FF2677295995")
                    IExpCompositor : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE OpenSharedManipulationTransformFromHandle(
                            /* [in] */UINT64 handle,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCompositor=_uuidof(IExpCompositor);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpVisual
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpVisual[] = L"Microsoft.UI.Composition.Experimental.IExpVisual";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Experimental {
                    /* [object, uuid("8FACCF79-665B-578F-8197-F8A64F8833D6"), contract] */
                    MIDL_INTERFACE("8FACCF79-665B-578F-8197-F8A64F8833D6")
                    IExpVisual : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetInteraction(
                            /* [in] */IInspectable * interaction
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpVisual=_uuidof(IExpVisual);
                    
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContent_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContent[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContent";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#ifndef ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CSystem_CIDispatcherQueue __x_ABI_CMicrosoft_CSystem_CIDispatcherQueue;

#endif // ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__




#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral __x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject __x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositor __x_ABI_CMicrosoft_CUI_CComposition_CICompositor;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CIVisual __x_ABI_CMicrosoft_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;





typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;




typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty;




























/*
 *
 * Struct Microsoft.UI.Composition.Experimental.ExpExpressionNotificationProperty
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty
{
    ExpExpressionNotificationProperty_Undefined = 0,
    ExpExpressionNotificationProperty_Clip = 1,
    ExpExpressionNotificationProperty_Offset = 2,
    ExpExpressionNotificationProperty_Opacity = 3,
    ExpExpressionNotificationProperty_Size = 4,
    ExpExpressionNotificationProperty_RelativeOffset = 5,
    ExpExpressionNotificationProperty_RelativeSize = 6,
    ExpExpressionNotificationProperty_AnchorPoint = 7,
    ExpExpressionNotificationProperty_CenterPoint = 8,
    ExpExpressionNotificationProperty_Orientation = 9,
    ExpExpressionNotificationProperty_RotationAngle = 10,
    ExpExpressionNotificationProperty_RotationAxis = 11,
    ExpExpressionNotificationProperty_Scale = 12,
    ExpExpressionNotificationProperty_TransformMatrix = 13,
    ExpExpressionNotificationProperty_BottomInset = 14,
    ExpExpressionNotificationProperty_LeftInset = 15,
    ExpExpressionNotificationProperty_RightInset = 16,
    ExpExpressionNotificationProperty_TopInset = 17,
    ExpExpressionNotificationProperty_LeftRadiusX = 18,
    ExpExpressionNotificationProperty_LeftRadiusY = 19,
    ExpExpressionNotificationProperty_BottomRightRadiusX = 20,
    ExpExpressionNotificationProperty_BottomRightRadiusY = 21,
    ExpExpressionNotificationProperty_TopLeftRadiusX = 22,
    ExpExpressionNotificationProperty_TopLeftRadiusY = 23,
    ExpExpressionNotificationProperty_TopRightRadiusX = 24,
    ExpExpressionNotificationProperty_TopRightRadiusY = 25,
};
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContent
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContent[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContent";
/* [object, uuid("7E8E5D4C-B0C8-5070-BD3B-123714471328"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualSize )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CSystem_CIDispatcherQueue * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayScale )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Environment )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Environment )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentVisible )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsContentVisible )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSiteVisible )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizationScale )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedSize )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestedSize )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Root )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Root )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStateChangedDeferral )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionNotificationDeferral * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AutomationProviderRequested )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentAutomationProviderRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AutomationProviderRequested )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CompositorConnected )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CompositorConnected )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContent_Microsoft__CUI__CComposition__CExperimental__CExpCompositionContentEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_ActualSize(This,value) \
    ( (This)->lpVtbl->get_ActualSize(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_Compositor(This,value) \
    ( (This)->lpVtbl->get_Compositor(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_DispatcherQueue(This,value) \
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_DisplayScale(This,value) \
    ( (This)->lpVtbl->get_DisplayScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_Environment(This,value) \
    ( (This)->lpVtbl->get_Environment(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_put_Environment(This,value) \
    ( (This)->lpVtbl->put_Environment(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_IsContentVisible(This,value) \
    ( (This)->lpVtbl->get_IsContentVisible(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_put_IsContentVisible(This,value) \
    ( (This)->lpVtbl->put_IsContentVisible(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_IsSiteVisible(This,value) \
    ( (This)->lpVtbl->get_IsSiteVisible(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_RasterizationScale(This,value) \
    ( (This)->lpVtbl->get_RasterizationScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_RequestedSize(This,value) \
    ( (This)->lpVtbl->get_RequestedSize(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_put_RequestedSize(This,value) \
    ( (This)->lpVtbl->put_RequestedSize(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_get_Root(This,value) \
    ( (This)->lpVtbl->get_Root(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_put_Root(This,value) \
    ( (This)->lpVtbl->put_Root(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_CreateStateChangedDeferral(This,result) \
    ( (This)->lpVtbl->CreateStateChangedDeferral(This,result) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_add_AutomationProviderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AutomationProviderRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_remove_AutomationProviderRequested(This,token) \
    ( (This)->lpVtbl->remove_AutomationProviderRequested(This,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_add_Closed(This,handler,token) \
    ( (This)->lpVtbl->add_Closed(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_remove_Closed(This,token) \
    ( (This)->lpVtbl->remove_Closed(This,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_add_CompositorConnected(This,handler,token) \
    ( (This)->lpVtbl->add_CompositorConnected(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_remove_CompositorConnected(This,token) \
    ( (This)->lpVtbl->remove_CompositorConnected(This,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_add_StateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_remove_StateChanged(This,token) \
    ( (This)->lpVtbl->remove_StateChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs";
/* [object, uuid("B2539FAA-F8A7-580E-B7BA-A87C916D531B"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutomationProvider )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
        /* [in] */IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_get_AutomationProvider(This,value) \
    ( (This)->lpVtbl->get_AutomationProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_put_AutomationProvider(This,value) \
    ( (This)->lpVtbl->put_AutomationProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEnvironment[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment";
/* [object, uuid("A9BDC47F-7C18-5236-A1A6-D45BA30C4A14"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayScale )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultOrientation )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultRasterizationScale )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
        /* [retval, out] */FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeValues )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 defaultOrientation,
        /* [in] */FLOAT defaultRasterizationScale,
        /* [in] */FLOAT displayScale
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_get_DisplayScale(This,value) \
    ( (This)->lpVtbl->get_DisplayScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_get_DefaultOrientation(This,value) \
    ( (This)->lpVtbl->get_DefaultOrientation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_get_DefaultRasterizationScale(This,value) \
    ( (This)->lpVtbl->get_DefaultRasterizationScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_ChangeValues(This,defaultOrientation,defaultRasterizationScale,displayScale) \
    ( (This)->lpVtbl->ChangeValues(This,defaultOrientation,defaultRasterizationScale,displayScale) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEnvironmentStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics";
/* [object, uuid("BFF53B2E-9FD5-5062-BFE2-A8B13E7A0265"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironment * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_Create(This,result) \
    ( (This)->lpVtbl->Create(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEnvironmentStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentEventArgs[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs";
/* [object, uuid("AE73101F-CAA8-5194-BA00-77284B776FD3"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentFactory[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentFactory";
/* [object, uuid("1F44103A-6222-5B72-A663-3ADC17561DCD"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionContentStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics";
/* [object, uuid("1292B60A-3F39-5C71-B827-98EF24F41111"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * compositor,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_Create(This,compositor,result) \
    ( (This)->lpVtbl->Create(This,compositor,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContentStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChanged
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionPropertyChanged[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChanged";
/* [object, uuid("12B579A9-6A27-5CDE-A2A1-C557BB7DFDB3"), contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetPropertyChangedListener )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * listener
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_SetPropertyChangedListener(This,property,listener) \
    ( (This)->lpVtbl->SetPropertyChangedListener(This,property,listener) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChanged_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChangedListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionPropertyChangedListener[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionPropertyChangedListener";
/* [object, uuid("5F9C3D96-1E77-5980-8B28-7A9B8614A863"), contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyBooleanPropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyColorPropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyMatrix3x2PropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyMatrix4x4PropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyReferencePropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property
        );
    HRESULT ( STDMETHODCALLTYPE *NotifySinglePropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyVector2PropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyVector3PropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyVector4PropertyChanged )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionObject * target,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CExpExpressionNotificationProperty property,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListenerVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyBooleanPropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyBooleanPropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyColorPropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyColorPropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyMatrix3x2PropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyMatrix3x2PropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyMatrix4x4PropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyMatrix4x4PropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyReferencePropertyChanged(This,target,property) \
    ( (This)->lpVtbl->NotifyReferencePropertyChanged(This,target,property) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifySinglePropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifySinglePropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyVector2PropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyVector2PropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyVector3PropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyVector3PropertyChanged(This,target,property,value) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_NotifyVector4PropertyChanged(This,target,property,value) \
    ( (This)->lpVtbl->NotifyVector4PropertyChanged(This,target,property,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionPropertyChangedListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositionVisualSurfaceStatics[] = L"Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics";
/* [object, uuid("46193461-9018-5674-A09C-4AE6A29DAA35"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateVisualSurfaceWithRealizationSize )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * compositor,
        /* [in] */__x_ABI_CWindows_CGraphics_CSizeInt32 realizationSize,
        /* [in] */boolean frozen,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionVisualSurface * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_CreateVisualSurfaceWithRealizationSize(This,compositor,realizationSize,frozen,result) \
    ( (This)->lpVtbl->CreateVisualSurfaceWithRealizationSize(This,compositor,realizationSize,frozen,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionVisualSurfaceStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpCompositor
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpCompositor[] = L"Microsoft.UI.Composition.Experimental.IExpCompositor";
/* [object, uuid("DDFE7441-66C9-5654-9E80-FF2677295995"), contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenSharedManipulationTransformFromHandle )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor * This,
        /* [in] */UINT64 handle,
        /* [retval, out] */IInspectable * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositorVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_OpenSharedManipulationTransformFromHandle(This,handle,result) \
    ( (This)->lpVtbl->OpenSharedManipulationTransformFromHandle(This,handle,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Experimental.IExpVisual
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Experimental_IExpVisual[] = L"Microsoft.UI.Composition.Experimental.IExpVisual";
/* [object, uuid("8FACCF79-665B-578F-8197-F8A64F8833D6"), contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetInteraction )(
        __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual * This,
        /* [in] */IInspectable * interaction
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisualVtbl;

interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisualVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_SetInteraction(This,interaction) \
    ( (This)->lpVtbl->SetInteraction(This,interaction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpVisual_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContent
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionContentStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContent_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContent[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContent";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentAutomationProviderRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentAutomationProviderRequestedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironmentStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentEnvironment ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentEnvironment[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentEnvironment";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Experimental.IExpCompositionContentEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionContentEventArgs[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionContentEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Experimental.IExpCompositionVisualSurfaceStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Experimental_ExpCompositionVisualSurface[] = L"Microsoft.UI.Composition.Experimental.ExpCompositionVisualSurface";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EExperimental_p_h__

#endif // __Microsoft2EUI2EComposition2EExperimental_h__
