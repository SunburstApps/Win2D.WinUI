/* Header file automatically generated from Microsoft.UI.Xaml.Hosting.idl */
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
#ifndef __Microsoft2EUI2EXaml2EHosting_h__
#define __Microsoft2EUI2EXaml2EHosting_h__
#ifndef __Microsoft2EUI2EXaml2EHosting_p_h__
#define __Microsoft2EUI2EXaml2EHosting_p_h__


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
#include "Microsoft.UI.Composition.h"
#include "Microsoft.UI.Xaml.h"
#include "Microsoft.UI.Xaml.Controls.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSource;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceFactory;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceGotFocusEventArgs;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreview;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreview

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreviewStatics;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreviewStatics

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IWindowsXamlManager;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IWindowsXamlManagerStatics;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlIsland;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland ABI::Microsoft::UI::Xaml::Hosting::IXamlIsland

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlIslandStatics;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandStatics

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationRequest;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationRequestFactory;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationResult;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationResultFactory;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSource;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSourceGotFocusEventArgs;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4d39d5c6-20cf-5a43-a299-992ee1fa8cfc"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*, ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource, Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE */


#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSourceTakeFocusRequestedEventArgs;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2270c94e-562b-5cbb-924f-0f9c727819d0"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*, ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource, Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE */


