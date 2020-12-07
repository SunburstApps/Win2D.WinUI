/* Header file automatically generated from Microsoft.UI.Input.Experimental.idl */
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
#ifndef __Microsoft2EUI2EInput2EExperimental_h__
#define __Microsoft2EUI2EInput2EExperimental_h__
#ifndef __Microsoft2EUI2EInput2EExperimental_p_h__
#define __Microsoft2EUI2EInput2EExperimental_p_h__


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
#include "Microsoft.System.h"
#include "Microsoft.UI.Composition.h"
#include "Microsoft.UI.Composition.Experimental.h"
#include "Microsoft.UI.Hosting.Experimental.h"
#include "Windows.Devices.Input.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpContextMenuKeyEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs ABI::Microsoft::UI::Input::Experimental::IExpContextMenuKeyEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpCrossSlidingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs ABI::Microsoft::UI::Input::Experimental::IExpCrossSlidingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpDirectManipulation;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulation

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpDirectManipulationStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulationStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpDraggingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs ABI::Microsoft::UI::Input::Experimental::IExpDraggingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusChangedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpFocusChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusController;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController ABI::Microsoft::UI::Input::Experimental::IExpFocusController

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusControllerStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics ABI::Microsoft::UI::Input::Experimental::IExpFocusControllerStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusNavigationHost;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHost

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusNavigationHostStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHostStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusNavigationRequestStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequestStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver ABI::Microsoft::UI::Input::Experimental::IExpFocusObserver

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpFocusObserverStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics ABI::Microsoft::UI::Input::Experimental::IExpFocusObserverStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpGestureRecognizer;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpHoldingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs ABI::Microsoft::UI::Input::Experimental::IExpHoldingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpIndependentPointerInputObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver ABI::Microsoft::UI::Input::Experimental::IExpIndependentPointerInputObserver

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpIndependentPointerInputObserverStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics ABI::Microsoft::UI::Input::Experimental::IExpIndependentPointerInputObserverStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputActivationListener;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListener

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputActivationListenerActivationChangedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListenerActivationChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputActivationListenerPartnerStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListenerPartnerStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputObject;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject ABI::Microsoft::UI::Input::Experimental::IExpInputObject

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputObjectFactory;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory ABI::Microsoft::UI::Input::Experimental::IExpInputObjectFactory

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpInputSiteStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics ABI::Microsoft::UI::Input::Experimental::IExpInputSiteStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpKeyboardInput;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpKeyboardInputStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInputStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpManipulationCompletedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpManipulationCompletedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpManipulationInertiaStartingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs ABI::Microsoft::UI::Input::Experimental::IExpManipulationInertiaStartingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpManipulationStartedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpManipulationStartedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpManipulationUpdatedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpManipulationUpdatedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpMouseCapture;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture ABI::Microsoft::UI::Input::Experimental::IExpMouseCapture

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpMouseCaptureStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics ABI::Microsoft::UI::Input::Experimental::IExpMouseCaptureStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpMouseWheelParameters;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters ABI::Microsoft::UI::Input::Experimental::IExpMouseWheelParameters

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerCursorController;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController ABI::Microsoft::UI::Input::Experimental::IExpPointerCursorController

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerCursorControllerStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics ABI::Microsoft::UI::Input::Experimental::IExpPointerCursorControllerStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerInputObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserver

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerInputObserverFactory;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserverFactory

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerInputObserverStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserverStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerPoint;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerPointProperties;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties ABI::Microsoft::UI::Input::Experimental::IExpPointerPointProperties

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpPointerPointStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics ABI::Microsoft::UI::Input::Experimental::IExpPointerPointStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpRightTappedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpRightTappedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpTappedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs ABI::Microsoft::UI::Input::Experimental::IExpTappedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpTouchHitTestingProvider;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProvider

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    interface IExpTouchHitTestingProviderStatics;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProviderStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpPointerPoint;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#define DEF___FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c00df92b-1706-5163-8886-3716a9455025"))
IIterator<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*, ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Input.Experimental.ExpPointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t;
#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
//#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#define DEF___FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6330b5b1-88dd-5715-b556-36bbdf4b91f3"))
IIterable<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*, ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Input.Experimental.ExpPointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t;
#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
//#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b6a0ab42-d763-5bfe-b814-8f718993bd2f"))
IVectorView<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*, ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Input.Experimental.ExpPointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t;
#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
//#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#define DEF___FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de68c59e-6edb-5445-9a93-b2040653f38c"))
IVector<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*, ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Input.Experimental.ExpPointerPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::UI::Input::Experimental::ExpPointerPoint*> __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t;
#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
//#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

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
            namespace Input {
                namespace Experimental {
                    class ExpDirectManipulation;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpPointerEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dbc9271d-6fb0-539e-a165-7204c662d41d"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpDirectManipulation*,ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpDirectManipulation*, ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpDirectManipulation, Microsoft.UI.Input.Experimental.ExpPointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpDirectManipulation*,ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulation*,ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulation*,ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusController;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e3cea4c-eab9-5f2b-a707-34f90694bbae"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusController*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpFocusController*, ABI::Microsoft::UI::Input::Experimental::IExpFocusController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpFocusController, Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusController*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusController*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusController*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusNavigationHost;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0e97c61a-940d-544f-aff2-b28f0d030568"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationHost*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationHost*, ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHost*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpFocusNavigationHost, Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationHost*,ABI::Microsoft::UI::Input::Experimental::ExpNavigateFocusRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHost*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHost*,ABI::Microsoft::UI::Input::Experimental::IExpNavigateFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpFocusChangedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("385bf7ba-7e30-58c4-90c0-cec999f03801"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusObserver*,ABI::Microsoft::UI::Input::Experimental::ExpFocusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpFocusObserver*, ABI::Microsoft::UI::Input::Experimental::IExpFocusObserver*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpFocusChangedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpFocusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpFocusObserver, Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpFocusObserver*,ABI::Microsoft::UI::Input::Experimental::ExpFocusChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusObserver*,ABI::Microsoft::UI::Input::Experimental::IExpFocusChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpFocusObserver*,ABI::Microsoft::UI::Input::Experimental::IExpFocusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpGestureRecognizer;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpCrossSlidingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("95bb70f3-9386-5983-80e1-f8f92f67295f"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpCrossSlidingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpCrossSlidingEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpCrossSlidingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpCrossSlidingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpCrossSlidingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpCrossSlidingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpDraggingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("28c0854b-10b0-5d93-a728-22df50079ac3"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpDraggingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpDraggingEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpDraggingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpDraggingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpDraggingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpDraggingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpDraggingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpHoldingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("08800bcf-5604-5fe0-96bc-2c83a1a49401"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpHoldingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpHoldingEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpHoldingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpHoldingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpHoldingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpHoldingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpHoldingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpManipulationCompletedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ea0cca8b-3012-5dac-a24e-370bc6eb1df2"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpManipulationCompletedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpManipulationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationCompletedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpManipulationInertiaStartingEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8d47397-577b-50cc-954f-9ad13452937d"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationInertiaStartingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpManipulationInertiaStartingEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpManipulationInertiaStartingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationInertiaStartingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationInertiaStartingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationInertiaStartingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpManipulationStartedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9766c5dd-cd07-5356-845f-7f119c1cc87d"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpManipulationStartedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpManipulationStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationStartedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationStartedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpManipulationUpdatedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d32730de-fb8c-56cb-82c0-b184301420da"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpManipulationUpdatedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpManipulationUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpManipulationUpdatedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpManipulationUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpRightTappedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("250694a9-10ec-5f17-af4c-4df5bdc9115b"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpRightTappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpRightTappedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpRightTappedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpRightTappedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpRightTappedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpRightTappedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpTappedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82625210-6cda-568a-950f-60c62ab69e3e"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpTappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*, ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpTappedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpTappedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpGestureRecognizer, Microsoft.UI.Input.Experimental.ExpTappedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::ExpTappedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpTappedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpGestureRecognizer*,ABI::Microsoft::UI::Input::Experimental::IExpTappedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpInputActivationListener;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpInputActivationListenerActivationChangedEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3fb57b11-4c59-5f7f-959b-66d35dbe1880"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListener*,ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListenerActivationChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListener*, ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListenerActivationChangedEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListenerActivationChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpInputActivationListener, Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListener*,ABI::Microsoft::UI::Input::Experimental::ExpInputActivationListenerActivationChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListener*,ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListenerActivationChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListener*,ABI::Microsoft::UI::Input::Experimental::IExpInputActivationListenerActivationChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpKeyboardInput;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpContextMenuKeyEventArgs;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("620ae941-5cdf-5020-83c3-fac49cc848ba"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Microsoft::UI::Input::Experimental::ExpContextMenuKeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*, ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpContextMenuKeyEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpContextMenuKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpKeyboardInput, Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Microsoft::UI::Input::Experimental::ExpContextMenuKeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Microsoft::UI::Input::Experimental::IExpContextMenuKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Microsoft::UI::Input::Experimental::IExpContextMenuKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpPointerInputObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8006b70a-395b-58bc-8840-b64026c81177"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpPointerInputObserver*,ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerInputObserver*, ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserver*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*, ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpPointerInputObserver, Microsoft.UI.Input.Experimental.ExpPointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpPointerInputObserver*,ABI::Microsoft::UI::Input::Experimental::ExpPointerEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserver*,ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserver*,ABI::Microsoft::UI::Input::Experimental::IExpPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class AcceleratorKeyEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IAcceleratorKeyEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs ABI::Windows::UI::Core::IAcceleratorKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02a868e7-e2bc-5a7b-b2ea-bd394fcefc31"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::AcceleratorKeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*, ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::AcceleratorKeyEventArgs*, ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpKeyboardInput, Windows.UI.Core.AcceleratorKeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::AcceleratorKeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::IAcceleratorKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CharacterReceivedEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICharacterReceivedEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs ABI::Windows::UI::Core::ICharacterReceivedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3f19da3d-b6c2-5db2-b6d0-dd0df4c4d51e"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*, ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::CharacterReceivedEventArgs*, ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpKeyboardInput, Windows.UI.Core.CharacterReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::CharacterReceivedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::ICharacterReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class KeyEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IKeyEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs ABI::Windows::UI::Core::IKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("935242b6-3660-5018-98c5-000c3895def7"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::KeyEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*, ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::KeyEventArgs*, ABI::Windows::UI::Core::IKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpKeyboardInput, Windows.UI.Core.KeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpKeyboardInput*,ABI::Windows::UI::Core::KeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::IKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput*,ABI::Windows::UI::Core::IKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpTouchHitTestingProvider;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class TouchHitTestingEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ITouchHitTestingEventArgs;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs ABI::Windows::UI::Core::ITouchHitTestingEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("67ae006c-5887-5bbc-81b3-2ec741a945bc"))
ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpTouchHitTestingProvider*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::Experimental::ExpTouchHitTestingProvider*, ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProvider*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::TouchHitTestingEventArgs*, ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider, Windows.UI.Core.TouchHitTestingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::ExpTouchHitTestingProvider*,ABI::Windows::UI::Core::TouchHitTestingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProvider*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProvider*,ABI::Windows::UI::Core::ITouchHitTestingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






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
    namespace Windows {
        namespace Devices {
            namespace Input {
                
                typedef enum PointerDeviceType : int PointerDeviceType;
                
            } /* Input */
        } /* Devices */
    } /* Windows */
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
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKey : int VirtualKey;
            
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKeyModifiers : unsigned int VirtualKeyModifiers;
            
        } /* System */
    } /* Windows */
} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreCursor ABI::Windows::UI::Core::ICoreCursor

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreInputDeviceTypes : unsigned int CoreInputDeviceTypes;
                
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreVirtualKeyStates : unsigned int CoreVirtualKeyStates;
                
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct CrossSlideThresholds CrossSlideThresholds;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum CrossSlidingState : int CrossSlidingState;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum DraggingState : int DraggingState;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum GestureSettings : unsigned int GestureSettings;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum HoldingState : int HoldingState;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPointTransform;
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform ABI::Windows::UI::Input::IPointerPointTransform

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct ManipulationDelta ManipulationDelta;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef struct ManipulationVelocities ManipulationVelocities;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                
                typedef enum PointerUpdateKind : int PointerUpdateKind;
                
            } /* Input */
        } /* UI */
    } /* Windows */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    
                    typedef enum ExpFocusChangedDirection : int ExpFocusChangedDirection;
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    
                    typedef enum ExpFocusNavigationReason : int ExpFocusNavigationReason;
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    
                    typedef enum ExpInputActivationState : int ExpInputActivationState;
                    
                } /* Experimental */
            } /* Input */
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





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpIndependentPointerInputObserver;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpInputObject;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


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







namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpMouseCapture;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpMouseWheelParameters;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpPointerCursorController;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    class ExpPointerPointProperties;
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */















/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpFocusChangedDirection
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [v1_enum, contract] */
                    enum ExpFocusChangedDirection : int
                    {
                        ExpFocusChangedDirection_None = 0,
                        ExpFocusChangedDirection_Next = 1,
                        ExpFocusChangedDirection_Previous = 2,
                        ExpFocusChangedDirection_Up = 3,
                        ExpFocusChangedDirection_Down = 4,
                        ExpFocusChangedDirection_Left = 5,
                        ExpFocusChangedDirection_Right = 6,
                    };
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpFocusNavigationReason
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [v1_enum, contract] */
                    enum ExpFocusNavigationReason : int
                    {
                        ExpFocusNavigationReason_Programmatic = 0,
                        ExpFocusNavigationReason_Restore = 1,
                        ExpFocusNavigationReason_First = 2,
                        ExpFocusNavigationReason_Last = 3,
                        ExpFocusNavigationReason_Left = 4,
                        ExpFocusNavigationReason_Up = 5,
                        ExpFocusNavigationReason_Right = 6,
                        ExpFocusNavigationReason_Down = 7,
                    };
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpInputActivationState
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [v1_enum, contract] */
                    enum ExpInputActivationState : int
                    {
                        ExpInputActivationState_None = 0,
                        ExpInputActivationState_Deactivated = 1,
                        ExpInputActivationState_ActivatedNotForeground = 2,
                        ExpInputActivationState_ActivatedInForeground = 3,
                    };
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("BBEDECBC-81D4-5EEB-98F6-7F28D8C78A59"), exclusiveto, contract] */
                    MIDL_INTERFACE("BBEDECBC-81D4-5EEB-98F6-7F28D8C78A59")
                    IExpContextMenuKeyEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpContextMenuKeyEventArgs=_uuidof(IExpContextMenuKeyEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpCrossSlidingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("D59CC4A9-C1A2-578B-A258-31724A9E1E94"), exclusiveto, contract] */
                    MIDL_INTERFACE("D59CC4A9-C1A2-578B-A258-31724A9E1E94")
                    IExpCrossSlidingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlidingState(
                            /* [retval, out] */ABI::Windows::UI::Input::CrossSlidingState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpCrossSlidingEventArgs=_uuidof(IExpCrossSlidingEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDirectManipulation
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDirectManipulation[] = L"Microsoft.UI.Input.Experimental.IExpDirectManipulation";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("95D6FA5E-5A5B-5D48-85A5-7E3395BB9700"), exclusiveto, contract] */
                    MIDL_INTERFACE("95D6FA5E-5A5B-5D48-85A5-7E3395BB9700")
                    IExpDirectManipulation : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DirectManipulationHitTest(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DirectManipulationHitTest(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpDirectManipulation=_uuidof(IExpDirectManipulation);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDirectManipulationStatics[] = L"Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("6B466E5D-6A91-5301-A2D7-F9A1A29B95F2"), exclusiveto, contract] */
                    MIDL_INTERFACE("6B466E5D-6A91-5301-A2D7-F9A1A29B95F2")
                    IExpDirectManipulationStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpDirectManipulation * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpDirectManipulationStatics=_uuidof(IExpDirectManipulationStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDraggingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDraggingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpDraggingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("4D8DAA51-23D1-50A4-A693-BA37CB345509"), exclusiveto, contract] */
                    MIDL_INTERFACE("4D8DAA51-23D1-50A4-A693-BA37CB345509")
                    IExpDraggingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DraggingState(
                            /* [retval, out] */ABI::Windows::UI::Input::DraggingState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpDraggingEventArgs=_uuidof(IExpDraggingEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("714933B6-BA0D-58BC-97A9-BCC89A0B3431"), exclusiveto, contract] */
                    MIDL_INTERFACE("714933B6-BA0D-58BC-97A9-BCC89A0B3431")
                    IExpFocusChangedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::ExpFocusChangedDirection * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusChangedEventArgs=_uuidof(IExpFocusChangedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusController[] = L"Microsoft.UI.Input.Experimental.IExpFocusController";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("FD86E2D9-1550-59BA-8B4A-973C7251CD2C"), exclusiveto, contract] */
                    MIDL_INTERFACE("FD86E2D9-1550-59BA-8B4A-973C7251CD2C")
                    IExpFocusController : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetFocus(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DepartFocus(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * request,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationResult * * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigateFocusRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigateFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusController=_uuidof(IExpFocusController);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusControllerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusControllerStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusControllerStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("F7D9123F-9364-566B-B6F0-19C49ED142B9"), exclusiveto, contract] */
                    MIDL_INTERFACE("F7D9123F-9364-566B-B6F0-19C49ED142B9")
                    IExpFocusControllerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusController * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusControllerStatics=_uuidof(IExpFocusControllerStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationHost
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationHost[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationHost";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("49B02D03-B0D8-55DB-985A-48611E47E838"), exclusiveto, contract] */
                    MIDL_INTERFACE("49B02D03-B0D8-55DB-985A-48611E47E838")
                    IExpFocusNavigationHost : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE NavigateFocus(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * request,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationResult * * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TakeFocusRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TakeFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusNavigationHost=_uuidof(IExpFocusNavigationHost);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationHostStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("7634E568-2177-50D9-9D95-18E3CACA2B40"), exclusiveto, contract] */
                    MIDL_INTERFACE("7634E568-2177-50D9-9D95-18E3CACA2B40")
                    IExpFocusNavigationHostStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationHost * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusNavigationHostStatics=_uuidof(IExpFocusNavigationHostStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationRequest[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("4DE7C4D0-6F4B-5176-9AE2-346D3318DB4E"), exclusiveto, contract] */
                    MIDL_INTERFACE("4DE7C4D0-6F4B-5176-9AE2-346D3318DB4E")
                    IExpFocusNavigationRequest : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationId(
                            /* [retval, out] */GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HintRect(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationReason * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusNavigationRequest=_uuidof(IExpFocusNavigationRequest);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationRequestStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("1CC934BB-EC15-5FAA-AF75-AFE45D0CE1A9"), exclusiveto, contract] */
                    MIDL_INTERFACE("1CC934BB-EC15-5FAA-AF75-AFE45D0CE1A9")
                    IExpFocusNavigationRequestStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateFocusNavigationRequestReasonAndHintRect(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateFocusNavigationRequestReasonHintRectAndId(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [in] */GUID correlationId,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateFocusNavigationRequestWithReason(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::ExpFocusNavigationReason reason,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusNavigationRequestStatics=_uuidof(IExpFocusNavigationRequestStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationResult
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationResult
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationResult[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationResult";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("33007903-6CD1-54A2-A5D3-5724EF673C6C"), exclusiveto, contract] */
                    MIDL_INTERFACE("33007903-6CD1-54A2-A5D3-5724EF673C6C")
                    IExpFocusNavigationResult : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasMoved(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WasMoved(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusNavigationResult=_uuidof(IExpFocusNavigationResult);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusObserver[] = L"Microsoft.UI.Input.Experimental.IExpFocusObserver";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("75B7AFFC-A7F3-5EEC-AABE-B5704F28C7C1"), exclusiveto, contract] */
                    MIDL_INTERFACE("75B7AFFC-A7F3-5EEC-AABE-B5704F28C7C1")
                    IExpFocusObserver : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LostFocus(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LostFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusObserver=_uuidof(IExpFocusObserver);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusObserverStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("033C2A71-F0AA-589D-ADE4-6AD2800F4E00"), exclusiveto, contract] */
                    MIDL_INTERFACE("033C2A71-F0AA-589D-ADE4-6AD2800F4E00")
                    IExpFocusObserverStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusObserver * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpFocusObserverStatics=_uuidof(IExpFocusObserverStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpGestureRecognizer
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpGestureRecognizer[] = L"Microsoft.UI.Input.Experimental.IExpGestureRecognizer";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("D7B6DF55-266F-5EC9-B415-0897BE2496E2"), exclusiveto, contract] */
                    MIDL_INTERFACE("D7B6DF55-266F-5EC9-B415-0897BE2496E2")
                    IExpGestureRecognizer : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoProcessInertia(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoProcessInertia(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideExact(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideExact(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideHorizontally(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideHorizontally(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrossSlideThresholds(
                            /* [retval, out] */ABI::Windows::UI::Input::CrossSlideThresholds * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrossSlideThresholds(
                            /* [in] */ABI::Windows::UI::Input::CrossSlideThresholds value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GestureSettings(
                            /* [retval, out] */ABI::Windows::UI::Input::GestureSettings * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GestureSettings(
                            /* [in] */ABI::Windows::UI::Input::GestureSettings value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInertial(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PivotCenter(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PivotCenter(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PivotRadius(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PivotRadius(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansionDeceleration(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansionDeceleration(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansion(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansion(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationAngle(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationAngle(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationDeceleration(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationDeceleration(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDeceleration(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDeceleration(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDisplacement(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDisplacement(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManipulationExact(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ManipulationExact(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseWheelParameters(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpMouseWheelParameters * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowGestureFeedback(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowGestureFeedback(
                            /* [in] */::boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CanBeDoubleTap(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * value,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CompleteGesture(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessDownEvent(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessMoveEvents(
                            /* [in] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessMouseWheelEvent(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * value,
                            /* [in] */::boolean isShiftKeyDown,
                            /* [in] */::boolean isControlKeyDown
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessInertia(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessUpEvent(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Tapped(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Tapped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RightTapped(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RightTapped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Holding(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Holding(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Dragging(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Dragging(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationStarted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationUpdated(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationInertiaStarting(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationInertiaStarting(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ManipulationCompleted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ManipulationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CrossSliding(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CrossSliding(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpGestureRecognizer=_uuidof(IExpGestureRecognizer);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpHoldingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpHoldingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpHoldingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("54D70587-13CA-5E32-82B6-A5CAA843B12F"), exclusiveto, contract] */
                    MIDL_INTERFACE("54D70587-13CA-5E32-82B6-A5CAA843B12F")
                    IExpHoldingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HoldingState(
                            /* [retval, out] */ABI::Windows::UI::Input::HoldingState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpHoldingEventArgs=_uuidof(IExpHoldingEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpIndependentPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("197CCC46-6940-56AA-BC0B-DB9BFF9D5F85"), exclusiveto, contract] */
                    MIDL_INTERFACE("197CCC46-6940-56AA-BC0B-DB9BFF9D5F85")
                    IExpIndependentPointerInputObserver : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpIndependentPointerInputObserver=_uuidof(IExpIndependentPointerInputObserver);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpIndependentPointerInputObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("4A2AA824-939A-5DA6-B46D-4706A932D53B"), exclusiveto, contract] */
                    MIDL_INTERFACE("4A2AA824-939A-5DA6-B46D-4706A932D53B")
                    IExpIndependentPointerInputObserverStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateForVisual(
                            /* [in] */ABI::Microsoft::UI::Composition::IVisual * visual,
                            /* [in] */ABI::Windows::UI::Core::CoreInputDeviceTypes deviceTypes,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpIndependentPointerInputObserver * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpIndependentPointerInputObserverStatics=_uuidof(IExpIndependentPointerInputObserverStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListener
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListener[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListener";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("9D00E33F-B3AF-566A-AEBF-4D62A28D10D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("9D00E33F-B3AF-566A-AEBF-4D62A28D10D3")
                    IExpInputActivationListener : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::ExpInputActivationState * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputActivationChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputActivationChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputActivationListener=_uuidof(IExpInputActivationListener);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("DC66BABF-5945-574F-B045-EFBA91BAAA44"), exclusiveto, contract] */
                    MIDL_INTERFACE("DC66BABF-5945-574F-B045-EFBA91BAAA44")
                    IExpInputActivationListenerActivationChangedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::ExpInputActivationState * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputActivationListenerActivationChangedEventArgs=_uuidof(IExpInputActivationListenerActivationChangedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListenerPartnerStatics[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("12CB1689-BE6F-5F92-AAA3-BA899BD27BDF"), exclusiveto, contract] */
                    MIDL_INTERFACE("12CB1689-BE6F-5F92-AAA3-BA899BD27BDF")
                    IExpInputActivationListenerPartnerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputActivationListenerPartnerStatics=_uuidof(IExpInputActivationListenerPartnerStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputObject
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputObject
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputObject[] = L"Microsoft.UI.Input.Experimental.IExpInputObject";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("D03CB357-5BB6-59DA-80B2-9CD42976D4AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("D03CB357-5BB6-59DA-80B2-9CD42976D4AB")
                    IExpInputObject : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                            /* [retval, out] */ABI::Microsoft::System::IDispatcherQueue * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputSite(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputObject=_uuidof(IExpInputObject);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputObjectFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputObject
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputObjectFactory[] = L"Microsoft.UI.Input.Experimental.IExpInputObjectFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("759669EB-EA25-551B-9B8A-4FED55C93C8D"), exclusiveto, contract] */
                    MIDL_INTERFACE("759669EB-EA25-551B-9B8A-4FED55C93C8D")
                    IExpInputObjectFactory : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputObjectFactory=_uuidof(IExpInputObjectFactory);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputSite
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputSite
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputSite[] = L"Microsoft.UI.Input.Experimental.IExpInputSite";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("6B707B95-BBE8-5131-A6D7-B11C26CB7CB6"), exclusiveto, contract] */
                    MIDL_INTERFACE("6B707B95-BBE8-5131-A6D7-B11C26CB7CB6")
                    IExpInputSite : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputSite=_uuidof(IExpInputSite);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputSiteStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputSite
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputSiteStatics[] = L"Microsoft.UI.Input.Experimental.IExpInputSiteStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("39750836-9503-5891-BAB2-33B8B7BCFC58"), exclusiveto, contract] */
                    MIDL_INTERFACE("39750836-9503-5891-BAB2-33B8B7BCFC58")
                    IExpInputSiteStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetOrCreateForContent(
                            /* [in] */ABI::Microsoft::UI::Composition::Experimental::IExpCompositionContent * content,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpInputSiteStatics=_uuidof(IExpInputSiteStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpKeyboardInput
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpKeyboardInput[] = L"Microsoft.UI.Input.Experimental.IExpKeyboardInput";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("CE01B259-E442-565B-930E-CD9F046C5507"), exclusiveto, contract] */
                    MIDL_INTERFACE("CE01B259-E442-565B-930E-CD9F046C5507")
                    IExpKeyboardInput : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentKeyEventDeviceId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentKeyState(
                            /* [in] */ABI::Windows::System::VirtualKey virtualKey,
                            /* [retval, out] */ABI::Windows::UI::Core::CoreVirtualKeyStates * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetKeyState(
                            /* [in] */ABI::Windows::System::VirtualKey virtualKey,
                            /* [retval, out] */ABI::Windows::UI::Core::CoreVirtualKeyStates * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AcceleratorKeyActivated(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AcceleratorKeyActivated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CharacterReceived(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CharacterReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyDown(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyDown(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyUp(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyUp(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SysKeyDown(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SysKeyDown(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SysKeyUp(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SysKeyUp(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContextMenuKey(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContextMenuKey(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpKeyboardInput=_uuidof(IExpKeyboardInput);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpKeyboardInputStatics[] = L"Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("8884DED6-FAB4-5EC5-BABF-30B531672C30"), exclusiveto, contract] */
                    MIDL_INTERFACE("8884DED6-FAB4-5EC5-BABF-30B531672C30")
                    IExpKeyboardInputStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpKeyboardInput * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpKeyboardInputStatics=_uuidof(IExpKeyboardInputStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("8B968AC2-8EA5-5CD8-8485-FFA92388110E"), exclusiveto, contract] */
                    MIDL_INTERFACE("8B968AC2-8EA5-5CD8-8485-FFA92388110E")
                    IExpManipulationCompletedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpManipulationCompletedEventArgs=_uuidof(IExpManipulationCompletedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("AC4EBF4C-FC52-50C5-9A9B-D41698BA1483"), exclusiveto, contract] */
                    MIDL_INTERFACE("AC4EBF4C-FC52-50C5-9A9B-D41698BA1483")
                    IExpManipulationInertiaStartingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delta(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpManipulationInertiaStartingEventArgs=_uuidof(IExpManipulationInertiaStartingEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationStartedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("70CB834C-0A99-5723-84CE-827C555FB8CA"), exclusiveto, contract] */
                    MIDL_INTERFACE("70CB834C-0A99-5723-84CE-827C555FB8CA")
                    IExpManipulationStartedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpManipulationStartedEventArgs=_uuidof(IExpManipulationStartedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("3C034BD7-256F-54CC-9A0D-20A564BDDE79"), exclusiveto, contract] */
                    MIDL_INTERFACE("3C034BD7-256F-54CC-9A0D-20A564BDDE79")
                    IExpManipulationUpdatedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delta(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationDelta * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                            /* [retval, out] */ABI::Windows::UI::Input::ManipulationVelocities * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpManipulationUpdatedEventArgs=_uuidof(IExpManipulationUpdatedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseCapture
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseCapture[] = L"Microsoft.UI.Input.Experimental.IExpMouseCapture";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("82919E2B-4D4B-590B-A6DD-5ACEBB8D6411"), exclusiveto, contract] */
                    MIDL_INTERFACE("82919E2B-4D4B-590B-A6DD-5ACEBB8D6411")
                    IExpMouseCapture : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasCapture(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryReleaseCapture(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetCapture(
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpMouseCapture=_uuidof(IExpMouseCapture);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseCaptureStatics[] = L"Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("51EC13D2-EA81-593A-BB3F-AD383066C229"), exclusiveto, contract] */
                    MIDL_INTERFACE("51EC13D2-EA81-593A-BB3F-AD383066C229")
                    IExpMouseCaptureStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpMouseCapture * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpMouseCaptureStatics=_uuidof(IExpMouseCaptureStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseWheelParameters
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseWheelParameters[] = L"Microsoft.UI.Input.Experimental.IExpMouseWheelParameters";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("53C7EFFD-7E8B-5B58-B3BF-9DA0DCD05A5F"), exclusiveto, contract] */
                    MIDL_INTERFACE("53C7EFFD-7E8B-5B58-B3BF-9DA0DCD05A5F")
                    IExpMouseWheelParameters : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CharTranslation(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CharTranslation(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaScale(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaScale(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaRotationAngle(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaRotationAngle(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageTranslation(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageTranslation(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpMouseWheelParameters=_uuidof(IExpMouseWheelParameters);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpNavigateFocusRequestedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("563B3F71-ECA0-5652-B748-13C6D6794CEE"), exclusiveto, contract] */
                    MIDL_INTERFACE("563B3F71-ECA0-5652-B748-13C6D6794CEE")
                    IExpNavigateFocusRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpFocusNavigationRequest * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasMoved(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WasMoved(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpNavigateFocusRequestedEventArgs=_uuidof(IExpNavigateFocusRequestedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerCursorController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerCursorController[] = L"Microsoft.UI.Input.Experimental.IExpPointerCursorController";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("46913798-802B-56B5-8B65-CA03154B00BA"), exclusiveto, contract] */
                    MIDL_INTERFACE("46913798-802B-56B5-8B65-CA03154B00BA")
                    IExpPointerCursorController : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cursor(
                            /* [retval, out] */ABI::Windows::UI::Core::ICoreCursor * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cursor(
                            /* [in] */ABI::Windows::UI::Core::ICoreCursor * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerCursorController=_uuidof(IExpPointerCursorController);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerCursorControllerStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("18EDF0FC-E558-51AF-B099-6AA410CA0A92"), exclusiveto, contract] */
                    MIDL_INTERFACE("18EDF0FC-E558-51AF-B099-6AA410CA0A92")
                    IExpPointerCursorControllerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerCursorController * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerCursorControllerStatics=_uuidof(IExpPointerCursorControllerStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpPointerEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("B84198C5-2A2F-5591-AC66-B35EFBB8FC52"), exclusiveto, contract] */
                    MIDL_INTERFACE("B84198C5-2A2F-5591-AC66-B35EFBB8FC52")
                    IExpPointerEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPoint(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyModifiers(
                            /* [retval, out] */ABI::Windows::System::VirtualKeyModifiers * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerEventArgs=_uuidof(IExpPointerEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserver";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("7A25B08F-75FF-5218-B905-F9FF01FD4CFA"), exclusiveto, contract] */
                    MIDL_INTERFACE("7A25B08F-75FF-5218-B905-F9FF01FD4CFA")
                    IExpPointerInputObserver : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerCaptureLost(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerCaptureLost(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedAway(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedAway(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedReleased(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedReleased(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedTo(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedTo(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerWheelChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerWheelChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerInputObserver=_uuidof(IExpPointerInputObserver);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserverFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserverFactory[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserverFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("E34C0297-F73B-5D7D-87EB-4791EAB2F583"), exclusiveto, contract] */
                    MIDL_INTERFACE("E34C0297-F73B-5D7D-87EB-4791EAB2F583")
                    IExpPointerInputObserverFactory : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerInputObserverFactory=_uuidof(IExpPointerInputObserverFactory);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("DC8D2989-AD28-58AA-91AC-17B3CF8BCD59"), exclusiveto, contract] */
                    MIDL_INTERFACE("DC8D2989-AD28-58AA-91AC-17B3CF8BCD59")
                    IExpPointerInputObserverStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerInputObserver * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerInputObserverStatics=_uuidof(IExpPointerInputObserverStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPoint
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPoint[] = L"Microsoft.UI.Input.Experimental.IExpPointerPoint";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("97CB6935-34A2-5934-ACC8-F00AB08736EC"), exclusiveto, contract] */
                    MIDL_INTERFACE("97CB6935-34A2-5934-ACC8-F00AB08736EC")
                    IExpPointerPoint : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInContact(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPointProperties * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawPosition(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerPoint=_uuidof(IExpPointerPoint);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPointProperties
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPointProperties[] = L"Microsoft.UI.Input.Experimental.IExpPointerPointProperties";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("4E6E6AD8-8A8E-5441-A281-FEBD72D1CE6A"), exclusiveto, contract] */
                    MIDL_INTERFACE("4E6E6AD8-8A8E-5441-A281-FEBD72D1CE6A")
                    IExpPointerPointProperties : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactRect(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactRectRaw(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBarrelButtonPressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEraser(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHorizontalMouseWheel(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInRange(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInverted(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLeftButtonPressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMiddleButtonPressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPrimary(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRightButtonPressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsXButton1Pressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsXButton2Pressed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseWheelDelta(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerUpdateKind(
                            /* [retval, out] */ABI::Windows::UI::Input::PointerUpdateKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchConfidence(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Twist(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XTilt(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_YTilt(
                            /* [retval, out] */FLOAT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerPointProperties=_uuidof(IExpPointerPointProperties);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPointStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPointStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerPointStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("BBBD3D96-00ED-59A2-9FEC-59CABCAF270B"), exclusiveto, contract] */
                    MIDL_INTERFACE("BBBD3D96-00ED-59A2-9FEC-59CABCAF270B")
                    IExpPointerPointStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentPoint(
                            /* [in] */UINT32 pointerId,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentPointTransformed(
                            /* [in] */UINT32 pointerId,
                            /* [in] */ABI::Windows::UI::Input::IPointerPointTransform * transform,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpPointerPoint * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                            /* [in] */UINT32 pointerId,
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIntermediatePointsTransformed(
                            /* [in] */UINT32 pointerId,
                            /* [in] */ABI::Windows::UI::Input::IPointerPointTransform * transform,
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpPointerPointStatics=_uuidof(IExpPointerPointStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpRightTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("C3872670-8E4D-52C1-91A9-73C90E0BD00D"), exclusiveto, contract] */
                    MIDL_INTERFACE("C3872670-8E4D-52C1-91A9-73C90E0BD00D")
                    IExpRightTappedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpRightTappedEventArgs=_uuidof(IExpRightTappedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTappedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpTappedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("0A8DCCE9-6FFA-5FC5-8B66-6ED7A004DFF8"), exclusiveto, contract] */
                    MIDL_INTERFACE("0A8DCCE9-6FFA-5FC5-8B66-6ED7A004DFF8")
                    IExpTappedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                            /* [retval, out] */ABI::Windows::Devices::Input::PointerDeviceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TapCount(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpTappedEventArgs=_uuidof(IExpTappedEventArgs);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTouchHitTestingProvider[] = L"Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("E66AECA3-F13B-50FC-A253-4EA22E903B17"), exclusiveto, contract] */
                    MIDL_INTERFACE("E66AECA3-F13B-50FC-A253-4EA22E903B17")
                    IExpTouchHitTestingProvider : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TouchHitTestRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TouchHitTestRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpTouchHitTestingProvider=_uuidof(IExpTouchHitTestingProvider);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTouchHitTestingProviderStatics[] = L"Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                namespace Experimental {
                    /* [object, uuid("FBFC29FD-F441-5D62-99FA-84BE9ABDC8AD"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBFC29FD-F441-5D62-99FA-84BE9ABDC8AD")
                    IExpTouchHitTestingProviderStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                            /* [in] */ABI::Microsoft::UI::Input::Experimental::IExpInputSite * inputSite,
                            /* [retval, out] */ABI::Microsoft::UI::Input::Experimental::IExpTouchHitTestingProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpTouchHitTestingProviderStatics=_uuidof(IExpTouchHitTestingProviderStatics);
                    
                } /* Experimental */
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpDirectManipulation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDirectManipulation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDirectManipulation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpDirectManipulation[] = L"Microsoft.UI.Input.Experimental.ExpDirectManipulation";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpDraggingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusControllerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusController[] = L"Microsoft.UI.Input.Experimental.ExpFocusController";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationHost ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationHost";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationResult
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationResult";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusObserver[] = L"Microsoft.UI.Input.Experimental.ExpFocusObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpGestureRecognizer_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpGestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpGestureRecognizer[] = L"Microsoft.UI.Input.Experimental.ExpGestureRecognizer";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpHoldingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputActivationListener ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListener[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListener";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputObject
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputObject ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputObject[] = L"Microsoft.UI.Input.Experimental.ExpInputObject";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputSite
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpInputSiteStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputSite ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputSite_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputSite_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputSite[] = L"Microsoft.UI.Input.Experimental.ExpInputSite";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpKeyboardInput ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpKeyboardInput_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpKeyboardInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpKeyboardInput[] = L"Microsoft.UI.Input.Experimental.ExpKeyboardInput";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpMouseCapture ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseCapture_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpMouseCapture[] = L"Microsoft.UI.Input.Experimental.ExpMouseCapture";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters[] = L"Microsoft.UI.Input.Experimental.ExpMouseWheelParameters";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerCursorController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerCursorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerCursorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerCursorController[] = L"Microsoft.UI.Input.Experimental.ExpPointerCursorController";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpPointerEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.ExpPointerInputObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerPointStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerPoint ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPoint_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerPoint[] = L"Microsoft.UI.Input.Experimental.ExpPointerPoint";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerPointProperties ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPointProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerPointProperties[] = L"Microsoft.UI.Input.Experimental.ExpPointerPointProperties";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider[] = L"Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

typedef struct __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl;

interface __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

typedef  struct __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl;

interface __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

typedef struct __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [in] */ __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl;

interface __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint;

typedef struct __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl;

interface __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge __x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge;

#endif // ____x_ABI_CMicrosoft_CUI_CHosting_CExperimental_CIExpDesktopWindowBridge_FWD_DEFINED__



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



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000



#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#ifndef ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CSystem_CIDispatcherQueue __x_ABI_CMicrosoft_CSystem_CIDispatcherQueue;

#endif // ____x_ABI_CMicrosoft_CSystem_CIDispatcherQueue_FWD_DEFINED__




#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent __x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CIVisual __x_ABI_CMicrosoft_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__











typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;




#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;




typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;


typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;





#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursor __x_ABI_CWindows_CUI_CCore_CICoreCursor;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes;


typedef enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates;







typedef struct __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds;


typedef enum __x_ABI_CWindows_CUI_CInput_CCrossSlidingState __x_ABI_CWindows_CUI_CInput_CCrossSlidingState;


typedef enum __x_ABI_CWindows_CUI_CInput_CDraggingState __x_ABI_CWindows_CUI_CInput_CDraggingState;


typedef enum __x_ABI_CWindows_CUI_CInput_CGestureSettings __x_ABI_CWindows_CUI_CInput_CGestureSettings;


typedef enum __x_ABI_CWindows_CUI_CInput_CHoldingState __x_ABI_CWindows_CUI_CInput_CHoldingState;

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta __x_ABI_CWindows_CUI_CInput_CManipulationDelta;


typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities __x_ABI_CWindows_CUI_CInput_CManipulationVelocities;


typedef enum __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind;





typedef enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusChangedDirection __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusChangedDirection;


typedef enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason;


typedef enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpInputActivationState __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpInputActivationState;






























































































/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpFocusChangedDirection
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusChangedDirection
{
    ExpFocusChangedDirection_None = 0,
    ExpFocusChangedDirection_Next = 1,
    ExpFocusChangedDirection_Previous = 2,
    ExpFocusChangedDirection_Up = 3,
    ExpFocusChangedDirection_Down = 4,
    ExpFocusChangedDirection_Left = 5,
    ExpFocusChangedDirection_Right = 6,
};
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpFocusNavigationReason
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason
{
    ExpFocusNavigationReason_Programmatic = 0,
    ExpFocusNavigationReason_Restore = 1,
    ExpFocusNavigationReason_First = 2,
    ExpFocusNavigationReason_Last = 3,
    ExpFocusNavigationReason_Left = 4,
    ExpFocusNavigationReason_Up = 5,
    ExpFocusNavigationReason_Right = 6,
    ExpFocusNavigationReason_Down = 7,
};
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.Experimental.ExpInputActivationState
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 */

#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpInputActivationState
{
    ExpInputActivationState_None = 0,
    ExpInputActivationState_Deactivated = 1,
    ExpInputActivationState_ActivatedNotForeground = 2,
    ExpInputActivationState_ActivatedInForeground = 3,
};
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs";
/* [object, uuid("BBEDECBC-81D4-5EEB-98F6-7F28D8C78A59"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpContextMenuKeyEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpCrossSlidingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs";
/* [object, uuid("D59CC4A9-C1A2-578B-A258-31724A9E1E94"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlidingState )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CCrossSlidingState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_get_CrossSlidingState(This,value) \
    ( (This)->lpVtbl->get_CrossSlidingState(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpCrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDirectManipulation
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDirectManipulation[] = L"Microsoft.UI.Input.Experimental.IExpDirectManipulation";
/* [object, uuid("95D6FA5E-5A5B-5D48-85A5-7E3395BB9700"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DirectManipulationHitTest )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpDirectManipulation_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DirectManipulationHitTest )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_add_DirectManipulationHitTest(This,handler,token) \
    ( (This)->lpVtbl->add_DirectManipulationHitTest(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_remove_DirectManipulationHitTest(This,token) \
    ( (This)->lpVtbl->remove_DirectManipulationHitTest(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDirectManipulationStatics[] = L"Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics";
/* [object, uuid("6B466E5D-6A91-5301-A2D7-F9A1A29B95F2"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulation * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDirectManipulationStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpDraggingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpDraggingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpDraggingEventArgs";
/* [object, uuid("4D8DAA51-23D1-50A4-A693-BA37CB345509"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DraggingState )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CDraggingState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_get_DraggingState(This,value) \
    ( (This)->lpVtbl->get_DraggingState(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs";
/* [object, uuid("714933B6-BA0D-58BC-97A9-BCC89A0B3431"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusChangedDirection * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusController[] = L"Microsoft.UI.Input.Experimental.IExpFocusController";
/* [object, uuid("FD86E2D9-1550-59BA-8B4A-973C7251CD2C"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
        /* [retval, out] */boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *DepartFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * request,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigateFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusController_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigateFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_TrySetFocus(This,result) \
    ( (This)->lpVtbl->TrySetFocus(This,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_DepartFocus(This,request,result) \
    ( (This)->lpVtbl->DepartFocus(This,request,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_add_NavigateFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_NavigateFocusRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_remove_NavigateFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_NavigateFocusRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusControllerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusControllerStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusControllerStatics";
/* [object, uuid("F7D9123F-9364-566B-B6F0-19C49ED142B9"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusController * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusControllerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationHost
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationHost[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationHost";
/* [object, uuid("49B02D03-B0D8-55DB-985A-48611E47E838"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NavigateFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * request,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusNavigationHost_Microsoft__CUI__CInput__CExperimental__CExpNavigateFocusRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TakeFocusRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_NavigateFocus(This,request,result) \
    ( (This)->lpVtbl->NavigateFocus(This,request,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_add_TakeFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TakeFocusRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_remove_TakeFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_TakeFocusRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationHostStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics";
/* [object, uuid("7634E568-2177-50D9-9D95-18E3CACA2B40"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHost * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationHostStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationRequest[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest";
/* [object, uuid("4DE7C4D0-6F4B-5176-9AE2-346D3318DB4E"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
        /* [retval, out] */GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_get_CorrelationId(This,value) \
    ( (This)->lpVtbl->get_CorrelationId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_get_HintRect(This,value) \
    ( (This)->lpVtbl->get_HintRect(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationRequestStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics";
/* [object, uuid("1CC934BB-EC15-5FAA-AF75-AFE45D0CE1A9"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFocusNavigationRequestReasonAndHintRect )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFocusNavigationRequestReasonHintRectAndId )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [in] */GUID correlationId,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFocusNavigationRequestWithReason )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpFocusNavigationReason reason,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_CreateFocusNavigationRequestReasonAndHintRect(This,reason,hintRect,result) \
    ( (This)->lpVtbl->CreateFocusNavigationRequestReasonAndHintRect(This,reason,hintRect,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_CreateFocusNavigationRequestReasonHintRectAndId(This,reason,hintRect,correlationId,result) \
    ( (This)->lpVtbl->CreateFocusNavigationRequestReasonHintRectAndId(This,reason,hintRect,correlationId,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_CreateFocusNavigationRequestWithReason(This,reason,result) \
    ( (This)->lpVtbl->CreateFocusNavigationRequestWithReason(This,reason,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequestStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusNavigationResult
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusNavigationResult
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusNavigationResult[] = L"Microsoft.UI.Input.Experimental.IExpFocusNavigationResult";
/* [object, uuid("33007903-6CD1-54A2-A5D3-5724EF673C6C"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WasMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResultVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_get_WasMoved(This,value) \
    ( (This)->lpVtbl->get_WasMoved(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_put_WasMoved(This,value) \
    ( (This)->lpVtbl->put_WasMoved(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusObserver[] = L"Microsoft.UI.Input.Experimental.IExpFocusObserver";
/* [object, uuid("75B7AFFC-A7F3-5EEC-AABE-B5704F28C7C1"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
        /* [retval, out] */boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpFocusObserver_Microsoft__CUI__CInput__CExperimental__CExpFocusChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_add_GotFocus(This,handler,token) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_add_LostFocus(This,handler,token) \
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_remove_LostFocus(This,token) \
    ( (This)->lpVtbl->remove_LostFocus(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpFocusObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpFocusObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpFocusObserverStatics";
/* [object, uuid("033C2A71-F0AA-589D-ADE4-6AD2800F4E00"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserver * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_CreateForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->CreateForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpGestureRecognizer
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpGestureRecognizer[] = L"Microsoft.UI.Input.Experimental.IExpGestureRecognizer";
/* [object, uuid("D7B6DF55-266F-5EC9-B415-0897BE2496E2"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoProcessInertia )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoProcessInertia )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideExact )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideExact )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideHorizontally )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideHorizontally )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrossSlideThresholds )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrossSlideThresholds )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GestureSettings )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CGestureSettings * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GestureSettings )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CGestureSettings value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PivotCenter )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PivotCenter )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PivotRadius )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PivotRadius )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansionDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansionDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansion )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansion )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationAngle )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationAngle )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDeceleration )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDisplacement )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDisplacement )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManipulationExact )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ManipulationExact )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseWheelParameters )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowGestureFeedback )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowGestureFeedback )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *CanBeDoubleTap )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * value,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteGesture )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessDownEvent )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMoveEvents )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMouseWheelEvent )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * value,
        /* [in] */boolean isShiftKeyDown,
        /* [in] */boolean isControlKeyDown
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessInertia )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessUpEvent )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpTappedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RightTapped )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpRightTappedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RightTapped )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Holding )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpHoldingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Holding )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Dragging )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpDraggingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Dragging )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationStartedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationUpdated )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationUpdatedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationUpdated )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationInertiaStarting )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationInertiaStartingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationInertiaStarting )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpManipulationCompletedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CrossSliding )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpGestureRecognizer_Microsoft__CUI__CInput__CExperimental__CExpCrossSlidingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CrossSliding )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_AutoProcessInertia(This,value) \
    ( (This)->lpVtbl->get_AutoProcessInertia(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_AutoProcessInertia(This,value) \
    ( (This)->lpVtbl->put_AutoProcessInertia(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_CrossSlideExact(This,value) \
    ( (This)->lpVtbl->get_CrossSlideExact(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_CrossSlideExact(This,value) \
    ( (This)->lpVtbl->put_CrossSlideExact(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_CrossSlideHorizontally(This,value) \
    ( (This)->lpVtbl->get_CrossSlideHorizontally(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_CrossSlideHorizontally(This,value) \
    ( (This)->lpVtbl->put_CrossSlideHorizontally(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_CrossSlideThresholds(This,value) \
    ( (This)->lpVtbl->get_CrossSlideThresholds(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_CrossSlideThresholds(This,value) \
    ( (This)->lpVtbl->put_CrossSlideThresholds(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_GestureSettings(This,value) \
    ( (This)->lpVtbl->get_GestureSettings(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_GestureSettings(This,value) \
    ( (This)->lpVtbl->put_GestureSettings(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_IsActive(This,value) \
    ( (This)->lpVtbl->get_IsActive(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_IsInertial(This,value) \
    ( (This)->lpVtbl->get_IsInertial(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_PivotCenter(This,value) \
    ( (This)->lpVtbl->get_PivotCenter(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_PivotCenter(This,value) \
    ( (This)->lpVtbl->put_PivotCenter(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_PivotRadius(This,value) \
    ( (This)->lpVtbl->get_PivotRadius(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_PivotRadius(This,value) \
    ( (This)->lpVtbl->put_PivotRadius(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaExpansionDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaExpansionDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaExpansionDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaExpansionDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaExpansion(This,value) \
    ( (This)->lpVtbl->get_InertiaExpansion(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaExpansion(This,value) \
    ( (This)->lpVtbl->put_InertiaExpansion(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaRotationAngle(This,value) \
    ( (This)->lpVtbl->get_InertiaRotationAngle(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaRotationAngle(This,value) \
    ( (This)->lpVtbl->put_InertiaRotationAngle(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaRotationDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaRotationDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaRotationDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaRotationDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaTranslationDeceleration(This,value) \
    ( (This)->lpVtbl->get_InertiaTranslationDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaTranslationDeceleration(This,value) \
    ( (This)->lpVtbl->put_InertiaTranslationDeceleration(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_InertiaTranslationDisplacement(This,value) \
    ( (This)->lpVtbl->get_InertiaTranslationDisplacement(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_InertiaTranslationDisplacement(This,value) \
    ( (This)->lpVtbl->put_InertiaTranslationDisplacement(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_ManipulationExact(This,value) \
    ( (This)->lpVtbl->get_ManipulationExact(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_ManipulationExact(This,value) \
    ( (This)->lpVtbl->put_ManipulationExact(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_MouseWheelParameters(This,value) \
    ( (This)->lpVtbl->get_MouseWheelParameters(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_get_ShowGestureFeedback(This,value) \
    ( (This)->lpVtbl->get_ShowGestureFeedback(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_put_ShowGestureFeedback(This,value) \
    ( (This)->lpVtbl->put_ShowGestureFeedback(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_CanBeDoubleTap(This,value,result) \
    ( (This)->lpVtbl->CanBeDoubleTap(This,value,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_CompleteGesture(This) \
    ( (This)->lpVtbl->CompleteGesture(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_ProcessDownEvent(This,value) \
    ( (This)->lpVtbl->ProcessDownEvent(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_ProcessMoveEvents(This,value) \
    ( (This)->lpVtbl->ProcessMoveEvents(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_ProcessMouseWheelEvent(This,value,isShiftKeyDown,isControlKeyDown) \
    ( (This)->lpVtbl->ProcessMouseWheelEvent(This,value,isShiftKeyDown,isControlKeyDown) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_ProcessInertia(This) \
    ( (This)->lpVtbl->ProcessInertia(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_ProcessUpEvent(This,value) \
    ( (This)->lpVtbl->ProcessUpEvent(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_Tapped(This,handler,token) \
    ( (This)->lpVtbl->add_Tapped(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_Tapped(This,token) \
    ( (This)->lpVtbl->remove_Tapped(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_RightTapped(This,handler,token) \
    ( (This)->lpVtbl->add_RightTapped(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_RightTapped(This,token) \
    ( (This)->lpVtbl->remove_RightTapped(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_Holding(This,handler,token) \
    ( (This)->lpVtbl->add_Holding(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_Holding(This,token) \
    ( (This)->lpVtbl->remove_Holding(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_Dragging(This,handler,token) \
    ( (This)->lpVtbl->add_Dragging(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_Dragging(This,token) \
    ( (This)->lpVtbl->remove_Dragging(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_ManipulationStarted(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_ManipulationStarted(This,token) \
    ( (This)->lpVtbl->remove_ManipulationStarted(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_ManipulationUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationUpdated(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_ManipulationUpdated(This,token) \
    ( (This)->lpVtbl->remove_ManipulationUpdated(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_ManipulationInertiaStarting(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationInertiaStarting(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_ManipulationInertiaStarting(This,token) \
    ( (This)->lpVtbl->remove_ManipulationInertiaStarting(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_ManipulationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_ManipulationCompleted(This,token) \
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_add_CrossSliding(This,handler,token) \
    ( (This)->lpVtbl->add_CrossSliding(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_remove_CrossSliding(This,token) \
    ( (This)->lpVtbl->remove_CrossSliding(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpGestureRecognizer_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpHoldingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpHoldingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpHoldingEventArgs";
/* [object, uuid("54D70587-13CA-5E32-82B6-A5CAA843B12F"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HoldingState )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CHoldingState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_get_HoldingState(This,value) \
    ( (This)->lpVtbl->get_HoldingState(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpIndependentPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver";
/* [object, uuid("197CCC46-6940-56AA-BC0B-DB9BFF9D5F85"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpIndependentPointerInputObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics";
/* [object, uuid("4A2AA824-939A-5DA6-B46D-4706A932D53B"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForVisual )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CIVisual * visual,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes deviceTypes,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserver * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_CreateForVisual(This,visual,deviceTypes,result) \
    ( (This)->lpVtbl->CreateForVisual(This,visual,deviceTypes,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpIndependentPointerInputObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListener
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListener[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListener";
/* [object, uuid("9D00E33F-B3AF-566A-AEBF-4D62A28D10D3"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpInputActivationState * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputActivationChanged )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListener_Microsoft__CUI__CInput__CExperimental__CExpInputActivationListenerActivationChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputActivationChanged )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_add_InputActivationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_InputActivationChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_remove_InputActivationChanged(This,token) \
    ( (This)->lpVtbl->remove_InputActivationChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs";
/* [object, uuid("DC66BABF-5945-574F-B045-EFBA91BAAA44"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CExpInputActivationState * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputActivationListenerPartnerStatics[] = L"Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics";
/* [object, uuid("12CB1689-BE6F-5F92-AAA3-BA899BD27BDF"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */IInspectable * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputActivationListenerPartnerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputObject
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputObject
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputObject[] = L"Microsoft.UI.Input.Experimental.IExpInputObject";
/* [object, uuid("D03CB357-5BB6-59DA-80B2-9CD42976D4AB"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CSystem_CIDispatcherQueue * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_get_DispatcherQueue(This,value) \
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_get_InputSite(This,value) \
    ( (This)->lpVtbl->get_InputSite(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputObjectFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputObject
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputObjectFactory[] = L"Microsoft.UI.Input.Experimental.IExpInputObjectFactory";
/* [object, uuid("759669EB-EA25-551B-9B8A-4FED55C93C8D"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputObjectFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputSite
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputSite
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputSite[] = L"Microsoft.UI.Input.Experimental.IExpInputSite";
/* [object, uuid("6B707B95-BBE8-5131-A6D7-B11C26CB7CB6"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpInputSiteStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpInputSite
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpInputSiteStatics[] = L"Microsoft.UI.Input.Experimental.IExpInputSiteStatics";
/* [object, uuid("39750836-9503-5891-BAB2-33B8B7BCFC58"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOrCreateForContent )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CExperimental_CIExpCompositionContent * content,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_GetOrCreateForContent(This,content,result) \
    ( (This)->lpVtbl->GetOrCreateForContent(This,content,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSiteStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpKeyboardInput
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpKeyboardInput[] = L"Microsoft.UI.Input.Experimental.IExpKeyboardInput";
/* [object, uuid("CE01B259-E442-565B-930E-CD9F046C5507"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentKeyEventDeviceId )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyState )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeyState )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyActivated )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyActivated )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SysKeyDown )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SysKeyDown )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SysKeyUp )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SysKeyUp )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContextMenuKey )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpKeyboardInput_Microsoft__CUI__CInput__CExperimental__CExpContextMenuKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContextMenuKey )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_get_CurrentKeyEventDeviceId(This,value) \
    ( (This)->lpVtbl->get_CurrentKeyEventDeviceId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_GetCurrentKeyState(This,virtualKey,result) \
    ( (This)->lpVtbl->GetCurrentKeyState(This,virtualKey,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_GetKeyState(This,virtualKey,result) \
    ( (This)->lpVtbl->GetKeyState(This,virtualKey,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_AcceleratorKeyActivated(This,handler,token) \
    ( (This)->lpVtbl->add_AcceleratorKeyActivated(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_AcceleratorKeyActivated(This,token) \
    ( (This)->lpVtbl->remove_AcceleratorKeyActivated(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_CharacterReceived(This,handler,token) \
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_CharacterReceived(This,token) \
    ( (This)->lpVtbl->remove_CharacterReceived(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_KeyDown(This,handler,token) \
    ( (This)->lpVtbl->add_KeyDown(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_KeyDown(This,token) \
    ( (This)->lpVtbl->remove_KeyDown(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_KeyUp(This,handler,token) \
    ( (This)->lpVtbl->add_KeyUp(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_KeyUp(This,token) \
    ( (This)->lpVtbl->remove_KeyUp(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_SysKeyDown(This,handler,token) \
    ( (This)->lpVtbl->add_SysKeyDown(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_SysKeyDown(This,token) \
    ( (This)->lpVtbl->remove_SysKeyDown(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_SysKeyUp(This,handler,token) \
    ( (This)->lpVtbl->add_SysKeyUp(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_SysKeyUp(This,token) \
    ( (This)->lpVtbl->remove_SysKeyUp(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_add_ContextMenuKey(This,handler,token) \
    ( (This)->lpVtbl->add_ContextMenuKey(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_remove_ContextMenuKey(This,token) \
    ( (This)->lpVtbl->remove_ContextMenuKey(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpKeyboardInputStatics[] = L"Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics";
/* [object, uuid("8884DED6-FAB4-5EC5-BABF-30B531672C30"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInput * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpKeyboardInputStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs";
/* [object, uuid("8B968AC2-8EA5-5CD8-8485-FFA92388110E"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs";
/* [object, uuid("AC4EBF4C-FC52-50C5-9A9B-D41698BA1483"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationStartedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs";
/* [object, uuid("70CB834C-0A99-5723-84CE-827C555FB8CA"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs";
/* [object, uuid("3C034BD7-256F-54CC-9A0D-20A564BDDE79"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_get_Cumulative(This,value) \
    ( (This)->lpVtbl->get_Cumulative(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_get_Delta(This,value) \
    ( (This)->lpVtbl->get_Delta(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_get_Velocities(This,value) \
    ( (This)->lpVtbl->get_Velocities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseCapture
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseCapture[] = L"Microsoft.UI.Input.Experimental.IExpMouseCapture";
/* [object, uuid("82919E2B-4D4B-590B-A6DD-5ACEBB8D6411"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasCapture )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
        /* [retval, out] */boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryReleaseCapture )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetCapture )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * This,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_get_HasCapture(This,value) \
    ( (This)->lpVtbl->get_HasCapture(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_TryReleaseCapture(This,result) \
    ( (This)->lpVtbl->TryReleaseCapture(This,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_TrySetCapture(This,result) \
    ( (This)->lpVtbl->TrySetCapture(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseCaptureStatics[] = L"Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics";
/* [object, uuid("51EC13D2-EA81-593A-BB3F-AD383066C229"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCapture * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseCaptureStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpMouseWheelParameters
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpMouseWheelParameters[] = L"Microsoft.UI.Input.Experimental.IExpMouseWheelParameters";
/* [object, uuid("53C7EFFD-7E8B-5B58-B3BF-9DA0DCD05A5F"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CharTranslation )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CharTranslation )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaScale )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaScale )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaRotationAngle )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaRotationAngle )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageTranslation )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageTranslation )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParametersVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_get_CharTranslation(This,value) \
    ( (This)->lpVtbl->get_CharTranslation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_put_CharTranslation(This,value) \
    ( (This)->lpVtbl->put_CharTranslation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_get_DeltaScale(This,value) \
    ( (This)->lpVtbl->get_DeltaScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_put_DeltaScale(This,value) \
    ( (This)->lpVtbl->put_DeltaScale(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_get_DeltaRotationAngle(This,value) \
    ( (This)->lpVtbl->get_DeltaRotationAngle(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_put_DeltaRotationAngle(This,value) \
    ( (This)->lpVtbl->put_DeltaRotationAngle(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_get_PageTranslation(This,value) \
    ( (This)->lpVtbl->get_PageTranslation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_put_PageTranslation(This,value) \
    ( (This)->lpVtbl->put_PageTranslation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpNavigateFocusRequestedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs";
/* [object, uuid("563B3F71-ECA0-5652-B748-13C6D6794CEE"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpFocusNavigationRequest * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WasMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_get_WasMoved(This,value) \
    ( (This)->lpVtbl->get_WasMoved(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_put_WasMoved(This,value) \
    ( (This)->lpVtbl->put_WasMoved(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpNavigateFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerCursorController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerCursorController[] = L"Microsoft.UI.Input.Experimental.IExpPointerCursorController";
/* [object, uuid("46913798-802B-56B5-8B65-CA03154B00BA"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cursor )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cursor )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_get_Cursor(This,value) \
    ( (This)->lpVtbl->get_Cursor(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_put_Cursor(This,value) \
    ( (This)->lpVtbl->put_Cursor(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerCursorControllerStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics";
/* [object, uuid("18EDF0FC-E558-51AF-B099-6AA410CA0A92"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorController * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerCursorControllerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpPointerEventArgs";
/* [object, uuid("B84198C5-2A2F-5591-AC66-B35EFBB8FC52"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyModifiers )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs * This,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_get_CurrentPoint(This,value) \
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_get_KeyModifiers(This,value) \
    ( (This)->lpVtbl->get_KeyModifiers(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_GetIntermediatePoints(This,result) \
    ( (This)->lpVtbl->GetIntermediatePoints(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserver";
/* [object, uuid("7A25B08F-75FF-5218-B905-F9FF01FD4CFA"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedAway )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedAway )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedReleased )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedReleased )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedTo )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedTo )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpPointerInputObserver_Microsoft__CUI__CInput__CExperimental__CExpPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerCaptureLost(This,handler,token) \
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerCaptureLost(This,token) \
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerEntered(This,handler,token) \
    ( (This)->lpVtbl->add_PointerEntered(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerEntered(This,token) \
    ( (This)->lpVtbl->remove_PointerEntered(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerExited(This,handler,token) \
    ( (This)->lpVtbl->add_PointerExited(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerExited(This,token) \
    ( (This)->lpVtbl->remove_PointerExited(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerMoved(This,handler,token) \
    ( (This)->lpVtbl->add_PointerMoved(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerMoved(This,token) \
    ( (This)->lpVtbl->remove_PointerMoved(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerPressed(This,handler,token) \
    ( (This)->lpVtbl->add_PointerPressed(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerPressed(This,token) \
    ( (This)->lpVtbl->remove_PointerPressed(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerReleased(This,handler,token) \
    ( (This)->lpVtbl->add_PointerReleased(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerReleased(This,token) \
    ( (This)->lpVtbl->remove_PointerReleased(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerRoutedAway(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedAway(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerRoutedAway(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedAway(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerRoutedReleased(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedReleased(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerRoutedReleased(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedReleased(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerRoutedTo(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedTo(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerRoutedTo(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedTo(This,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_add_PointerWheelChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_remove_PointerWheelChanged(This,token) \
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserverFactory
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserverFactory[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserverFactory";
/* [object, uuid("E34C0297-F73B-5D7D-87EB-4791EAB2F583"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerInputObserverStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics";
/* [object, uuid("DC8D2989-AD28-58AA-91AC-17B3CF8BCD59"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserver * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_CreateForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->CreateForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerInputObserverStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPoint
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPoint[] = L"Microsoft.UI.Input.Experimental.IExpPointerPoint";
/* [object, uuid("97CB6935-34A2-5934-ACC8-F00AB08736EC"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInContact )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawPosition )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * This,
        /* [retval, out] */UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_FrameId(This,value) \
    ( (This)->lpVtbl->get_FrameId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_IsInContact(This,value) \
    ( (This)->lpVtbl->get_IsInContact(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_PointerId(This,value) \
    ( (This)->lpVtbl->get_PointerId(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_RawPosition(This,value) \
    ( (This)->lpVtbl->get_RawPosition(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPointProperties
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPointProperties[] = L"Microsoft.UI.Input.Experimental.IExpPointerPointProperties";
/* [object, uuid("4E6E6AD8-8A8E-5441-A281-FEBD72D1CE6A"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactRect )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactRectRaw )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBarrelButtonPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEraser )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHorizontalMouseWheel )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInRange )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInverted )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLeftButtonPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMiddleButtonPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPrimary )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRightButtonPressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsXButton1Pressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsXButton2Pressed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseWheelDelta )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerUpdateKind )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CInput_CPointerUpdateKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchConfidence )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Twist )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XTilt )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_YTilt )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties * This,
        /* [retval, out] */FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointPropertiesVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_ContactRect(This,value) \
    ( (This)->lpVtbl->get_ContactRect(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_ContactRectRaw(This,value) \
    ( (This)->lpVtbl->get_ContactRectRaw(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsBarrelButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsBarrelButtonPressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsEraser(This,value) \
    ( (This)->lpVtbl->get_IsEraser(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsHorizontalMouseWheel(This,value) \
    ( (This)->lpVtbl->get_IsHorizontalMouseWheel(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsInRange(This,value) \
    ( (This)->lpVtbl->get_IsInRange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsInverted(This,value) \
    ( (This)->lpVtbl->get_IsInverted(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsLeftButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsLeftButtonPressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsMiddleButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsMiddleButtonPressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsPrimary(This,value) \
    ( (This)->lpVtbl->get_IsPrimary(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsRightButtonPressed(This,value) \
    ( (This)->lpVtbl->get_IsRightButtonPressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsXButton1Pressed(This,value) \
    ( (This)->lpVtbl->get_IsXButton1Pressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_IsXButton2Pressed(This,value) \
    ( (This)->lpVtbl->get_IsXButton2Pressed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_MouseWheelDelta(This,value) \
    ( (This)->lpVtbl->get_MouseWheelDelta(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_PointerUpdateKind(This,value) \
    ( (This)->lpVtbl->get_PointerUpdateKind(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_TouchConfidence(This,value) \
    ( (This)->lpVtbl->get_TouchConfidence(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_Twist(This,value) \
    ( (This)->lpVtbl->get_Twist(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_XTilt(This,value) \
    ( (This)->lpVtbl->get_XTilt(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_get_YTilt(This,value) \
    ( (This)->lpVtbl->get_YTilt(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpPointerPointStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpPointerPointStatics[] = L"Microsoft.UI.Input.Experimental.IExpPointerPointStatics";
/* [object, uuid("BBBD3D96-00ED-59A2-9FEC-59CABCAF270B"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentPointTransformed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPoint * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePointsTransformed )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics * This,
        /* [in] */UINT32 pointerId,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CInput__CExperimental__CExpPointerPoint * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetCurrentPoint(This,pointerId,result) \
    ( (This)->lpVtbl->GetCurrentPoint(This,pointerId,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetCurrentPointTransformed(This,pointerId,transform,result) \
    ( (This)->lpVtbl->GetCurrentPointTransformed(This,pointerId,transform,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetIntermediatePoints(This,pointerId,result) \
    ( (This)->lpVtbl->GetIntermediatePoints(This,pointerId,result) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_GetIntermediatePointsTransformed(This,pointerId,transform,result) \
    ( (This)->lpVtbl->GetIntermediatePointsTransformed(This,pointerId,transform,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpPointerPointStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpRightTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs";
/* [object, uuid("C3872670-8E4D-52C1-91A9-73C90E0BD00D"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTappedEventArgs
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.IExpTappedEventArgs";
/* [object, uuid("0A8DCCE9-6FFA-5FC5-8B66-6ED7A004DFF8"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TapCount )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs * This,
        /* [retval, out] */UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_get_TapCount(This,value) \
    ( (This)->lpVtbl->get_TapCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTouchHitTestingProvider[] = L"Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider";
/* [object, uuid("E66AECA3-F13B-50FC-A253-4EA22E903B17"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TouchHitTestRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CExperimental__CExpTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTestRequested )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_add_TouchHitTestRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TouchHitTestRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_remove_TouchHitTestRequested(This,token) \
    ( (This)->lpVtbl->remove_TouchHitTestRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_Experimental_IExpTouchHitTestingProviderStatics[] = L"Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics";
/* [object, uuid("FBFC29FD-F441-5D62-99FA-84BE9ABDC8AD"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpInputSite * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CExperimental_CIExpTouchHitTestingProviderStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpContextMenuKeyEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpContextMenuKeyEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpCrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpCrossSlidingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpCrossSlidingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpDirectManipulation
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpDirectManipulationStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpDirectManipulation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDirectManipulation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDirectManipulation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpDirectManipulation[] = L"Microsoft.UI.Input.Experimental.ExpDirectManipulation";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpDraggingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpDraggingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpFocusChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusControllerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusController[] = L"Microsoft.UI.Input.Experimental.ExpFocusController";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationHost
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusNavigationHostStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationHost ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationHost[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationHost";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusNavigationRequestStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationRequest[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationRequest";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusNavigationResult
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusNavigationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusNavigationResult[] = L"Microsoft.UI.Input.Experimental.ExpFocusNavigationResult";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpFocusObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpFocusObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpFocusObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpFocusObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpFocusObserver[] = L"Microsoft.UI.Input.Experimental.ExpFocusObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpGestureRecognizer_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpGestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpGestureRecognizer[] = L"Microsoft.UI.Input.Experimental.ExpGestureRecognizer";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpHoldingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpHoldingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpIndependentPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpIndependentPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.ExpIndependentPointerInputObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListener
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputActivationListener ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListener[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListener";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListenerActivationChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpInputActivationListenerPartnerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputActivationListenerPartner[] = L"Microsoft.UI.Input.Experimental.ExpInputActivationListenerPartner";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputObject
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputObject ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputObject[] = L"Microsoft.UI.Input.Experimental.ExpInputObject";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpInputSite
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpInputSiteStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpInputSite ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputSite_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpInputSite_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpInputSite[] = L"Microsoft.UI.Input.Experimental.ExpInputSite";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpKeyboardInput
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpKeyboardInputStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpKeyboardInput ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpKeyboardInput_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpKeyboardInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpKeyboardInput[] = L"Microsoft.UI.Input.Experimental.ExpKeyboardInput";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationCompletedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationInertiaStartingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationStartedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationStartedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpManipulationUpdatedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpMouseCapture
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpMouseCaptureStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpMouseCapture ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseCapture_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpMouseCapture[] = L"Microsoft.UI.Input.Experimental.ExpMouseCapture";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpMouseWheelParameters[] = L"Microsoft.UI.Input.Experimental.ExpMouseWheelParameters";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpNavigateFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpNavigateFocusRequestedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpNavigateFocusRequestedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerCursorController
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerCursorControllerStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerCursorController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerCursorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerCursorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerCursorController[] = L"Microsoft.UI.Input.Experimental.ExpPointerCursorController";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpPointerEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerInputObserver
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerInputObserverStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerInputObserver[] = L"Microsoft.UI.Input.Experimental.ExpPointerInputObserver";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerPoint
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpPointerPointStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerPoint ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPoint_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerPoint[] = L"Microsoft.UI.Input.Experimental.ExpPointerPoint";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpPointerPointProperties ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPointProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpPointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpPointerPointProperties[] = L"Microsoft.UI.Input.Experimental.ExpPointerPointProperties";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpRightTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpRightTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpTappedEventArgs[] = L"Microsoft.UI.Input.Experimental.ExpTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider
 *
 * Introduced to Microsoft.Foundation.LiftedExperimentalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.Experimental.IExpTouchHitTestingProviderStatics interface starting with version 1.0 of the Microsoft.Foundation.LiftedExperimentalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.Experimental.IExpTouchHitTestingProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_Experimental_ExpTouchHitTestingProvider[] = L"Microsoft.UI.Input.Experimental.ExpTouchHitTestingProvider";
#endif
#endif // MICROSOFT_FOUNDATION_LIFTEDEXPERIMENTALCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EInput2EExperimental_p_h__

#endif // __Microsoft2EUI2EInput2EExperimental_h__
