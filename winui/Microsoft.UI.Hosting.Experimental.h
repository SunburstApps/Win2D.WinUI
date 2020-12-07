/* Header file automatically generated from Microsoft.UI.Hosting.Experimental.idl */
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
#ifndef __Microsoft2EUI2EHosting2EExperimental_h__
#define __Microsoft2EUI2EHosting2EExperimental_h__
#ifndef __Microsoft2EUI2EHosting2EExperimental_p_h__
#define __Microsoft2EUI2EHosting2EExperimental_p_h__


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

#if !defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_WINUICONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

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
#include "Microsoft.UI.h"
#include "Microsoft.UI.Composition.h"
#include "Microsoft.UI.Composition.Experimental.h"
#include "Microsoft.UI.Input.Experimental.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpContentBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge ABI::Microsoft::UI::Hosting::Experimental::IExpContentBridge

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpCoreWindowBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge ABI::Microsoft::UI::Hosting::Experimental::IExpCoreWindowBridge

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpCoreWindowBridgeStatics;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics ABI::Microsoft::UI::Hosting::Experimental::IExpCoreWindowBridgeStatics

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpDesktopWindowBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpDesktopWindowBridgeStatics;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridgeStatics

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpSystemVisualBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge ABI::Microsoft::UI::Hosting::Experimental::IExpSystemVisualBridge

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    interface IExpSystemVisualBridgeStatics;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics ABI::Microsoft::UI::Hosting::Experimental::IExpSystemVisualBridgeStatics

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    class ExpDesktopWindowBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c822b4de-2f11-5888-81af-09b987f8e16e"))
ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*, ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpNavigateFocusRequestedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpNavigateFocusRequestedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a512d3b7-9846-50b8-8417-aec7939086a6"))
ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*, ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge, Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::ExpDesktopWindowBridge*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000






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
                namespace Experimental {
                    class ExpCompositionContent;
                } /* Experimental */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

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





namespace ABI {
    namespace Microsoft {
        namespace UI {
            
            typedef struct DisplayId DisplayId;
            
        } /* UI */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusNavigationRequest;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusNavigationRequest;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusNavigationResult;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusNavigationResult;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationResult

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpInputSite;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputSite;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite ABI::Microsoft::UI::Input::Experimental::IExpInputSite

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__







namespace ABI {
    namespace Microsoft {
        namespace UI {
            