#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionPropertySet;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionPropertySet;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet ABI::Microsoft::UI::Composition::ICompositionPropertySet

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionAnimationBase;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase ABI::Microsoft::UI::Composition::ICompositionAnimationBase

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__


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
            namespace Xaml {
                namespace Controls {
                    class ScrollViewer;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IScrollViewer;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer ABI::Microsoft::UI::Xaml::Controls::IScrollViewer

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__






namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                class DependencyObject;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                interface IDependencyObject;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject ABI::Microsoft::UI::Xaml::IDependencyObject

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                class UIElement;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                interface IUIElement;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement ABI::Microsoft::UI::Xaml::IUIElement

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__






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
            
            typedef struct Point Point;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    
                    typedef enum XamlSourceFocusNavigationReason : int XamlSourceFocusNavigationReason;
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


















namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class ElementCompositionPreview;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class WindowsXamlManager;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlIsland;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlSourceFocusNavigationRequest;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlSourceFocusNavigationResult;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */













/*
 *
 * Struct Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationReason
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [v1_enum, contract] */
                    enum XamlSourceFocusNavigationReason : int
                    {
                        XamlSourceFocusNavigationReason_Programmatic = 0,
                        XamlSourceFocusNavigationReason_Restore = 1,
                        XamlSourceFocusNavigationReason_First = 3,
                        XamlSourceFocusNavigationReason_Last = 4,
                        XamlSourceFocusNavigationReason_Left = 7,
                        XamlSourceFocusNavigationReason_Up = 8,
                        XamlSourceFocusNavigationReason_Right = 9,
                        XamlSourceFocusNavigationReason_Down = 10,
                    };
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("A81014CD-55C1-506E-AA79-D9AC96DB9B8E"), exclusiveto, contract] */
                    MIDL_INTERFACE("A81014CD-55C1-506E-AA79-D9AC96DB9B8E")
                    IDesktopWindowXamlSource : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TakeFocusRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TakeFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NavigateFocus(
                            /* [in] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * request,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSource=_uuidof(IDesktopWindowXamlSource);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("7D2DB617-14E7-5D49-AEEC-AE10887E595D"), exclusiveto, contract] */
                    MIDL_INTERFACE("7D2DB617-14E7-5D49-AEEC-AE10887E595D")
                    IDesktopWindowXamlSourceFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */IInspectable * baseInterface,
                            /* [out] */IInspectable * * innerInterface,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceFactory=_uuidof(IDesktopWindowXamlSourceFactory);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("CC63D863-2071-5F6B-AEF9-C0BA35F3B8DF"), exclusiveto, contract] */
                    MIDL_INTERFACE("CC63D863-2071-5F6B-AEF9-C0BA35F3B8DF")
                    IDesktopWindowXamlSourceGotFocusEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceGotFocusEventArgs=_uuidof(IDesktopWindowXamlSourceGotFocusEventArgs);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("4F5A0E2C-4DDC-5C03-939F-6F3BDA560363"), exclusiveto, contract] */
                    MIDL_INTERFACE("4F5A0E2C-4DDC-5C03-939F-6F3BDA560363")
                    IDesktopWindowXamlSourceTakeFocusRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs=_uuidof(IDesktopWindowXamlSourceTakeFocusRequestedEventArgs);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreview";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("C8AD1EF4-A93F-5A25-85BD-7C498D9856D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("C8AD1EF4-A93F-5A25-85BD-7C498D9856D3")
                    IElementCompositionPreview : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IElementCompositionPreview=_uuidof(IElementCompositionPreview);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("84DA5A6C-0CFA-532B-9B15-CCD986374342"), exclusiveto, contract] */
                    MIDL_INTERFACE("84DA5A6C-0CFA-532B-9B15-CCD986374342")
                    IElementCompositionPreviewStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetElementVisual(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::IVisual * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementChildVisual(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::IVisual * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetElementChildVisual(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [in] */ABI::Microsoft::UI::Composition::IVisual * visual
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScrollViewerManipulationPropertySet(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IScrollViewer * scrollViewer,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionPropertySet * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitShowAnimation(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionAnimationBase * animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitHideAnimation(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionAnimationBase * animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsTranslationEnabled(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element,
                            /* [in] */::boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPointerPositionPropertySet(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * targetElement,
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionPropertySet * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IElementCompositionPreviewStatics=_uuidof(IElementCompositionPreviewStatics);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IWindowsXamlManager
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IWindowsXamlManager[] = L"Microsoft.UI.Xaml.Hosting.IWindowsXamlManager";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("85A2E562-7E8F-5333-A104-A3E672A2FFEE"), exclusiveto, contract] */
                    MIDL_INTERFACE("85A2E562-7E8F-5333-A104-A3E672A2FFEE")
                    IWindowsXamlManager : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowsXamlManager=_uuidof(IWindowsXamlManager);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics[] = L"Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("56CB591D-DE97-539F-881D-8CCDC44FA6C4"), exclusiveto, contract] */
                    MIDL_INTERFACE("56CB591D-DE97-539F-881D-8CCDC44FA6C4")
                    IWindowsXamlManagerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE InitializeForCurrentThread(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowsXamlManagerStatics=_uuidof(IWindowsXamlManagerStatics);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlIsland
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlIsland[] = L"Microsoft.UI.Xaml.Hosting.IXamlIsland";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("73C343E9-379E-5420-ADFE-C7F327445F12"), exclusiveto, contract] */
                    MIDL_INTERFACE("73C343E9-379E-5420-ADFE-C7F327445F12")
                    IXamlIsland : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusController(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetScreenOffsetOverride(
                            /* [in] */ABI::Windows::Foundation::Point offsetOnScreen
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFocus(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlIsland=_uuidof(IXamlIsland);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlIslandStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlIslandStatics[] = L"Microsoft.UI.Xaml.Hosting.IXamlIslandStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("CA595537-A0B1-5994-A7E4-CAD866BDFCAA"), exclusiveto, contract] */
                    MIDL_INTERFACE("CA595537-A0B1-5994-A7E4-CAD866BDFCAA")
                    IXamlIslandStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetIslandFromElement(
                            /* [in] */ABI::Microsoft::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlIsland * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlIslandStatics=_uuidof(IXamlIslandStatics);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("C883EA8B-4CE2-58BE-B547-66DEDF620312"), exclusiveto, contract] */
                    MIDL_INTERFACE("C883EA8B-4CE2-58BE-B547-66DEDF620312")
                    IXamlSourceFocusNavigationRequest : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HintRect(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationId(
                            /* [retval, out] */GUID * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationRequest=_uuidof(IXamlSourceFocusNavigationRequest);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("0F0F5D94-F903-5D6F-A059-F84EDF64826C"), exclusiveto, contract] */
                    MIDL_INTERFACE("0F0F5D94-F903-5D6F-A059-F84EDF64826C")
                    IXamlSourceFocusNavigationRequestFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithHintRect(
                            /* [in] */ABI::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithHintRectAndCorrelationId(
                            /* [in] */ABI::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [in] */GUID correlationId,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationRequestFactory=_uuidof(IXamlSourceFocusNavigationRequestFactory);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("D6BF378E-2AAC-5E5B-AC8A-6C5D9A4C1CB8"), exclusiveto, contract] */
                    MIDL_INTERFACE("D6BF378E-2AAC-5E5B-AC8A-6C5D9A4C1CB8")
                    IXamlSourceFocusNavigationResult : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasFocusMoved(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationResult=_uuidof(IXamlSourceFocusNavigationResult);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("F533F53B-5C00-5C88-9A41-3888CB86E495"), exclusiveto, contract] */
                    MIDL_INTERFACE("F533F53B-5C00-5C88-9A41-3888CB86E495")
                    IXamlSourceFocusNavigationResultFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */::boolean focusMoved,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationResultFactory=_uuidof(IXamlSourceFocusNavigationResultFactory);
                    
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IWindowsXamlManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_WindowsXamlManager[] = L"Microsoft.UI.Xaml.Hosting.WindowsXamlManager";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IXamlIslandStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlIsland ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlIsland_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlIsland_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlIsland[] = L"Microsoft.UI.Xaml.Hosting.XamlIsland";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest[] = L"Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult[] = L"Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000



#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CIVisual __x_ABI_CMicrosoft_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__





#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__



#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;





typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason;


































/*
 *
 * Struct Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationReason
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason
{
    XamlSourceFocusNavigationReason_Programmatic = 0,
    XamlSourceFocusNavigationReason_Restore = 1,
    XamlSourceFocusNavigationReason_First = 3,
    XamlSourceFocusNavigationReason_Last = 4,
    XamlSourceFocusNavigationReason_Left = 7,
    XamlSourceFocusNavigationReason_Up = 8,
    XamlSourceFocusNavigationReason_Right = 9,
    XamlSourceFocusNavigationReason_Down = 10,
};
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource";
/* [object, uuid("A81014CD-55C1-506E-AA79-D9AC96DB9B8E"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [retval, out] */boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Microsoft__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateFocus )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * request,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_add_TakeFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TakeFocusRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_remove_TakeFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_TakeFocusRequested(This,token) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_add_GotFocus(This,handler,token) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_NavigateFocus(This,request,result) \
    ( (This)->lpVtbl->NavigateFocus(This,request,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory";
/* [object, uuid("7D2DB617-14E7-5D49-AEEC-AE10887E595D"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs";
/* [object, uuid("CC63D863-2071-5F6B-AEF9-C0BA35F3B8DF"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs";
/* [object, uuid("4F5A0E2C-4DDC-5C03-939F-6F3BDA560363"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreview";
/* [object, uuid("C8AD1EF4-A93F-5A25-85BD-7C498D9856D3"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
/* [object, uuid("84DA5A6C-0CFA-532B-9B15-CCD986374342"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetElementVisual )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementChildVisual )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetElementChildVisual )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * visual
        );
    HRESULT ( STDMETHODCALLTYPE *GetScrollViewerManipulationPropertySet )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer * scrollViewer,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetImplicitShowAnimation )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetImplicitHideAnimation )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsTranslationEnabled )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointerPositionPropertySet )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * targetElement,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementVisual(This,element,result) \
    ( (This)->lpVtbl->GetElementVisual(This,element,result) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementChildVisual(This,element,result) \
    ( (This)->lpVtbl->GetElementChildVisual(This,element,result) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetElementChildVisual(This,element,visual) \
    ( (This)->lpVtbl->SetElementChildVisual(This,element,visual) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetScrollViewerManipulationPropertySet(This,scrollViewer,result) \
    ( (This)->lpVtbl->GetScrollViewerManipulationPropertySet(This,scrollViewer,result) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetImplicitShowAnimation(This,element,animation) \
    ( (This)->lpVtbl->SetImplicitShowAnimation(This,element,animation) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetImplicitHideAnimation(This,element,animation) \
    ( (This)->lpVtbl->SetImplicitHideAnimation(This,element,animation) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetIsTranslationEnabled(This,element,value) \
    ( (This)->lpVtbl->SetIsTranslationEnabled(This,element,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetPointerPositionPropertySet(This,targetElement,result) \
    ( (This)->lpVtbl->GetPointerPositionPropertySet(This,targetElement,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IWindowsXamlManager
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IWindowsXamlManager[] = L"Microsoft.UI.Xaml.Hosting.IWindowsXamlManager";
/* [object, uuid("85A2E562-7E8F-5333-A104-A3E672A2FFEE"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics[] = L"Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics";
/* [object, uuid("56CB591D-DE97-539F-881D-8CCDC44FA6C4"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InitializeForCurrentThread )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_InitializeForCurrentThread(This,result) \
    ( (This)->lpVtbl->InitializeForCurrentThread(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlIsland
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlIsland[] = L"Microsoft.UI.Xaml.Hosting.IXamlIsland";
/* [object, uuid("73C343E9-379E-5420-ADFE-C7F327445F12"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusController )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
        /* [retval, out] */IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetScreenOffsetOverride )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint offsetOnScreen
        );
    HRESULT ( STDMETHODCALLTYPE *SetFocus )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * This
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_get_FocusController(This,value) \
    ( (This)->lpVtbl->get_FocusController(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_SetScreenOffsetOverride(This,offsetOnScreen) \
    ( (This)->lpVtbl->SetScreenOffsetOverride(This,offsetOnScreen) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_SetFocus(This) \
    ( (This)->lpVtbl->SetFocus(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlIslandStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlIslandStatics[] = L"Microsoft.UI.Xaml.Hosting.IXamlIslandStatics";
/* [object, uuid("CA595537-A0B1-5994-A7E4-CAD866BDFCAA"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIslandFromElement )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIsland * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_GetIslandFromElement(This,element,result) \
    ( (This)->lpVtbl->GetIslandFromElement(This,element,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlIslandStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest";
/* [object, uuid("C883EA8B-4CE2-58BE-B547-66DEDF620312"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_HintRect(This,value) \
    ( (This)->lpVtbl->get_HintRect(This,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_CorrelationId(This,value) \
    ( (This)->lpVtbl->get_CorrelationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory";
/* [object, uuid("0F0F5D94-F903-5D6F-A059-F84EDF64826C"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRect )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRectAndCorrelationId )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [in] */GUID correlationId,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstance(This,reason,value) \
    ( (This)->lpVtbl->CreateInstance(This,reason,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstanceWithHintRect(This,reason,hintRect,value) \
    ( (This)->lpVtbl->CreateInstanceWithHintRect(This,reason,hintRect,value) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstanceWithHintRectAndCorrelationId(This,reason,hintRect,correlationId,value) \
    ( (This)->lpVtbl->CreateInstanceWithHintRectAndCorrelationId(This,reason,hintRect,correlationId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult";
/* [object, uuid("D6BF378E-2AAC-5E5B-AC8A-6C5D9A4C1CB8"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasFocusMoved )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_get_WasFocusMoved(This,value) \
    ( (This)->lpVtbl->get_WasFocusMoved(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory[] = L"Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory";
/* [object, uuid("F533F53B-5C00-5C88-9A41-3888CB86E495"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
        /* [in] */boolean focusMoved,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_CreateInstance(This,focusMoved,value) \
    ( (This)->lpVtbl->CreateInstance(This,focusMoved,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSource[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.WindowsXamlManager
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IWindowsXamlManagerStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IWindowsXamlManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_WindowsXamlManager[] = L"Microsoft.UI.Xaml.Hosting.WindowsXamlManager";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlIsland
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IXamlIslandStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlIsland ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlIsland_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlIsland_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlIsland[] = L"Microsoft.UI.Xaml.Hosting.XamlIsland";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest[] = L"Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 * Introduced to Microsoft.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_XamlSourceFocusNavigationResult[] = L"Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationResult";
#endif
#endif // MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EXaml2EHosting_p_h__

#endif // __Microsoft2EUI2EXaml2EHosting_h__