            typedef struct WindowId WindowId;
            
        } /* UI */
    } /* Microsoft */
} /* ABI */



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
        namespace UI {
            namespace Core {
                class CoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow ABI::Windows::UI::Core::ICoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__












namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    class ExpCoreWindowBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    class ExpSystemVisualBridge;
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */












/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpContentBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpContentBridge";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("5B85BA18-F850-5621-919E-E545723AB94E"), contract] */
                    MIDL_INTERFACE("5B85BA18-F850-5621-919E-E545723AB94E")
                    IExpContentBridge : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Connect(
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent * content,
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpContentBridge=_uuidof(IExpContentBridge);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpCoreWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("87B0E524-DF7F-55E6-B8DF-F8032FC115CE"), exclusiveto, contract] */
                    MIDL_INTERFACE("87B0E524-DF7F-55E6-B8DF-F8032FC115CE")
                    IExpCoreWindowBridge : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCoreWindowBridge=_uuidof(IExpCoreWindowBridge);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpCoreWindowBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("B888061B-D5DC-58A8-9E44-C881EA3AAECB"), exclusiveto, contract] */
                    MIDL_INTERFACE("B888061B-D5DC-58A8-9E44-C881EA3AAECB")
                    IExpCoreWindowBridgeStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositor * compositor,
                            /* [in] */ABI::Windows::UI::Core::ICoreWindow * coreWindow,
                            /* [retval, out] */ABI::Microsoft::UI::Hosting::Experimental::IExpCoreWindowBridge * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsSupported(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCoreWindowBridgeStatics=_uuidof(IExpCoreWindowBridgeStatics);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpDesktopWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("CD7C2FED-95AE-532D-90CA-92C4DC3A09B9"), exclusiveto, contract] */
                    MIDL_INTERFACE("CD7C2FED-95AE-532D-90CA-92C4DC3A09B9")
                    IExpDesktopWindowBridge : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppliedScaleFactor(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChildWindowId(
                            /* [retval, out] */ABI::Microsoft::UI::WindowId * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TopLevelDisplayId(
                            /* [retval, out] */ABI::Microsoft::UI::DisplayId * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetOverrideScaleFactor(
                            /* [in] */FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyHostActivationChange(
                            /* [in] */::boolean active
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NavigateFocus(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * request,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationResult * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE PreTranslateKeyboardMessage(
                            /* [in] */UINT64 windowHandle,
                            /* [in] */UINT32 keyboardMessage,
                            /* [in] */UINT32 virtualKey,
                            /* [in] */UINT64 keyInfo,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TakeFocusRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TakeFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TopLevelStateChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TopLevelStateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpDesktopWindowBridge=_uuidof(IExpDesktopWindowBridge);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpDesktopWindowBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("4DD9D544-3DDC-56B9-9682-6FBDCAE9B464"), exclusiveto, contract] */
                    MIDL_INTERFACE("4DD9D544-3DDC-56B9-9682-6FBDCAE9B464")
                    IExpDesktopWindowBridgeStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositor * compositor,
                            /* [in] */ABI::Microsoft::UI::WindowId parentWindowId,
                            /* [retval, out] */ABI::Microsoft::UI::Hosting::Experimental::IExpDesktopWindowBridge * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsSupported(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpDesktopWindowBridgeStatics=_uuidof(IExpDesktopWindowBridgeStatics);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpSystemVisualBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("C1AD453A-881B-500A-8315-A3563BBEF753"), exclusiveto, contract] */
                    MIDL_INTERFACE("C1AD453A-881B-500A-8315-A3563BBEF753")
                    IExpSystemVisualBridge : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BridgeVisual(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::IVisual * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpSystemVisualBridge=_uuidof(IExpSystemVisualBridge);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpSystemVisualBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Hosting {
                namespace Experimental {
                    /* [object, uuid("29469AC9-FE18-540C-B0A8-060BF7618D65"), exclusiveto, contract] */
                    MIDL_INTERFACE("29469AC9-FE18-540C-B0A8-060BF7618D65")
                    IExpSystemVisualBridgeStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositor * compositor,
                            /* [retval, out] */ABI::Microsoft::UI::Hosting::Experimental::IExpSystemVisualBridge * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsSupported(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpSystemVisualBridgeStatics=_uuidof(IExpSystemVisualBridgeStatics);
                    
                } /* Experimental */
            } /* Hosting */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge ** Default Interface **
 *    Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge ** Default Interface **
 *    Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositor __x_ABI_CMicrosoft_CUI_CComposition_CICompositor;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositor_FWD_DEFINED__





#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CIVisual __x_ABI_CMicrosoft_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__






typedef struct __x_ABI_CMicrosoft_CUI_CDisplayId __x_ABI_CMicrosoft_CUI_CDisplayId;



#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__








typedef struct __x_ABI_CMicrosoft_CUI_CWindowId __x_ABI_CMicrosoft_CUI_CWindowId;



#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__

























/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpContentBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpContentBridge";
/* [object, uuid("5B85BA18-F850-5621-919E-E545723AB94E"), contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * content,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridgeVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_Connect(This,content,inputSite) \
    ( (This)->lpVtbl->Connect(This,content,inputSite) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpContentBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpCoreWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge";
/* [object, uuid("87B0E524-DF7F-55E6-B8DF-F8032FC115CE"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpCoreWindowBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics";
/* [object, uuid("B888061B-D5DC-58A8-9E44-C881EA3AAECB"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * compositor,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CICoreWindow * coreWindow,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridge * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics * This,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_Create(This,compositor,coreWindow,result) \
    ( (This)->lpVtbl->Create(This,compositor,coreWindow,result) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpCoreWindowBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpDesktopWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge";
/* [object, uuid("CD7C2FED-95AE-532D-90CA-92C4DC3A09B9"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppliedScaleFactor )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChildWindowId )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CWindowId * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TopLevelDisplayId )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CDisplayId * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetOverrideScaleFactor )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyHostActivationChange )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */boolean active
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateFocus )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * request,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *PreTranslateKeyboardMessage )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */UINT64 windowHandle,
        /* [in] */UINT32 keyboardMessage,
        /* [in] */UINT32 virtualKey,
        /* [in] */UINT64 keyInfo,
        /* [retval, out] */boolean * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TopLevelStateChanged )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CHosting__CExperimental__CExpDesktopWindowBridge_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TopLevelStateChanged )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_get_AppliedScaleFactor(This,value) \
    ( (This)->lpVtbl->get_AppliedScaleFactor(This,value) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_get_ChildWindowId(This,value) \
    ( (This)->lpVtbl->get_ChildWindowId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_get_TopLevelDisplayId(This,value) \
    ( (This)->lpVtbl->get_TopLevelDisplayId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_SetOverrideScaleFactor(This,value) \
    ( (This)->lpVtbl->SetOverrideScaleFactor(This,value) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_NotifyHostActivationChange(This,active) \
    ( (This)->lpVtbl->NotifyHostActivationChange(This,active) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_NavigateFocus(This,request,result) \
    ( (This)->lpVtbl->NavigateFocus(This,request,result) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_PreTranslateKeyboardMessage(This,windowHandle,keyboardMessage,virtualKey,keyInfo,result) \
    ( (This)->lpVtbl->PreTranslateKeyboardMessage(This,windowHandle,keyboardMessage,virtualKey,keyInfo,result) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_add_TakeFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TakeFocusRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_remove_TakeFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_TakeFocusRequested(This,token) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_add_TopLevelStateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_TopLevelStateChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_remove_TopLevelStateChanged(This,token) \
    ( (This)->lpVtbl->remove_TopLevelStateChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpDesktopWindowBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics";
/* [object, uuid("4DD9D544-3DDC-56B9-9682-6FBDCAE9B464"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * compositor,
        /* [in] */__x_ABI_CMicrosoft_CUI_CWindowId parentWindowId,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics * This,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_Create(This,compositor,parentWindowId,result) \
    ( (This)->lpVtbl->Create(This,compositor,parentWindowId,result) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpSystemVisualBridge[] = L"Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge";
/* [object, uuid("C1AD453A-881B-500A-8315-A3563BBEF753"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BridgeVisual )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_get_BridgeVisual(This,value) \
    ( (This)->lpVtbl->get_BridgeVisual(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Hosting_Experimental_IExpSystemVisualBridgeStatics[] = L"Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics";
/* [object, uuid("29469AC9-FE18-540C-B0A8-060BF7618D65"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositor * compositor,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridge * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics * This,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_Create(This,compositor,result) \
    ( (This)->lpVtbl->Create(This,compositor,result) )

#define __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpSystemVisualBridgeStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpCoreWindowBridge ** Default Interface **
 *    Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpCoreWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpCoreWindowBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpDesktopWindowBridge ** Default Interface **
 *    Microsoft.UI.Hosting.Experimental.IExpContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpDesktopWindowBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpDesktopWindowBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridgeStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Hosting.Experimental.IExpSystemVisualBridge ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Hosting_Experimental_ExpSystemVisualBridge[] = L"Microsoft.UI.Hosting.Experimental.ExpSystemVisualBridge";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EHosting2EExperimental_p_h__

#endif // __Microsoft2EUI2EHosting2EExperimental_h__
