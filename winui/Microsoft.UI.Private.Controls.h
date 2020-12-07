/* Header file automatically generated from Microsoft.UI.Private.Controls.idl */
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
#ifndef __Microsoft2EUI2EPrivate2EControls_h__
#define __Microsoft2EUI2EPrivate2EControls_h__
#ifndef __Microsoft2EUI2EPrivate2EControls_p_h__
#define __Microsoft2EUI2EPrivate2EControls_p_h__


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
#include "Microsoft.UI.Composition.Interactions.h"
#include "Microsoft.UI.Xaml.h"
#include "Microsoft.UI.Xaml.Controls.h"
#include "Microsoft.UI.Xaml.Controls.Primitives.h"
#include "Microsoft.UI.Xaml.Data.h"
#include "Microsoft.UI.Xaml.Media.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IConfigurationChangedEventHandler;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler ABI::Microsoft::UI::Private::Controls::IConfigurationChangedEventHandler

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IPostArrangeEventHandler;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler ABI::Microsoft::UI::Private::Controls::IPostArrangeEventHandler

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IViewportChangedEventHandler;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler ABI::Microsoft::UI::Private::Controls::IViewportChangedEventHandler

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IAdapterAnimationHandler;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler ABI::Microsoft::UI::Private::Controls::IAdapterAnimationHandler

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IButtonInteraction;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction ABI::Microsoft::UI::Private::Controls::IButtonInteraction

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IButtonInteractionFactory;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory ABI::Microsoft::UI::Private::Controls::IButtonInteractionFactory

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IButtonInteractionInvokedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs ABI::Microsoft::UI::Private::Controls::IButtonInteractionInvokedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IDisplayRegionHelperTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi ABI::Microsoft::UI::Private::Controls::IDisplayRegionHelperTestApi

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IDisplayRegionHelperTestApiStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics ABI::Microsoft::UI::Private::Controls::IDisplayRegionHelperTestApiStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IMUXControlsTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IMUXControlsTestHooksLoggingMessageEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooksLoggingMessageEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IMUXControlsTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IPullToRefreshHelperTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi ABI::Microsoft::UI::Private::Controls::IPullToRefreshHelperTestApi

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IPullToRefreshHelperTestApiStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics ABI::Microsoft::UI::Private::Controls::IPullToRefreshHelperTestApiStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRadioButtonsTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks ABI::Microsoft::UI::Private::Controls::IRadioButtonsTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRadioButtonsTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics ABI::Microsoft::UI::Private::Controls::IRadioButtonsTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRefreshContainerPrivate;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate ABI::Microsoft::UI::Private::Controls::IRefreshContainerPrivate

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRefreshInfoProvider;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRefreshInfoProviderAdapter;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter ABI::Microsoft::UI::Private::Controls::IRefreshInfoProviderAdapter

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRefreshVisualizerPrivate;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate ABI::Microsoft::UI::Private::Controls::IRefreshVisualizerPrivate

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRepeaterScrollingSurface;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface ABI::Microsoft::UI::Private::Controls::IRepeaterScrollingSurface

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRepeaterTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks ABI::Microsoft::UI::Private::Controls::IRepeaterTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IRepeaterTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics ABI::Microsoft::UI::Private::Controls::IRepeaterTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollViewerIRefreshInfoProviderAdapter;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter ABI::Microsoft::UI::Private::Controls::IScrollViewerIRefreshInfoProviderAdapter

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollViewerIRefreshInfoProviderAdapterFactory;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory ABI::Microsoft::UI::Private::Controls::IScrollViewerIRefreshInfoProviderAdapterFactory

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollerTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks ABI::Microsoft::UI::Private::Controls::IScrollerTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollerTestHooksAnchorEvaluatedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksAnchorEvaluatedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollerTestHooksExpressionAnimationStatusChangedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksExpressionAnimationStatusChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollerTestHooksInteractionSourcesChangedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksInteractionSourcesChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface IScrollerTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISliderInteraction;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction ABI::Microsoft::UI::Private::Controls::ISliderInteraction

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISliderInteractionFactory;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory ABI::Microsoft::UI::Private::Controls::ISliderInteractionFactory

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISpectrumBrush;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush ABI::Microsoft::UI::Private::Controls::ISpectrumBrush

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISpectrumBrushStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics ABI::Microsoft::UI::Private::Controls::ISpectrumBrushStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISplitButtonTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi ABI::Microsoft::UI::Private::Controls::ISplitButtonTestApi

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISplitButtonTestApiStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics ABI::Microsoft::UI::Private::Controls::ISplitButtonTestApiStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISwipeTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks ABI::Microsoft::UI::Private::Controls::ISwipeTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ISwipeTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics ABI::Microsoft::UI::Private::Controls::ISwipeTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ITeachingTipTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks ABI::Microsoft::UI::Private::Controls::ITeachingTipTestHooks

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    interface ITeachingTipTestHooksStatics;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics ABI::Microsoft::UI::Private::Controls::ITeachingTipTestHooksStatics

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class MUXControlsTestHooksLoggingMessageEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5ff4070a-42d2-5e7a-acc3-4a22bedbe8b4"))
ITypedEventHandler<IInspectable*,ABI::Microsoft::UI::Private::Controls::MUXControlsTestHooksLoggingMessageEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::MUXControlsTestHooksLoggingMessageEventArgs*, ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooksLoggingMessageEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Microsoft::UI::Private::Controls::MUXControlsTestHooksLoggingMessageEventArgs*> __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooksLoggingMessageEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Microsoft::UI::Private::Controls::IMUXControlsTestHooksLoggingMessageEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ButtonInteraction;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ButtonInteractionInvokedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1910e0d9-58a3-5cf4-8d76-a6fbbab13e57"))
ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::ButtonInteraction*,ABI::Microsoft::UI::Private::Controls::ButtonInteractionInvokedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::ButtonInteraction*, ABI::Microsoft::UI::Private::Controls::IButtonInteraction*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::ButtonInteractionInvokedEventArgs*, ABI::Microsoft::UI::Private::Controls::IButtonInteractionInvokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Private.Controls.ButtonInteraction, Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::ButtonInteraction*,ABI::Microsoft::UI::Private::Controls::ButtonInteractionInvokedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IButtonInteraction*,ABI::Microsoft::UI::Private::Controls::IButtonInteractionInvokedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IButtonInteraction*,ABI::Microsoft::UI::Private::Controls::IButtonInteractionInvokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_USE */






#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2a79ca36-6169-5a6d-9398-a34ac4849afb"))
ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,IInspectable*> : ITypedEventHandler_impl<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Private.Controls.IRefreshInfoProvider, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        class Scroller;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        interface IScroller;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ScrollerTestHooksAnchorEvaluatedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5b400fe6-e228-5bb2-a08a-22c1226c3383"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksAnchorEvaluatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksAnchorEvaluatedEventArgs*, ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksAnchorEvaluatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.Primitives.Scroller, Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksAnchorEvaluatedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksAnchorEvaluatedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksAnchorEvaluatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ScrollerTestHooksExpressionAnimationStatusChangedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("406ec3f7-486a-5dca-8bb8-be732e9fc520"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksExpressionAnimationStatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksExpressionAnimationStatusChangedEventArgs*, ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksExpressionAnimationStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.Primitives.Scroller, Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksExpressionAnimationStatusChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksExpressionAnimationStatusChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksExpressionAnimationStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ScrollerTestHooksInteractionSourcesChangedEventArgs;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ce709715-28d8-500f-95b3-3c9d75e7bf12"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksInteractionSourcesChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksInteractionSourcesChangedEventArgs*, ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksInteractionSourcesChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.Primitives.Scroller, Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,ABI::Microsoft::UI::Private::Controls::ScrollerTestHooksInteractionSourcesChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksInteractionSourcesChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,ABI::Microsoft::UI::Private::Controls::IScrollerTestHooksInteractionSourcesChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class RadioButtons;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IRadioButtons;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons ABI::Microsoft::UI::Xaml::Controls::IRadioButtons

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__




#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7a97de1d-bb33-51b0-a642-8f26e97a0bde"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RadioButtons*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::RadioButtons*, ABI::Microsoft::UI::Xaml::Controls::IRadioButtons*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.RadioButtons, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RadioButtons*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IRadioButtons*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IRadioButtons*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_USE */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class RefreshInteractionRatioChangedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IRefreshInteractionRatioChangedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs ABI::Microsoft::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__



#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7cc9281e-f6bc-54bd-bc26-8c66650a36e5"))
ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,ABI::Microsoft::UI::Xaml::Controls::RefreshInteractionRatioChangedEventArgs*> : ITypedEventHandler_impl<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::RefreshInteractionRatioChangedEventArgs*, ABI::Microsoft::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Private.Controls.IRefreshInfoProvider, Microsoft.UI.Xaml.Controls.RefreshInteractionRatioChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,ABI::Microsoft::UI::Xaml::Controls::RefreshInteractionRatioChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,ABI::Microsoft::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider*,ABI::Microsoft::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_USE */






#ifndef DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#define DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c7e65ce2-fad5-5e3b-9c58-186ca8c1dd57"))
ITypedEventHandler<IInspectable*,IInspectable*> : ITypedEventHandler_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,IInspectable*> __FITypedEventHandler_2_IInspectable_IInspectable_t;
#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
//#define __FITypedEventHandler_2_IInspectable_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE */



#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Interactions {
                    interface ICompositionInteractionSource;
                } /* Interactions */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE
#define DEF___FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f21f2a85-e3f0-557c-8cff-6cfbc39754bb"))
IIterator<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> : IIterator_impl<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Composition.Interactions.ICompositionInteractionSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t;
#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*>
//#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE
#define DEF___FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ef893131-12b4-5e2d-9a98-b083ab218918"))
IIterable<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> : IIterable_impl<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Composition.Interactions.ICompositionInteractionSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*> __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t;
#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*>
//#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_USE */


#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_boolean_USE
#define DEF___FIReference_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a"))
IReference<bool> : IReference_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<bool> __FIReference_1_boolean_t;
#define __FIReference_1_boolean ABI::Windows::Foundation::__FIReference_1_boolean_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_boolean ABI::Windows::Foundation::IReference<boolean>
//#define __FIReference_1_boolean_t ABI::Windows::Foundation::IReference<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_boolean_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        class ScrollSnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        interface IScrollSnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__



#ifndef DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#define DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("02f96dea-8fc0-535f-bd68-0bdbc85c207f"))
IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Xaml.Controls.Primitives.ScrollSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t;
#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
//#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE */





#ifndef DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#define DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b473ae58-7c88-5b2d-85fb-bf51c6366b5f"))
IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Xaml.Controls.Primitives.ScrollSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t;
#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
//#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE */





#ifndef DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ffd69432-94da-50ae-ac63-1dadc0e9900f"))
IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Xaml.Controls.Primitives.ScrollSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t;
#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE */





#ifndef DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#define DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("44786fbd-d376-5b07-b4fd-54113268d3a6"))
IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Xaml.Controls.Primitives.ScrollSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase*> __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t;
#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
//#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        class ZoomSnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        interface IZoomSnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__



#ifndef DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#define DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3bb2735f-224e-547b-a7ba-4331199af893"))
IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Xaml.Controls.Primitives.ZoomSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t;
#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
//#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE */





#ifndef DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#define DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a3e88653-622e-597c-8cdb-7d54d2342aec"))
IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Xaml.Controls.Primitives.ZoomSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t;
#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
//#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE */





#ifndef DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09386c00-10c1-5ae0-8e62-3dfb5198c489"))
IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Xaml.Controls.Primitives.ZoomSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t;
#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE */





#ifndef DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#define DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2705789a-e69c-5274-b15b-ca245be267e2"))
IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Xaml.Controls.Primitives.ZoomSnapPointBase>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase*> __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t;
#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
//#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_USE */






#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f2e026bb-c265-5a7a-a7b3-6cf7219b68b9"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.Primitives.Scroller, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::Scroller*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class SwipeControl;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface ISwipeControl;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl ABI::Microsoft::UI::Xaml::Controls::ISwipeControl

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__




#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0d7cebc2-3aab-538c-9701-7f2d06f1d414"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::SwipeControl*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::SwipeControl*, ABI::Microsoft::UI::Xaml::Controls::ISwipeControl*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.SwipeControl, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::SwipeControl*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::ISwipeControl*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::ISwipeControl*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_USE */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class TeachingTip;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface ITeachingTip;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip ABI::Microsoft::UI::Xaml::Controls::ITeachingTip

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__




#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0060bd6f-5e3f-538c-a348-c5f6910c9732"))
ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TeachingTip*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Xaml::Controls::TeachingTip*, ABI::Microsoft::UI::Xaml::Controls::ITeachingTip*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Xaml.Controls.TeachingTip, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TeachingTip*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::ITeachingTip*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::ITeachingTip*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_USE */





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionEasingFunction;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionEasingFunction;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction ABI::Microsoft::UI::Composition::ICompositionEasingFunction

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__


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





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Interactions {
                    class CompositionInteractionSourceCollection;
                } /* Interactions */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Interactions {
                    interface ICompositionInteractionSourceCollection;
                } /* Interactions */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSourceCollection

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Interactions {
                    class InteractionTracker;
                } /* Interactions */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                namespace Interactions {
                    interface IInteractionTracker;
                } /* Interactions */
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker ABI::Microsoft::UI::Composition::Interactions::IInteractionTracker

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__






namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    
                    typedef enum Orientation : int Orientation;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        class Popup;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        interface IPopup;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__




namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        class SnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        interface ISnapPointBase;
                    } /* Primitives */
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase ABI::Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__










namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    
                    typedef enum RefreshPullDirection : int RefreshPullDirection;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class RefreshRequestedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IRefreshRequestedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs ABI::Microsoft::UI::Xaml::Controls::IRefreshRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class RefreshStateChangedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IRefreshStateChangedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs ABI::Microsoft::UI::Xaml::Controls::IRefreshStateChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    
                    typedef enum RefreshVisualizerState : int RefreshVisualizerState;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class ScrollCompletedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IScrollCompletedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs ABI::Microsoft::UI::Xaml::Controls::IScrollCompletedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__


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
                namespace Controls {
                    
                    typedef enum TeachingTipHeroContentPlacementMode : int TeachingTipHeroContentPlacementMode;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    
                    typedef enum TeachingTipPlacementMode : int TeachingTipPlacementMode;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    
                    typedef enum TwoPaneViewMode : int TwoPaneViewMode;
                    
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class ZoomCompletedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IZoomCompletedEventArgs;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs ABI::Microsoft::UI::Xaml::Controls::IZoomCompletedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface INotifyPropertyChanged;
                } /* Data */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged ABI::Microsoft::UI::Xaml::Data::INotifyPropertyChanged

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__






namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                class DependencyProperty;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                interface IDependencyProperty;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty ABI::Microsoft::UI::Xaml::IDependencyProperty

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    class LoadedImageSurface;
                } /* Media */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    interface ILoadedImageSurface;
                } /* Media */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface ABI::Microsoft::UI::Xaml::Media::ILoadedImageSurface

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__






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


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                
                typedef enum Visibility : int Visibility;
                
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__




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
            
            typedef struct Rect Rect;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Foundation */
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
            namespace Private {
                namespace Controls {
                    
                    typedef enum ButtonInteractionInvokeMode : int ButtonInteractionInvokeMode;
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    
                    typedef enum ScrollerViewChangeResult : int ScrollerViewChangeResult;
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */











































namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class DisplayRegionHelperTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class MUXControlsTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class PullToRefreshHelperTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class RadioButtonsTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class RepeaterTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ScrollViewerIRefreshInfoProviderAdapter;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class ScrollerTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */





namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class SliderInteraction;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class SpectrumBrush;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class SplitButtonTestApi;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class SwipeTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    class TeachingTipTestHooks;
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */












/*
 *
 * Struct Microsoft.UI.Private.Controls.ButtonInteractionInvokeMode
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [v1_enum, version] */
                    enum ButtonInteractionInvokeMode : int
                    {
                        ButtonInteractionInvokeMode_Release = 0,
                        ButtonInteractionInvokeMode_Press = 1,
                        ButtonInteractionInvokeMode_Hover = 2,
                    };
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.UI.Private.Controls.ScrollerViewChangeResult
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [v1_enum, version] */
                    enum ScrollerViewChangeResult : int
                    {
                        ScrollerViewChangeResult_Completed = 0,
                        ScrollerViewChangeResult_Interrupted = 1,
                        ScrollerViewChangeResult_Ignored = 2,
                    };
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Delegate Microsoft.UI.Private.Controls.ConfigurationChangedEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("B9632DA1-94F2-5C01-A3C5-F77E39F9932E")] */
                    MIDL_INTERFACE("B9632DA1-94F2-5C01-A3C5-F77E39F9932E")
                    IConfigurationChangedEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IRepeaterScrollingSurface * sender
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IConfigurationChangedEventHandler=_uuidof(IConfigurationChangedEventHandler);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Microsoft.UI.Private.Controls.PostArrangeEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("0543EA9A-E419-5530-BDE0-C073D515E8B4")] */
                    MIDL_INTERFACE("0543EA9A-E419-5530-BDE0-C073D515E8B4")
                    IPostArrangeEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IRepeaterScrollingSurface * sender
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPostArrangeEventHandler=_uuidof(IPostArrangeEventHandler);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Microsoft.UI.Private.Controls.ViewportChangedEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("319622FC-620E-5E3D-B768-2743CF278E7E")] */
                    MIDL_INTERFACE("319622FC-620E-5E3D-B768-2743CF278E7E")
                    IViewportChangedEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IRepeaterScrollingSurface * sender,
                            /* [in] */::boolean isFinal
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IViewportChangedEventHandler=_uuidof(IViewportChangedEventHandler);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IAdapterAnimationHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IAdapterAnimationHandler[] = L"Microsoft.UI.Private.Controls.IAdapterAnimationHandler";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("25D4A4BC-B4DB-54EF-A6E0-5E2058E8276A")] */
                    MIDL_INTERFACE("25D4A4BC-B4DB-54EF-A6E0-5E2058E8276A")
                    IAdapterAnimationHandler : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE InteractionTrackerAnimation(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * refreshVisualizer,
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * infoProvider,
                            /* [in] */ABI::Microsoft::UI::Composition::Interactions::IInteractionTracker * interactionTracker
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RefreshRequestedAnimation(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * refreshVisualizer,
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * infoProvider,
                            /* [in] */DOUBLE executionRatio
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RefreshCompletedAnimation(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * refreshVisualizer,
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * infoProvider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdapterAnimationHandler=_uuidof(IAdapterAnimationHandler);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteraction
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteraction[] = L"Microsoft.UI.Private.Controls.IButtonInteraction";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("E64AA68F-67EE-5541-A777-BE9BBF6FA70C"), exclusiveto] */
                    MIDL_INTERFACE("E64AA68F-67EE-5541-A777-BE9BBF6FA70C")
                    IButtonInteraction : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvokeMode(
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::ButtonInteractionInvokeMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InvokeMode(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::ButtonInteractionInvokeMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHovering(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPressing(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Invoked(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Invoked(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IButtonInteraction=_uuidof(IButtonInteraction);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteractionFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteractionFactory[] = L"Microsoft.UI.Private.Controls.IButtonInteractionFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("7E76E898-90B2-5C33-8E79-B1B72B066735"), exclusiveto] */
                    MIDL_INTERFACE("7E76E898-90B2-5C33-8E79-B1B72B066735")
                    IButtonInteractionFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */IInspectable * baseInterface,
                            /* [out] */IInspectable * * innerInterface,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IButtonInteraction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IButtonInteractionFactory=_uuidof(IButtonInteractionFactory);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteractionInvokedEventArgs[] = L"Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("0F174283-EC4D-5340-8F45-9C73C9B20634"), exclusiveto] */
                    MIDL_INTERFACE("0F174283-EC4D-5340-8F45-9C73C9B20634")
                    IButtonInteractionInvokedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Target(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IUIElement * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IButtonInteractionInvokedEventArgs=_uuidof(IButtonInteractionInvokedEventArgs);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IDisplayRegionHelperTestApi[] = L"Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("CB2C0727-F02A-5325-9A89-74AEC8546D85"), exclusiveto] */
                    MIDL_INTERFACE("CB2C0727-F02A-5325-9A89-74AEC8546D85")
                    IDisplayRegionHelperTestApi : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDisplayRegionHelperTestApi=_uuidof(IDisplayRegionHelperTestApi);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IDisplayRegionHelperTestApiStatics[] = L"Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApiStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("8312FD4D-14ED-52D3-A7C7-C2AC3AFB8748"), exclusiveto] */
                    MIDL_INTERFACE("8312FD4D-14ED-52D3-A7C7-C2AC3AFB8748")
                    IDisplayRegionHelperTestApiStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimulateDisplayRegions(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SimulateDisplayRegions(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimulateMode(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::TwoPaneViewMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SimulateMode(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::TwoPaneViewMode value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDisplayRegionHelperTestApiStatics=_uuidof(IDisplayRegionHelperTestApiStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooks[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("DDB77E64-E10E-51A8-9E72-A2CA438F0572"), exclusiveto] */
                    MIDL_INTERFACE("DDB77E64-E10E-51A8-9E72-A2CA438F0572")
                    IMUXControlsTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMUXControlsTestHooks=_uuidof(IMUXControlsTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooksLoggingMessageEventArgs[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("794ECDDA-8439-5BC8-9F5D-361B6875C01E"), exclusiveto] */
                    MIDL_INTERFACE("794ECDDA-8439-5BC8-9F5D-361B6875C01E")
                    IMUXControlsTestHooksLoggingMessageEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVerboseLevel(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMUXControlsTestHooksLoggingMessageEventArgs=_uuidof(IMUXControlsTestHooksLoggingMessageEventArgs);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("82F23C73-FF09-5B19-8A0D-79BC9515FA22"), exclusiveto] */
                    MIDL_INTERFACE("82F23C73-FF09-5B19-8A0D-79BC9515FA22")
                    IMUXControlsTestHooksStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetOutputDebugStringLevelForType(
                            /* [in] */HSTRING type,
                            /* [in] */::boolean isLoggingInfoLevel,
                            /* [in] */::boolean isLoggingVerboseLevel
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLoggingLevelForType(
                            /* [in] */HSTRING type,
                            /* [in] */::boolean isLoggingInfoLevel,
                            /* [in] */::boolean isLoggingVerboseLevel
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLoggingLevelForInstance(
                            /* [in] */IInspectable * sender,
                            /* [in] */::boolean isLoggingInfoLevel,
                            /* [in] */::boolean isLoggingVerboseLevel
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LoggingMessage(
                            /* [in] */__FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LoggingMessage(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMUXControlsTestHooksStatics=_uuidof(IMUXControlsTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IPullToRefreshHelperTestApi[] = L"Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("6D3133D3-C2D5-5206-9E49-5A99AB4E4AB3"), exclusiveto] */
                    MIDL_INTERFACE("6D3133D3-C2D5-5206-9E49-5A99AB4E4AB3")
                    IPullToRefreshHelperTestApi : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPullToRefreshHelperTestApi=_uuidof(IPullToRefreshHelperTestApi);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IPullToRefreshHelperTestApiStatics[] = L"Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApiStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("6ACB6568-1035-53B2-955E-4CD69A8EB172"), exclusiveto] */
                    MIDL_INTERFACE("6ACB6568-1035-53B2-955E-4CD69A8EB172")
                    IPullToRefreshHelperTestApiStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateRefreshInteractionRatioChangedEventArgsInstance(
                            /* [in] */DOUBLE value,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRefreshStateChangedEventArgsInstance(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::RefreshVisualizerState oldValue,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::RefreshVisualizerState newValue,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::IRefreshStateChangedEventArgs * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRefreshRequestedEventArgsInstance(
                            /* [in] */ABI::Windows::Foundation::IDeferral * handler,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::IRefreshRequestedEventArgs * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPullToRefreshHelperTestApiStatics=_uuidof(IPullToRefreshHelperTestApiStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRadioButtonsTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRadioButtonsTestHooks[] = L"Microsoft.UI.Private.Controls.IRadioButtonsTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("FC4BEA9D-62DF-5AF5-B676-462ADB210D3F"), exclusiveto] */
                    MIDL_INTERFACE("FC4BEA9D-62DF-5AF5-B676-462ADB210D3F")
                    IRadioButtonsTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRadioButtonsTestHooks=_uuidof(IRadioButtonsTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRadioButtonsTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRadioButtonsTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IRadioButtonsTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("4DA17A75-F719-5333-AB4D-EFC919D4AA71"), exclusiveto] */
                    MIDL_INTERFACE("4DA17A75-F719-5333-AB4D-EFC919D4AA71")
                    IRadioButtonsTestHooksStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetTestHooksEnabled(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IRadioButtons * radioButtons,
                            /* [in] */::boolean enabled
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRows(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IRadioButtons * radioButtons,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetColumns(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IRadioButtons * radioButtons,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLargerColumns(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IRadioButtons * radioButtons,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LayoutChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LayoutChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRadioButtonsTestHooksStatics=_uuidof(IRadioButtonsTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshContainerPrivate
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshContainerPrivate[] = L"Microsoft.UI.Private.Controls.IRefreshContainerPrivate";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("20C0EE3F-06B5-5152-B015-0664A4ADA213")] */
                    MIDL_INTERFACE("20C0EE3F-06B5-5152-B015-0664A4ADA213")
                    IRefreshContainerPrivate : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RefreshInfoProviderAdapter(
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProviderAdapter * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RefreshInfoProviderAdapter(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProviderAdapter * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRefreshContainerPrivate=_uuidof(IRefreshContainerPrivate);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshInfoProvider
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshInfoProvider[] = L"Microsoft.UI.Private.Controls.IRefreshInfoProvider";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("623906A9-0ACF-54EF-88E1-9A36DA043648")] */
                    MIDL_INTERFACE("623906A9-0ACF-54EF-88E1-9A36DA043648")
                    IRefreshInfoProvider : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE OnRefreshStarted(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnRefreshCompleted(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInteractingForRefresh(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositionProperties(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionPropertySet * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionRatioCompositionProperty(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExecutionRatio(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsInteractingForRefreshChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsInteractingForRefreshChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InteractionRatioChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InteractionRatioChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RefreshStarted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RefreshStarted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RefreshCompleted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RefreshCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRefreshInfoProvider=_uuidof(IRefreshInfoProvider);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("D1040D59-1490-587A-B116-6F45C873748A")] */
                    MIDL_INTERFACE("D1040D59-1490-587A-B116-6F45C873748A")
                    IRefreshInfoProviderAdapter : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AdaptFromTree(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * root,
                            /* [in] */ABI::Windows::Foundation::Size visualizerSize,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAnimations(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * refreshVisualizerAnimatableContainer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRefreshInfoProviderAdapter=_uuidof(IRefreshInfoProviderAdapter);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshVisualizerPrivate
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshVisualizerPrivate[] = L"Microsoft.UI.Private.Controls.IRefreshVisualizerPrivate";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("ED48295A-B54F-571A-AC5F-9CE4C7848A49")] */
                    MIDL_INTERFACE("ED48295A-B54F-571A-AC5F-9CE4C7848A49")
                    IRefreshVisualizerPrivate : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InfoProvider(
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InfoProvider(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetInternalPullDirection(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::RefreshPullDirection value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRefreshVisualizerPrivate=_uuidof(IRefreshVisualizerPrivate);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterScrollingSurface
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterScrollingSurface[] = L"Microsoft.UI.Private.Controls.IRepeaterScrollingSurface";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("4D127FAA-F746-58D7-AB0E-703E1639B19E")] */
                    MIDL_INTERFACE("4D127FAA-F746-58D7-AB0E-703E1639B19E")
                    IRepeaterScrollingSurface : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHorizontallyScrollable(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVerticallyScrollable(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnchorElement(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConfigurationChanged(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IConfigurationChangedEventHandler  * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConfigurationChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PostArrange(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IPostArrangeEventHandler  * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PostArrange(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ViewportChanged(
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IViewportChangedEventHandler  * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ViewportChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RegisterAnchorCandidate(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnregisterAnchorCandidate(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * element
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRelativeViewport(
                            /* [in] */ABI::Microsoft::UI::Xaml::IUIElement * child,
                            /* [retval, out] */ABI::Windows::Foundation::Rect * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRepeaterScrollingSurface=_uuidof(IRepeaterScrollingSurface);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterTestHooks[] = L"Microsoft.UI.Private.Controls.IRepeaterTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("FE285751-9A67-5FEB-84E6-D397EDAFB6D3"), exclusiveto] */
                    MIDL_INTERFACE("FE285751-9A67-5FEB-84E6-D397EDAFB6D3")
                    IRepeaterTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRepeaterTestHooks=_uuidof(IRepeaterTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IRepeaterTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("92132A0D-93D6-59AE-AE84-0F8FBD6D18E2"), exclusiveto] */
                    MIDL_INTERFACE("92132A0D-93D6-59AE-AE84-0F8FBD6D18E2")
                    IRepeaterTestHooksStatics : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BuildTreeCompleted(
                            /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BuildTreeCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementFactoryElementIndex(
                            /* [in] */IInspectable * getArgs,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRepeaterElementFactoryGetArgs(
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRepeaterElementFactoryRecycleArgs(
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLayoutId(
                            /* [in] */IInspectable * layout,
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLayoutId(
                            /* [in] */IInspectable * layout,
                            /* [in] */HSTRING id
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRepeaterTestHooksStatics=_uuidof(IRepeaterTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollViewerIRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("FD076A2C-0785-5FE6-B8CD-E3DDC86835BA"), exclusiveto] */
                    MIDL_INTERFACE("FD076A2C-0785-5FE6-B8CD-E3DDC86835BA")
                    IScrollViewerIRefreshInfoProviderAdapter : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Adapt(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IScrollViewer * adaptee,
                            /* [in] */ABI::Windows::Foundation::Size visualizerSize,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IRefreshInfoProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollViewerIRefreshInfoProviderAdapter=_uuidof(IScrollViewerIRefreshInfoProviderAdapter);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapterFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollViewerIRefreshInfoProviderAdapterFactory[] = L"Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapterFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("C05066B9-E896-5AC0-AFF0-614B79EE94CD"), exclusiveto] */
                    MIDL_INTERFACE("C05066B9-E896-5AC0-AFF0-614B79EE94CD")
                    IScrollViewerIRefreshInfoProviderAdapterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::RefreshPullDirection refreshPullDirection,
                            /* [in] */ABI::Microsoft::UI::Private::Controls::IAdapterAnimationHandler * animationHandler,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::IScrollViewerIRefreshInfoProviderAdapter * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollViewerIRefreshInfoProviderAdapterFactory=_uuidof(IScrollViewerIRefreshInfoProviderAdapterFactory);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooks[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("0E922435-9890-507D-939B-1619FB09EDFA"), exclusiveto] */
                    MIDL_INTERFACE("0E922435-9890-507D-939B-1619FB09EDFA")
                    IScrollerTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollerTestHooks=_uuidof(IScrollerTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksAnchorEvaluatedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("120BB09C-ECBC-5602-B01F-7A20ACE87163"), exclusiveto] */
                    MIDL_INTERFACE("120BB09C-ECBC-5602-B01F-7A20ACE87163")
                    IScrollerTestHooksAnchorEvaluatedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewportAnchorPointHorizontalOffset(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewportAnchorPointVerticalOffset(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnchorElement(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IUIElement * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollerTestHooksAnchorEvaluatedEventArgs=_uuidof(IScrollerTestHooksAnchorEvaluatedEventArgs);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksExpressionAnimationStatusChangedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("7BBADC93-8964-5E29-9AC4-40B1FFB14316"), exclusiveto] */
                    MIDL_INTERFACE("7BBADC93-8964-5E29-9AC4-40B1FFB14316")
                    IScrollerTestHooksExpressionAnimationStatusChangedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsExpressionAnimationStarted(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PropertyName(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollerTestHooksExpressionAnimationStatusChangedEventArgs=_uuidof(IScrollerTestHooksExpressionAnimationStatusChangedEventArgs);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksInteractionSourcesChangedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("F58ED2C6-29C0-52F2-937C-FA8C96994EF1"), exclusiveto] */
                    MIDL_INTERFACE("F58ED2C6-29C0-52F2-937C-FA8C96994EF1")
                    IScrollerTestHooksInteractionSourcesChangedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionSources(
                            /* [retval, out] */ABI::Microsoft::UI::Composition::Interactions::ICompositionInteractionSourceCollection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollerTestHooksInteractionSourcesChangedEventArgs=_uuidof(IScrollerTestHooksInteractionSourcesChangedEventArgs);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("9CFE2DD0-23A1-5391-911C-61C76BD3ABD9"), exclusiveto] */
                    MIDL_INTERFACE("9CFE2DD0-23A1-5391-911C-61C76BD3ABD9")
                    IScrollerTestHooksStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreAnchorNotificationsRaised(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreAnchorNotificationsRaised(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreInteractionSourcesNotificationsRaised(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreInteractionSourcesNotificationsRaised(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreExpressionAnimationStatusNotificationsRaised(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreExpressionAnimationStatusNotificationsRaised(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAnimationsEnabledOverride(
                            /* [retval, out] */__FIReference_1_boolean * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAnimationsEnabledOverride(
                            /* [in] */__FIReference_1_boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetOffsetsChangeVelocityParameters(
                            /* [out] */INT32 * millisecondsPerUnit,
                            /* [out] */INT32 * minMilliseconds,
                            /* [out] */INT32 * maxMilliseconds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetOffsetsChangeVelocityParameters(
                            /* [in] */INT32 millisecondsPerUnit,
                            /* [in] */INT32 minMilliseconds,
                            /* [in] */INT32 maxMilliseconds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetZoomFactorChangeVelocityParameters(
                            /* [out] */INT32 * millisecondsPerUnit,
                            /* [out] */INT32 * minMilliseconds,
                            /* [out] */INT32 * maxMilliseconds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetZoomFactorChangeVelocityParameters(
                            /* [in] */INT32 millisecondsPerUnit,
                            /* [in] */INT32 minMilliseconds,
                            /* [in] */INT32 maxMilliseconds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContentLayoutOffsetX(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [out] */FLOAT * contentLayoutOffsetX
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContentLayoutOffsetX(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */FLOAT contentLayoutOffsetX
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContentLayoutOffsetY(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [out] */FLOAT * contentLayoutOffsetY
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContentLayoutOffsetY(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */FLOAT contentLayoutOffsetY
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetArrangeRenderSizesDelta(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMinPosition(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMaxPosition(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScrollCompletedResult(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IScrollCompletedEventArgs * scrollCompletedEventArgs,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::ScrollerViewChangeResult * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetZoomCompletedResult(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::IZoomCompletedEventArgs * zoomCompletedEventArgs,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::ScrollerViewChangeResult * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetConsolidatedHorizontalScrollSnapPoints(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetConsolidatedVerticalScrollSnapPoints(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetConsolidatedZoomSnapPoints(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHorizontalSnapPointActualApplicableZone(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase * scrollSnapPoint,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVerticalSnapPointActualApplicableZone(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase * scrollSnapPoint,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetZoomSnapPointActualApplicableZone(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase * zoomSnapPoint,
                            /* [retval, out] */ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHorizontalSnapPointCombinationCount(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase * scrollSnapPoint,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVerticalSnapPointCombinationCount(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase * scrollSnapPoint,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetZoomSnapPointCombinationCount(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IScroller * scroller,
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase * zoomSnapPoint,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSnapPointVisualizationColor(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase * snapPoint,
                            /* [retval, out] */ABI::Windows::UI::Color * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSnapPointVisualizationColor(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase * snapPoint,
                            /* [in] */ABI::Windows::UI::Color color
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AnchorEvaluated(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AnchorEvaluated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InteractionSourcesChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InteractionSourcesChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ExpressionAnimationStatusChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ExpressionAnimationStatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContentLayoutOffsetXChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContentLayoutOffsetXChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContentLayoutOffsetYChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContentLayoutOffsetYChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollerTestHooksStatics=_uuidof(IScrollerTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISliderInteraction
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SliderInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISliderInteraction[] = L"Microsoft.UI.Private.Controls.ISliderInteraction";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("F3D5E90E-2206-56CA-801C-5C0686A20B40"), exclusiveto] */
                    MIDL_INTERFACE("F3D5E90E-2206-56CA-801C-5C0686A20B40")
                    ISliderInteraction : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::Orientation * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::Orientation value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Minimum(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Minimum(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maximum(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Maximum(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmallChange(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SmallChange(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LargeChange(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LargeChange(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISliderInteraction=_uuidof(ISliderInteraction);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISliderInteractionFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SliderInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISliderInteractionFactory[] = L"Microsoft.UI.Private.Controls.ISliderInteractionFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("95408B5D-E733-58AF-B911-AC451C36B9F5"), exclusiveto] */
                    MIDL_INTERFACE("95408B5D-E733-58AF-B911-AC451C36B9F5")
                    ISliderInteractionFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */IInspectable * baseInterface,
                            /* [out] */IInspectable * * innerInterface,
                            /* [retval, out] */ABI::Microsoft::UI::Private::Controls::ISliderInteraction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISliderInteractionFactory=_uuidof(ISliderInteractionFactory);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISpectrumBrush
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SpectrumBrush
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISpectrumBrush[] = L"Microsoft.UI.Private.Controls.ISpectrumBrush";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("20FA7976-4327-5840-A421-7303A379D649"), exclusiveto] */
                    MIDL_INTERFACE("20FA7976-4327-5840-A421-7303A379D649")
                    ISpectrumBrush : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSurface(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Media::ILoadedImageSurface * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MinSurface(
                            /* [in] */ABI::Microsoft::UI::Xaml::Media::ILoadedImageSurface * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSurface(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Media::ILoadedImageSurface * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxSurface(
                            /* [in] */ABI::Microsoft::UI::Xaml::Media::ILoadedImageSurface * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSurfaceOpacity(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxSurfaceOpacity(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpectrumBrush=_uuidof(ISpectrumBrush);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISpectrumBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SpectrumBrush
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISpectrumBrushStatics[] = L"Microsoft.UI.Private.Controls.ISpectrumBrushStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("E4A917B3-C4ED-58FF-9DE7-1E78AFE4F9A7"), exclusiveto] */
                    MIDL_INTERFACE("E4A917B3-C4ED-58FF-9DE7-1E78AFE4F9A7")
                    ISpectrumBrushStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSurfaceProperty(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSurfaceProperty(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSurfaceOpacityProperty(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpectrumBrushStatics=_uuidof(ISpectrumBrushStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISplitButtonTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISplitButtonTestApi[] = L"Microsoft.UI.Private.Controls.ISplitButtonTestApi";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("5260BE7A-2A5B-58E7-A092-D9B065BD07AB"), exclusiveto] */
                    MIDL_INTERFACE("5260BE7A-2A5B-58E7-A092-D9B065BD07AB")
                    ISplitButtonTestApi : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISplitButtonTestApi=_uuidof(ISplitButtonTestApi);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISplitButtonTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISplitButtonTestApiStatics[] = L"Microsoft.UI.Private.Controls.ISplitButtonTestApiStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("AF7AF455-4A71-5533-9109-8EDBD6C080BC"), exclusiveto] */
                    MIDL_INTERFACE("AF7AF455-4A71-5533-9109-8EDBD6C080BC")
                    ISplitButtonTestApiStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimulateTouch(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SimulateTouch(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISplitButtonTestApiStatics=_uuidof(ISplitButtonTestApiStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISwipeTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISwipeTestHooks[] = L"Microsoft.UI.Private.Controls.ISwipeTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("F07F8599-61BF-5EF2-A92B-639E35830352"), exclusiveto] */
                    MIDL_INTERFACE("F07F8599-61BF-5EF2-A92B-639E35830352")
                    ISwipeTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISwipeTestHooks=_uuidof(ISwipeTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISwipeTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISwipeTestHooksStatics[] = L"Microsoft.UI.Private.Controls.ISwipeTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("BA98E941-0FCE-537D-A02E-843CB8ECA13A"), exclusiveto] */
                    MIDL_INTERFACE("BA98E941-0FCE-537D-A02E-843CB8ECA13A")
                    ISwipeTestHooksStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetLastInteractedWithSwipeControl(
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::ISwipeControl * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsOpen(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ISwipeControl * swipeControl,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsIdle(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ISwipeControl * swipeControl,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LastInteractedWithSwipeControlChanged(
                            /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LastInteractedWithSwipeControlChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OpenedStatusChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OpenedStatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IdleStatusChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IdleStatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISwipeTestHooksStatics=_uuidof(ISwipeTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ITeachingTipTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ITeachingTipTestHooks[] = L"Microsoft.UI.Private.Controls.ITeachingTipTestHooks";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("6A393ABF-3B7F-5ECB-BC21-77D61EBB3F67"), exclusiveto] */
                    MIDL_INTERFACE("6A393ABF-3B7F-5ECB-BC21-77D61EBB3F67")
                    ITeachingTipTestHooks : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITeachingTipTestHooks=_uuidof(ITeachingTipTestHooks);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ITeachingTipTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ITeachingTipTestHooksStatics[] = L"Microsoft.UI.Private.Controls.ITeachingTipTestHooksStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Private {
                namespace Controls {
                    /* [object, version, uuid("1168461B-E53C-53C3-87D8-F244BDF4543E"), exclusiveto] */
                    MIDL_INTERFACE("1168461B-E53C-53C3-87D8-F244BDF4543E")
                    ITeachingTipTestHooksStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetExpandEasingFunction(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionEasingFunction * easingFunction
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContractEasingFunction(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Microsoft::UI::Composition::ICompositionEasingFunction * easingFunction
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTipShouldHaveShadow(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */::boolean tipShouldHaveShadow
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContentElevation(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */FLOAT elevation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTailElevation(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */FLOAT elevation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetUseTestScreenBounds(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */::boolean useTestScreenBounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTestScreenBounds(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Windows::Foundation::Rect testScreenBounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetUseTestWindowBounds(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */::boolean useTestWindowBounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTestWindowBounds(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Windows::Foundation::Rect testWindowBounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTipFollowsTarget(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */::boolean tipFollowsTarget
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetReturnTopForOutOfWindowPlacement(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */::boolean returnTopForOutOfWindowPlacement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetExpandAnimationDuration(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Windows::Foundation::TimeSpan animationDurationMultiplier
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContractAnimationDuration(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [in] */ABI::Windows::Foundation::TimeSpan animationDurationMultiplier
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsIdle(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEffectivePlacement(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::TeachingTipPlacementMode * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEffectiveHeroContentPlacement(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::TeachingTipHeroContentPlacementMode * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */DOUBLE * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */DOUBLE * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTitleVisibility(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Visibility * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSubtitleVisibility(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Visibility * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPopup(
                            /* [in] */ABI::Microsoft::UI::Xaml::Controls::ITeachingTip * teachingTip,
                            /* [retval, out] */ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup * * result
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OpenedStatusChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OpenedStatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IdleStatusChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IdleStatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OffsetChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OffsetChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EffectivePlacementChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EffectivePlacementChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EffectiveHeroContentPlacementChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EffectiveHeroContentPlacementChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TitleVisibilityChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TitleVisibilityChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SubtitleVisibilityChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SubtitleVisibilityChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITeachingTipTestHooksStatics=_uuidof(ITeachingTipTestHooksStatics);
                    
                } /* Controls */
            } /* Private */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Private.Controls.ButtonInteraction
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IButtonInteraction ** Default Interface **
 *    Microsoft.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteraction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ButtonInteraction[] = L"Microsoft.UI.Private.Controls.ButtonInteraction";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs[] = L"Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi[] = L"Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IMUXControlsTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_MUXControlsTestHooks[] = L"Microsoft.UI.Private.Controls.MUXControlsTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs[] = L"Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi[] = L"Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IRadioButtonsTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_RadioButtonsTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_RadioButtonsTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_RadioButtonsTestHooks[] = L"Microsoft.UI.Private.Controls.RadioButtonsTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IRepeaterTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_RepeaterTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_RepeaterTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_RepeaterTestHooks[] = L"Microsoft.UI.Private.Controls.RepeaterTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter ** Default Interface **
 *    Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooks[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SliderInteraction
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISliderInteraction ** Default Interface **
 *    Microsoft.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SliderInteraction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SliderInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SliderInteraction[] = L"Microsoft.UI.Private.Controls.SliderInteraction";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SpectrumBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISpectrumBrush ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SpectrumBrush_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SpectrumBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SpectrumBrush[] = L"Microsoft.UI.Private.Controls.SpectrumBrush";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISplitButtonTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SplitButtonTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SplitButtonTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SplitButtonTestApi[] = L"Microsoft.UI.Private.Controls.SplitButtonTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISwipeTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SwipeTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SwipeTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SwipeTestHooks[] = L"Microsoft.UI.Private.Controls.SwipeTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ITeachingTipTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_TeachingTipTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_TeachingTipTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_TeachingTipTestHooks[] = L"Microsoft.UI.Private.Controls.TeachingTipTestHooks";
#endif





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if !defined(____FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller_FWD_DEFINED__



#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons_FWD_DEFINED__



#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs_FWD_DEFINED__


#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_IInspectable __FITypedEventHandler_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_IInspectable;

typedef struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_IInspectableVtbl;

interface __FITypedEventHandler_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource_FWD_DEFINED__


#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource;

typedef struct __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl;

interface __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000


#if MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource;

typedef  struct __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl;

interface __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CComposition__CInteractions__CICompositionInteractionSource_INTERFACE_DEFINED__

#endif // MICROSOFT_FOUNDATION_LIFTEDCONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_boolean_INTERFACE_DEFINED__)
#define ____FIReference_1_boolean_INTERFACE_DEFINED__

typedef interface __FIReference_1_boolean __FIReference_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_boolean;

typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, /* [retval][out] */ __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;

interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_boolean_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_boolean_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase_FWD_DEFINED__


#if !defined(____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

typedef struct __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl;

interface __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

typedef  struct __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl;

interface __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

typedef struct __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [in] */ __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl;

interface __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase;

typedef struct __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl;

interface __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase_FWD_DEFINED__


#if !defined(____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

typedef struct __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl;

interface __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

typedef  struct __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl;

interface __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

typedef struct __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [in] */ __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl;

interface __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase;

typedef struct __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl;

interface __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBaseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl __x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl_FWD_DEFINED__



#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip __x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip_FWD_DEFINED__



#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction __x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker __x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker_FWD_DEFINED__







typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_COrientation __x_ABI_CMicrosoft_CUI_CXaml_CControls_COrientation;





#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup_FWD_DEFINED__




#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase __x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase_FWD_DEFINED__











typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshPullDirection __x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshPullDirection;

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs_FWD_DEFINED__



typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshVisualizerState __x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshVisualizerState;

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs_FWD_DEFINED__


#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__





typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipHeroContentPlacementMode __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipHeroContentPlacementMode;


typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipPlacementMode __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipPlacementMode;


typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTwoPaneViewMode __x_ABI_CMicrosoft_CUI_CXaml_CControls_CTwoPaneViewMode;

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged __x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty __x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__





#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface_FWD_DEFINED__






#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__



typedef enum __x_ABI_CMicrosoft_CUI_CXaml_CVisibility __x_ABI_CMicrosoft_CUI_CXaml_CVisibility;




#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;





typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CButtonInteractionInvokeMode __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CButtonInteractionInvokeMode;


typedef enum __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CScrollerViewChangeResult __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CScrollerViewChangeResult;





































































/*
 *
 * Struct Microsoft.UI.Private.Controls.ButtonInteractionInvokeMode
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CButtonInteractionInvokeMode
{
    ButtonInteractionInvokeMode_Release = 0,
    ButtonInteractionInvokeMode_Press = 1,
    ButtonInteractionInvokeMode_Hover = 2,
};


/*
 *
 * Struct Microsoft.UI.Private.Controls.ScrollerViewChangeResult
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CScrollerViewChangeResult
{
    ScrollerViewChangeResult_Completed = 0,
    ScrollerViewChangeResult_Interrupted = 1,
    ScrollerViewChangeResult_Ignored = 2,
};


/*
 *
 * Delegate Microsoft.UI.Private.Controls.ConfigurationChangedEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__
/* [object, version, uuid("B9632DA1-94F2-5C01-A3C5-F77E39F9932E")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * sender
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandlerVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Microsoft.UI.Private.Controls.PostArrangeEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__
/* [object, version, uuid("0543EA9A-E419-5530-BDE0-C073D515E8B4")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * sender
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandlerVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Microsoft.UI.Private.Controls.ViewportChangedEventHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__
/* [object, version, uuid("319622FC-620E-5E3D-B768-2743CF278E7E")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * sender,
        /* [in] */boolean isFinal
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandlerVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_Invoke(This,sender,isFinal) \
    ( (This)->lpVtbl->Invoke(This,sender,isFinal) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IAdapterAnimationHandler
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IAdapterAnimationHandler[] = L"Microsoft.UI.Private.Controls.IAdapterAnimationHandler";
/* [object, version, uuid("25D4A4BC-B4DB-54EF-A6E0-5E2058E8276A")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InteractionTrackerAnimation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * refreshVisualizer,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * infoProvider,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CIInteractionTracker * interactionTracker
        );
    HRESULT ( STDMETHODCALLTYPE *RefreshRequestedAnimation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * refreshVisualizer,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * infoProvider,
        /* [in] */DOUBLE executionRatio
        );
    HRESULT ( STDMETHODCALLTYPE *RefreshCompletedAnimation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * refreshVisualizer,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * infoProvider
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandlerVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_InteractionTrackerAnimation(This,refreshVisualizer,infoProvider,interactionTracker) \
    ( (This)->lpVtbl->InteractionTrackerAnimation(This,refreshVisualizer,infoProvider,interactionTracker) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_RefreshRequestedAnimation(This,refreshVisualizer,infoProvider,executionRatio) \
    ( (This)->lpVtbl->RefreshRequestedAnimation(This,refreshVisualizer,infoProvider,executionRatio) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_RefreshCompletedAnimation(This,refreshVisualizer,infoProvider) \
    ( (This)->lpVtbl->RefreshCompletedAnimation(This,refreshVisualizer,infoProvider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteraction
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteraction[] = L"Microsoft.UI.Private.Controls.IButtonInteraction";
/* [object, version, uuid("E64AA68F-67EE-5541-A777-BE9BBF6FA70C"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvokeMode )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CButtonInteractionInvokeMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InvokeMode )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CButtonInteractionInvokeMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHovering )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPressing )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [retval, out] */boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CButtonInteraction_Microsoft__CUI__CPrivate__CControls__CButtonInteractionInvokedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_get_InvokeMode(This,value) \
    ( (This)->lpVtbl->get_InvokeMode(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_put_InvokeMode(This,value) \
    ( (This)->lpVtbl->put_InvokeMode(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_get_IsHovering(This,value) \
    ( (This)->lpVtbl->get_IsHovering(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_get_IsPressing(This,value) \
    ( (This)->lpVtbl->get_IsPressing(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_add_Invoked(This,handler,token) \
    ( (This)->lpVtbl->add_Invoked(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_remove_Invoked(This,token) \
    ( (This)->lpVtbl->remove_Invoked(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteractionFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteractionFactory[] = L"Microsoft.UI.Private.Controls.IButtonInteractionFactory";
/* [object, version, uuid("7E76E898-90B2-5C33-8E79-B1B72B066735"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteraction * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IButtonInteractionInvokedEventArgs[] = L"Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs";
/* [object, version, uuid("0F174283-EC4D-5340-8F45-9C73C9B20634"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_get_Target(This,value) \
    ( (This)->lpVtbl->get_Target(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIButtonInteractionInvokedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IDisplayRegionHelperTestApi[] = L"Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi";
/* [object, version, uuid("CB2C0727-F02A-5325-9A89-74AEC8546D85"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IDisplayRegionHelperTestApiStatics[] = L"Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApiStatics";
/* [object, version, uuid("8312FD4D-14ED-52D3-A7C7-C2AC3AFB8748"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimulateDisplayRegions )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SimulateDisplayRegions )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimulateMode )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CTwoPaneViewMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SimulateMode )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CTwoPaneViewMode value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_get_SimulateDisplayRegions(This,value) \
    ( (This)->lpVtbl->get_SimulateDisplayRegions(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_put_SimulateDisplayRegions(This,value) \
    ( (This)->lpVtbl->put_SimulateDisplayRegions(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_get_SimulateMode(This,value) \
    ( (This)->lpVtbl->get_SimulateMode(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_put_SimulateMode(This,value) \
    ( (This)->lpVtbl->put_SimulateMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIDisplayRegionHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooks[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooks";
/* [object, version, uuid("DDB77E64-E10E-51A8-9E72-A2CA438F0572"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooksLoggingMessageEventArgs[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs";
/* [object, version, uuid("794ECDDA-8439-5BC8-9F5D-361B6875C01E"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVerboseLevel )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_get_IsVerboseLevel(This,value) \
    ( (This)->lpVtbl->get_IsVerboseLevel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksLoggingMessageEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IMUXControlsTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IMUXControlsTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IMUXControlsTestHooksStatics";
/* [object, version, uuid("82F23C73-FF09-5B19-8A0D-79BC9515FA22"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetOutputDebugStringLevelForType )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
        /* [in] */HSTRING type,
        /* [in] */boolean isLoggingInfoLevel,
        /* [in] */boolean isLoggingVerboseLevel
        );
    HRESULT ( STDMETHODCALLTYPE *SetLoggingLevelForType )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
        /* [in] */HSTRING type,
        /* [in] */boolean isLoggingInfoLevel,
        /* [in] */boolean isLoggingVerboseLevel
        );
    HRESULT ( STDMETHODCALLTYPE *SetLoggingLevelForInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
        /* [in] */IInspectable * sender,
        /* [in] */boolean isLoggingInfoLevel,
        /* [in] */boolean isLoggingVerboseLevel
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LoggingMessage )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_IInspectable_Microsoft__CUI__CPrivate__CControls__CMUXControlsTestHooksLoggingMessageEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LoggingMessage )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_SetOutputDebugStringLevelForType(This,type,isLoggingInfoLevel,isLoggingVerboseLevel) \
    ( (This)->lpVtbl->SetOutputDebugStringLevelForType(This,type,isLoggingInfoLevel,isLoggingVerboseLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_SetLoggingLevelForType(This,type,isLoggingInfoLevel,isLoggingVerboseLevel) \
    ( (This)->lpVtbl->SetLoggingLevelForType(This,type,isLoggingInfoLevel,isLoggingVerboseLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_SetLoggingLevelForInstance(This,sender,isLoggingInfoLevel,isLoggingVerboseLevel) \
    ( (This)->lpVtbl->SetLoggingLevelForInstance(This,sender,isLoggingInfoLevel,isLoggingVerboseLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_add_LoggingMessage(This,handler,token) \
    ( (This)->lpVtbl->add_LoggingMessage(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_remove_LoggingMessage(This,token) \
    ( (This)->lpVtbl->remove_LoggingMessage(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIMUXControlsTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IPullToRefreshHelperTestApi[] = L"Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi";
/* [object, version, uuid("6D3133D3-C2D5-5206-9E49-5A99AB4E4AB3"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IPullToRefreshHelperTestApiStatics[] = L"Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApiStatics";
/* [object, version, uuid("6ACB6568-1035-53B2-955E-4CD69A8EB172"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRefreshInteractionRatioChangedEventArgsInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
        /* [in] */DOUBLE value,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshInteractionRatioChangedEventArgs * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRefreshStateChangedEventArgsInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshVisualizerState oldValue,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshVisualizerState newValue,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshStateChangedEventArgs * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRefreshRequestedEventArgsInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CIDeferral * handler,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRefreshRequestedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_CreateRefreshInteractionRatioChangedEventArgsInstance(This,value,result) \
    ( (This)->lpVtbl->CreateRefreshInteractionRatioChangedEventArgsInstance(This,value,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_CreateRefreshStateChangedEventArgsInstance(This,oldValue,newValue,result) \
    ( (This)->lpVtbl->CreateRefreshStateChangedEventArgsInstance(This,oldValue,newValue,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_CreateRefreshRequestedEventArgsInstance(This,handler,result) \
    ( (This)->lpVtbl->CreateRefreshRequestedEventArgsInstance(This,handler,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPullToRefreshHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRadioButtonsTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRadioButtonsTestHooks[] = L"Microsoft.UI.Private.Controls.IRadioButtonsTestHooks";
/* [object, version, uuid("FC4BEA9D-62DF-5AF5-B676-462ADB210D3F"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRadioButtonsTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRadioButtonsTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IRadioButtonsTestHooksStatics";
/* [object, version, uuid("4DA17A75-F719-5333-AB4D-EFC919D4AA71"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetTestHooksEnabled )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons * radioButtons,
        /* [in] */boolean enabled
        );
    HRESULT ( STDMETHODCALLTYPE *GetRows )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons * radioButtons,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetColumns )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons * radioButtons,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLargerColumns )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIRadioButtons * radioButtons,
        /* [retval, out] */INT32 * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LayoutChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CRadioButtons_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LayoutChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_SetTestHooksEnabled(This,radioButtons,enabled) \
    ( (This)->lpVtbl->SetTestHooksEnabled(This,radioButtons,enabled) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetRows(This,radioButtons,result) \
    ( (This)->lpVtbl->GetRows(This,radioButtons,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetColumns(This,radioButtons,result) \
    ( (This)->lpVtbl->GetColumns(This,radioButtons,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_GetLargerColumns(This,radioButtons,result) \
    ( (This)->lpVtbl->GetLargerColumns(This,radioButtons,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_add_LayoutChanged(This,handler,token) \
    ( (This)->lpVtbl->add_LayoutChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_remove_LayoutChanged(This,token) \
    ( (This)->lpVtbl->remove_LayoutChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRadioButtonsTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshContainerPrivate
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshContainerPrivate[] = L"Microsoft.UI.Private.Controls.IRefreshContainerPrivate";
/* [object, version, uuid("20C0EE3F-06B5-5152-B015-0664A4ADA213")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RefreshInfoProviderAdapter )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RefreshInfoProviderAdapter )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivateVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_get_RefreshInfoProviderAdapter(This,value) \
    ( (This)->lpVtbl->get_RefreshInfoProviderAdapter(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_put_RefreshInfoProviderAdapter(This,value) \
    ( (This)->lpVtbl->put_RefreshInfoProviderAdapter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshContainerPrivate_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshInfoProvider
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshInfoProvider[] = L"Microsoft.UI.Private.Controls.IRefreshInfoProvider";
/* [object, version, uuid("623906A9-0ACF-54EF-88E1-9A36DA043648")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnRefreshStarted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *OnRefreshCompleted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInteractingForRefresh )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositionProperties )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionRatioCompositionProperty )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExecutionRatio )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsInteractingForRefreshChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsInteractingForRefreshChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InteractionRatioChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_Microsoft__CUI__CXaml__CControls__CRefreshInteractionRatioChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InteractionRatioChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RefreshStarted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RefreshStarted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RefreshCompleted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CPrivate__CControls__CIRefreshInfoProvider_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RefreshCompleted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_OnRefreshStarted(This) \
    ( (This)->lpVtbl->OnRefreshStarted(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_OnRefreshCompleted(This) \
    ( (This)->lpVtbl->OnRefreshCompleted(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_get_IsInteractingForRefresh(This,value) \
    ( (This)->lpVtbl->get_IsInteractingForRefresh(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_get_CompositionProperties(This,value) \
    ( (This)->lpVtbl->get_CompositionProperties(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_get_InteractionRatioCompositionProperty(This,value) \
    ( (This)->lpVtbl->get_InteractionRatioCompositionProperty(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_get_ExecutionRatio(This,value) \
    ( (This)->lpVtbl->get_ExecutionRatio(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_add_IsInteractingForRefreshChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsInteractingForRefreshChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_remove_IsInteractingForRefreshChanged(This,token) \
    ( (This)->lpVtbl->remove_IsInteractingForRefreshChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_add_InteractionRatioChanged(This,handler,token) \
    ( (This)->lpVtbl->add_InteractionRatioChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_remove_InteractionRatioChanged(This,token) \
    ( (This)->lpVtbl->remove_InteractionRatioChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_add_RefreshStarted(This,handler,token) \
    ( (This)->lpVtbl->add_RefreshStarted(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_remove_RefreshStarted(This,token) \
    ( (This)->lpVtbl->remove_RefreshStarted(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_add_RefreshCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_RefreshCompleted(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_remove_RefreshCompleted(This,token) \
    ( (This)->lpVtbl->remove_RefreshCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter";
/* [object, version, uuid("D1040D59-1490-587A-B116-6F45C873748A")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AdaptFromTree )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * root,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize visualizerSize,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAnimations )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * refreshVisualizerAnimatableContainer
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapterVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_AdaptFromTree(This,root,visualizerSize,result) \
    ( (This)->lpVtbl->AdaptFromTree(This,root,visualizerSize,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_SetAnimations(This,refreshVisualizerAnimatableContainer) \
    ( (This)->lpVtbl->SetAnimations(This,refreshVisualizerAnimatableContainer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProviderAdapter_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRefreshVisualizerPrivate
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRefreshVisualizerPrivate[] = L"Microsoft.UI.Private.Controls.IRefreshVisualizerPrivate";
/* [object, version, uuid("ED48295A-B54F-571A-AC5F-9CE4C7848A49")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InfoProvider )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InfoProvider )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetInternalPullDirection )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshPullDirection value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivateVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_get_InfoProvider(This,value) \
    ( (This)->lpVtbl->get_InfoProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_put_InfoProvider(This,value) \
    ( (This)->lpVtbl->put_InfoProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_SetInternalPullDirection(This,value) \
    ( (This)->lpVtbl->SetInternalPullDirection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshVisualizerPrivate_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterScrollingSurface
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterScrollingSurface[] = L"Microsoft.UI.Private.Controls.IRepeaterScrollingSurface";
/* [object, version, uuid("4D127FAA-F746-58D7-AB0E-703E1639B19E")] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHorizontallyScrollable )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVerticallyScrollable )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnchorElement )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConfigurationChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIConfigurationChangedEventHandler  * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConfigurationChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PostArrange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIPostArrangeEventHandler  * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PostArrange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ViewportChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIViewportChangedEventHandler  * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ViewportChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterAnchorCandidate )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterAnchorCandidate )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * element
        );
    HRESULT ( STDMETHODCALLTYPE *GetRelativeViewport )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * child,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurfaceVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_get_IsHorizontallyScrollable(This,value) \
    ( (This)->lpVtbl->get_IsHorizontallyScrollable(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_get_IsVerticallyScrollable(This,value) \
    ( (This)->lpVtbl->get_IsVerticallyScrollable(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_get_AnchorElement(This,value) \
    ( (This)->lpVtbl->get_AnchorElement(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_add_ConfigurationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ConfigurationChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_remove_ConfigurationChanged(This,token) \
    ( (This)->lpVtbl->remove_ConfigurationChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_add_PostArrange(This,handler,token) \
    ( (This)->lpVtbl->add_PostArrange(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_remove_PostArrange(This,token) \
    ( (This)->lpVtbl->remove_PostArrange(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_add_ViewportChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ViewportChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_remove_ViewportChanged(This,token) \
    ( (This)->lpVtbl->remove_ViewportChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_RegisterAnchorCandidate(This,element) \
    ( (This)->lpVtbl->RegisterAnchorCandidate(This,element) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_UnregisterAnchorCandidate(This,element) \
    ( (This)->lpVtbl->UnregisterAnchorCandidate(This,element) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_GetRelativeViewport(This,child,result) \
    ( (This)->lpVtbl->GetRelativeViewport(This,child,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterScrollingSurface_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterTestHooks[] = L"Microsoft.UI.Private.Controls.IRepeaterTestHooks";
/* [object, version, uuid("FE285751-9A67-5FEB-84E6-D397EDAFB6D3"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IRepeaterTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IRepeaterTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IRepeaterTestHooksStatics";
/* [object, version, uuid("92132A0D-93D6-59AE-AE84-0F8FBD6D18E2"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BuildTreeCompleted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BuildTreeCompleted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementFactoryElementIndex )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [in] */IInspectable * getArgs,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRepeaterElementFactoryGetArgs )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [retval, out] */IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRepeaterElementFactoryRecycleArgs )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [retval, out] */IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLayoutId )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [in] */IInspectable * layout,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLayoutId )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics * This,
        /* [in] */IInspectable * layout,
        /* [in] */HSTRING id
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_add_BuildTreeCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_BuildTreeCompleted(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_remove_BuildTreeCompleted(This,token) \
    ( (This)->lpVtbl->remove_BuildTreeCompleted(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_GetElementFactoryElementIndex(This,getArgs,result) \
    ( (This)->lpVtbl->GetElementFactoryElementIndex(This,getArgs,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_CreateRepeaterElementFactoryGetArgs(This,result) \
    ( (This)->lpVtbl->CreateRepeaterElementFactoryGetArgs(This,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_CreateRepeaterElementFactoryRecycleArgs(This,result) \
    ( (This)->lpVtbl->CreateRepeaterElementFactoryRecycleArgs(This,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_GetLayoutId(This,layout,result) \
    ( (This)->lpVtbl->GetLayoutId(This,layout,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_SetLayoutId(This,layout,id) \
    ( (This)->lpVtbl->SetLayoutId(This,layout,id) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRepeaterTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollViewerIRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter";
/* [object, version, uuid("FD076A2C-0785-5FE6-B8CD-E3DDC86835BA"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Adapt )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer * adaptee,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize visualizerSize,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIRefreshInfoProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_Adapt(This,adaptee,visualizerSize,result) \
    ( (This)->lpVtbl->Adapt(This,adaptee,visualizerSize,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapterFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollViewerIRefreshInfoProviderAdapterFactory[] = L"Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapterFactory";
/* [object, version, uuid("C05066B9-E896-5AC0-AFF0-614B79EE94CD"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CRefreshPullDirection refreshPullDirection,
        /* [in] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIAdapterAnimationHandler * animationHandler,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapter * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_CreateInstance(This,refreshPullDirection,animationHandler,value) \
    ( (This)->lpVtbl->CreateInstance(This,refreshPullDirection,animationHandler,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollViewerIRefreshInfoProviderAdapterFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooks[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooks";
/* [object, version, uuid("0E922435-9890-507D-939B-1619FB09EDFA"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksAnchorEvaluatedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs";
/* [object, version, uuid("120BB09C-ECBC-5602-B01F-7A20ACE87163"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewportAnchorPointHorizontalOffset )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewportAnchorPointVerticalOffset )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnchorElement )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIUIElement * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_get_ViewportAnchorPointHorizontalOffset(This,value) \
    ( (This)->lpVtbl->get_ViewportAnchorPointHorizontalOffset(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_get_ViewportAnchorPointVerticalOffset(This,value) \
    ( (This)->lpVtbl->get_ViewportAnchorPointVerticalOffset(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_get_AnchorElement(This,value) \
    ( (This)->lpVtbl->get_AnchorElement(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksAnchorEvaluatedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksExpressionAnimationStatusChangedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs";
/* [object, version, uuid("7BBADC93-8964-5E29-9AC4-40B1FFB14316"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsExpressionAnimationStarted )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PropertyName )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_get_IsExpressionAnimationStarted(This,value) \
    ( (This)->lpVtbl->get_IsExpressionAnimationStarted(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_get_PropertyName(This,value) \
    ( (This)->lpVtbl->get_PropertyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksExpressionAnimationStatusChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksInteractionSourcesChangedEventArgs[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs";
/* [object, version, uuid("F58ED2C6-29C0-52F2-937C-FA8C96994EF1"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionSources )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_get_InteractionSources(This,value) \
    ( (This)->lpVtbl->get_InteractionSources(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksInteractionSourcesChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.IScrollerTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_IScrollerTestHooksStatics[] = L"Microsoft.UI.Private.Controls.IScrollerTestHooksStatics";
/* [object, version, uuid("9CFE2DD0-23A1-5391-911C-61C76BD3ABD9"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreAnchorNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreAnchorNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreInteractionSourcesNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreInteractionSourcesNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreExpressionAnimationStatusNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreExpressionAnimationStatusNotificationsRaised )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAnimationsEnabledOverride )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [retval, out] */__FIReference_1_boolean * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAnimationsEnabledOverride )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FIReference_1_boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOffsetsChangeVelocityParameters )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [out] */INT32 * millisecondsPerUnit,
        /* [out] */INT32 * minMilliseconds,
        /* [out] */INT32 * maxMilliseconds
        );
    HRESULT ( STDMETHODCALLTYPE *SetOffsetsChangeVelocityParameters )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */INT32 millisecondsPerUnit,
        /* [in] */INT32 minMilliseconds,
        /* [in] */INT32 maxMilliseconds
        );
    HRESULT ( STDMETHODCALLTYPE *GetZoomFactorChangeVelocityParameters )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [out] */INT32 * millisecondsPerUnit,
        /* [out] */INT32 * minMilliseconds,
        /* [out] */INT32 * maxMilliseconds
        );
    HRESULT ( STDMETHODCALLTYPE *SetZoomFactorChangeVelocityParameters )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */INT32 millisecondsPerUnit,
        /* [in] */INT32 minMilliseconds,
        /* [in] */INT32 maxMilliseconds
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentLayoutOffsetX )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [out] */FLOAT * contentLayoutOffsetX
        );
    HRESULT ( STDMETHODCALLTYPE *SetContentLayoutOffsetX )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */FLOAT contentLayoutOffsetX
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentLayoutOffsetY )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [out] */FLOAT * contentLayoutOffsetY
        );
    HRESULT ( STDMETHODCALLTYPE *SetContentLayoutOffsetY )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */FLOAT contentLayoutOffsetY
        );
    HRESULT ( STDMETHODCALLTYPE *GetArrangeRenderSizesDelta )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMinPosition )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMaxPosition )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetScrollCompletedResult )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollCompletedEventArgs * scrollCompletedEventArgs,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CScrollerViewChangeResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetZoomCompletedResult )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CIZoomCompletedEventArgs * zoomCompletedEventArgs,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CScrollerViewChangeResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConsolidatedHorizontalScrollSnapPoints )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConsolidatedVerticalScrollSnapPoints )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CScrollSnapPointBase * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConsolidatedZoomSnapPoints )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CControls__CPrimitives__CZoomSnapPointBase * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHorizontalSnapPointActualApplicableZone )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * scrollSnapPoint,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetVerticalSnapPointActualApplicableZone )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * scrollSnapPoint,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetZoomSnapPointActualApplicableZone )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * zoomSnapPoint,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHorizontalSnapPointCombinationCount )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * scrollSnapPoint,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetVerticalSnapPointCombinationCount )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointBase * scrollSnapPoint,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetZoomSnapPointCombinationCount )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIScroller * scroller,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIZoomSnapPointBase * zoomSnapPoint,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSnapPointVisualizationColor )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase * snapPoint,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSnapPointVisualizationColor )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CISnapPointBase * snapPoint,
        /* [in] */__x_ABI_CWindows_CUI_CColor color
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AnchorEvaluated )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksAnchorEvaluatedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AnchorEvaluated )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InteractionSourcesChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksInteractionSourcesChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InteractionSourcesChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ExpressionAnimationStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_Microsoft__CUI__CPrivate__CControls__CScrollerTestHooksExpressionAnimationStatusChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ExpressionAnimationStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContentLayoutOffsetXChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContentLayoutOffsetXChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContentLayoutOffsetYChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CPrimitives__CScroller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContentLayoutOffsetYChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_get_AreAnchorNotificationsRaised(This,value) \
    ( (This)->lpVtbl->get_AreAnchorNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_put_AreAnchorNotificationsRaised(This,value) \
    ( (This)->lpVtbl->put_AreAnchorNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_get_AreInteractionSourcesNotificationsRaised(This,value) \
    ( (This)->lpVtbl->get_AreInteractionSourcesNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_put_AreInteractionSourcesNotificationsRaised(This,value) \
    ( (This)->lpVtbl->put_AreInteractionSourcesNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_get_AreExpressionAnimationStatusNotificationsRaised(This,value) \
    ( (This)->lpVtbl->get_AreExpressionAnimationStatusNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_put_AreExpressionAnimationStatusNotificationsRaised(This,value) \
    ( (This)->lpVtbl->put_AreExpressionAnimationStatusNotificationsRaised(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_get_IsAnimationsEnabledOverride(This,value) \
    ( (This)->lpVtbl->get_IsAnimationsEnabledOverride(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_put_IsAnimationsEnabledOverride(This,value) \
    ( (This)->lpVtbl->put_IsAnimationsEnabledOverride(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetOffsetsChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) \
    ( (This)->lpVtbl->GetOffsetsChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_SetOffsetsChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) \
    ( (This)->lpVtbl->SetOffsetsChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetZoomFactorChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) \
    ( (This)->lpVtbl->GetZoomFactorChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_SetZoomFactorChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) \
    ( (This)->lpVtbl->SetZoomFactorChangeVelocityParameters(This,millisecondsPerUnit,minMilliseconds,maxMilliseconds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetContentLayoutOffsetX(This,scroller,contentLayoutOffsetX) \
    ( (This)->lpVtbl->GetContentLayoutOffsetX(This,scroller,contentLayoutOffsetX) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_SetContentLayoutOffsetX(This,scroller,contentLayoutOffsetX) \
    ( (This)->lpVtbl->SetContentLayoutOffsetX(This,scroller,contentLayoutOffsetX) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetContentLayoutOffsetY(This,scroller,contentLayoutOffsetY) \
    ( (This)->lpVtbl->GetContentLayoutOffsetY(This,scroller,contentLayoutOffsetY) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_SetContentLayoutOffsetY(This,scroller,contentLayoutOffsetY) \
    ( (This)->lpVtbl->SetContentLayoutOffsetY(This,scroller,contentLayoutOffsetY) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetArrangeRenderSizesDelta(This,scroller,result) \
    ( (This)->lpVtbl->GetArrangeRenderSizesDelta(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetMinPosition(This,scroller,result) \
    ( (This)->lpVtbl->GetMinPosition(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetMaxPosition(This,scroller,result) \
    ( (This)->lpVtbl->GetMaxPosition(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetScrollCompletedResult(This,scrollCompletedEventArgs,result) \
    ( (This)->lpVtbl->GetScrollCompletedResult(This,scrollCompletedEventArgs,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetZoomCompletedResult(This,zoomCompletedEventArgs,result) \
    ( (This)->lpVtbl->GetZoomCompletedResult(This,zoomCompletedEventArgs,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetConsolidatedHorizontalScrollSnapPoints(This,scroller,result) \
    ( (This)->lpVtbl->GetConsolidatedHorizontalScrollSnapPoints(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetConsolidatedVerticalScrollSnapPoints(This,scroller,result) \
    ( (This)->lpVtbl->GetConsolidatedVerticalScrollSnapPoints(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetConsolidatedZoomSnapPoints(This,scroller,result) \
    ( (This)->lpVtbl->GetConsolidatedZoomSnapPoints(This,scroller,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetHorizontalSnapPointActualApplicableZone(This,scroller,scrollSnapPoint,result) \
    ( (This)->lpVtbl->GetHorizontalSnapPointActualApplicableZone(This,scroller,scrollSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetVerticalSnapPointActualApplicableZone(This,scroller,scrollSnapPoint,result) \
    ( (This)->lpVtbl->GetVerticalSnapPointActualApplicableZone(This,scroller,scrollSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetZoomSnapPointActualApplicableZone(This,scroller,zoomSnapPoint,result) \
    ( (This)->lpVtbl->GetZoomSnapPointActualApplicableZone(This,scroller,zoomSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetHorizontalSnapPointCombinationCount(This,scroller,scrollSnapPoint,result) \
    ( (This)->lpVtbl->GetHorizontalSnapPointCombinationCount(This,scroller,scrollSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetVerticalSnapPointCombinationCount(This,scroller,scrollSnapPoint,result) \
    ( (This)->lpVtbl->GetVerticalSnapPointCombinationCount(This,scroller,scrollSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetZoomSnapPointCombinationCount(This,scroller,zoomSnapPoint,result) \
    ( (This)->lpVtbl->GetZoomSnapPointCombinationCount(This,scroller,zoomSnapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_GetSnapPointVisualizationColor(This,snapPoint,result) \
    ( (This)->lpVtbl->GetSnapPointVisualizationColor(This,snapPoint,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_SetSnapPointVisualizationColor(This,snapPoint,color) \
    ( (This)->lpVtbl->SetSnapPointVisualizationColor(This,snapPoint,color) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_add_AnchorEvaluated(This,handler,token) \
    ( (This)->lpVtbl->add_AnchorEvaluated(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_remove_AnchorEvaluated(This,token) \
    ( (This)->lpVtbl->remove_AnchorEvaluated(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_add_InteractionSourcesChanged(This,handler,token) \
    ( (This)->lpVtbl->add_InteractionSourcesChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_remove_InteractionSourcesChanged(This,token) \
    ( (This)->lpVtbl->remove_InteractionSourcesChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_add_ExpressionAnimationStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ExpressionAnimationStatusChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_remove_ExpressionAnimationStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ExpressionAnimationStatusChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_add_ContentLayoutOffsetXChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ContentLayoutOffsetXChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_remove_ContentLayoutOffsetXChanged(This,token) \
    ( (This)->lpVtbl->remove_ContentLayoutOffsetXChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_add_ContentLayoutOffsetYChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ContentLayoutOffsetYChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_remove_ContentLayoutOffsetYChanged(This,token) \
    ( (This)->lpVtbl->remove_ContentLayoutOffsetYChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CIScrollerTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISliderInteraction
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SliderInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISliderInteraction[] = L"Microsoft.UI.Private.Controls.ISliderInteraction";
/* [object, version, uuid("F3D5E90E-2206-56CA-801C-5C0686A20B40"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_COrientation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_COrientation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Minimum )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Minimum )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maximum )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Maximum )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmallChange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SmallChange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LargeChange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LargeChange )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_Minimum(This,value) \
    ( (This)->lpVtbl->get_Minimum(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_put_Minimum(This,value) \
    ( (This)->lpVtbl->put_Minimum(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_Maximum(This,value) \
    ( (This)->lpVtbl->get_Maximum(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_put_Maximum(This,value) \
    ( (This)->lpVtbl->put_Maximum(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_SmallChange(This,value) \
    ( (This)->lpVtbl->get_SmallChange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_put_SmallChange(This,value) \
    ( (This)->lpVtbl->put_SmallChange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_get_LargeChange(This,value) \
    ( (This)->lpVtbl->get_LargeChange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_put_LargeChange(This,value) \
    ( (This)->lpVtbl->put_LargeChange(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISliderInteractionFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SliderInteraction
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISliderInteractionFactory[] = L"Microsoft.UI.Private.Controls.ISliderInteractionFactory";
/* [object, version, uuid("95408B5D-E733-58AF-B911-AC451C36B9F5"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteraction * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISliderInteractionFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISpectrumBrush
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SpectrumBrush
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISpectrumBrush[] = L"Microsoft.UI.Private.Controls.ISpectrumBrush";
/* [object, version, uuid("20FA7976-4327-5840-A421-7303A379D649"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSurface )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MinSurface )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSurface )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxSurface )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CMedia_CILoadedImageSurface * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSurfaceOpacity )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxSurfaceOpacity )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_get_MinSurface(This,value) \
    ( (This)->lpVtbl->get_MinSurface(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_put_MinSurface(This,value) \
    ( (This)->lpVtbl->put_MinSurface(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_get_MaxSurface(This,value) \
    ( (This)->lpVtbl->get_MaxSurface(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_put_MaxSurface(This,value) \
    ( (This)->lpVtbl->put_MaxSurface(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_get_MaxSurfaceOpacity(This,value) \
    ( (This)->lpVtbl->get_MaxSurfaceOpacity(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_put_MaxSurfaceOpacity(This,value) \
    ( (This)->lpVtbl->put_MaxSurfaceOpacity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrush_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISpectrumBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SpectrumBrush
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISpectrumBrushStatics[] = L"Microsoft.UI.Private.Controls.ISpectrumBrushStatics";
/* [object, version, uuid("E4A917B3-C4ED-58FF-9DE7-1E78AFE4F9A7"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSurfaceProperty )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSurfaceProperty )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSurfaceOpacityProperty )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_get_MinSurfaceProperty(This,value) \
    ( (This)->lpVtbl->get_MinSurfaceProperty(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_get_MaxSurfaceProperty(This,value) \
    ( (This)->lpVtbl->get_MaxSurfaceProperty(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_get_MaxSurfaceOpacityProperty(This,value) \
    ( (This)->lpVtbl->get_MaxSurfaceOpacityProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISpectrumBrushStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISplitButtonTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISplitButtonTestApi[] = L"Microsoft.UI.Private.Controls.ISplitButtonTestApi";
/* [object, version, uuid("5260BE7A-2A5B-58E7-A092-D9B065BD07AB"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISplitButtonTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISplitButtonTestApiStatics[] = L"Microsoft.UI.Private.Controls.ISplitButtonTestApiStatics";
/* [object, version, uuid("AF7AF455-4A71-5533-9109-8EDBD6C080BC"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimulateTouch )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SimulateTouch )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_get_SimulateTouch(This,value) \
    ( (This)->lpVtbl->get_SimulateTouch(This,value) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_put_SimulateTouch(This,value) \
    ( (This)->lpVtbl->put_SimulateTouch(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISplitButtonTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISwipeTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISwipeTestHooks[] = L"Microsoft.UI.Private.Controls.ISwipeTestHooks";
/* [object, version, uuid("F07F8599-61BF-5EF2-A92B-639E35830352"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ISwipeTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ISwipeTestHooksStatics[] = L"Microsoft.UI.Private.Controls.ISwipeTestHooksStatics";
/* [object, version, uuid("BA98E941-0FCE-537D-A02E-843CB8ECA13A"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLastInteractedWithSwipeControl )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsOpen )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl * swipeControl,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsIdle )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CISwipeControl * swipeControl,
        /* [retval, out] */boolean * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LastInteractedWithSwipeControlChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LastInteractedWithSwipeControlChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OpenedStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OpenedStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IdleStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CSwipeControl_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IdleStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetLastInteractedWithSwipeControl(This,result) \
    ( (This)->lpVtbl->GetLastInteractedWithSwipeControl(This,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetIsOpen(This,swipeControl,result) \
    ( (This)->lpVtbl->GetIsOpen(This,swipeControl,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_GetIsIdle(This,swipeControl,result) \
    ( (This)->lpVtbl->GetIsIdle(This,swipeControl,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_add_LastInteractedWithSwipeControlChanged(This,handler,token) \
    ( (This)->lpVtbl->add_LastInteractedWithSwipeControlChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_remove_LastInteractedWithSwipeControlChanged(This,token) \
    ( (This)->lpVtbl->remove_LastInteractedWithSwipeControlChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_add_OpenedStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OpenedStatusChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_remove_OpenedStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_OpenedStatusChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_add_IdleStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IdleStatusChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_remove_IdleStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_IdleStatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CISwipeTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ITeachingTipTestHooks
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ITeachingTipTestHooks[] = L"Microsoft.UI.Private.Controls.ITeachingTipTestHooks";
/* [object, version, uuid("6A393ABF-3B7F-5ECB-BC21-77D61EBB3F67"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooks_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Controls.ITeachingTipTestHooksStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Controls_ITeachingTipTestHooksStatics[] = L"Microsoft.UI.Private.Controls.ITeachingTipTestHooksStatics";
/* [object, version, uuid("1168461B-E53C-53C3-87D8-F244BDF4543E"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetExpandEasingFunction )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    HRESULT ( STDMETHODCALLTYPE *SetContractEasingFunction )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    HRESULT ( STDMETHODCALLTYPE *SetTipShouldHaveShadow )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */boolean tipShouldHaveShadow
        );
    HRESULT ( STDMETHODCALLTYPE *SetContentElevation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */FLOAT elevation
        );
    HRESULT ( STDMETHODCALLTYPE *SetTailElevation )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */FLOAT elevation
        );
    HRESULT ( STDMETHODCALLTYPE *SetUseTestScreenBounds )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */boolean useTestScreenBounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetTestScreenBounds )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect testScreenBounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetUseTestWindowBounds )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */boolean useTestWindowBounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetTestWindowBounds )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect testWindowBounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetTipFollowsTarget )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */boolean tipFollowsTarget
        );
    HRESULT ( STDMETHODCALLTYPE *SetReturnTopForOutOfWindowPlacement )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */boolean returnTopForOutOfWindowPlacement
        );
    HRESULT ( STDMETHODCALLTYPE *SetExpandAnimationDuration )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan animationDurationMultiplier
        );
    HRESULT ( STDMETHODCALLTYPE *SetContractAnimationDuration )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan animationDurationMultiplier
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsIdle )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEffectivePlacement )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipPlacementMode * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEffectiveHeroContentPlacement )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CTeachingTipHeroContentPlacementMode * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetVerticalOffset )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */DOUBLE * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHorizontalOffset )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */DOUBLE * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTitleVisibility )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CVisibility * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSubtitleVisibility )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CVisibility * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPopup )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CITeachingTip * teachingTip,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CXaml_CControls_CPrimitives_CIPopup * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OpenedStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OpenedStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IdleStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IdleStatusChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OffsetChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OffsetChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EffectivePlacementChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EffectivePlacementChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EffectiveHeroContentPlacementChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EffectiveHeroContentPlacementChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TitleVisibilityChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TitleVisibilityChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SubtitleVisibilityChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CTeachingTip_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SubtitleVisibilityChanged )(
        __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetExpandEasingFunction(This,teachingTip,easingFunction) \
    ( (This)->lpVtbl->SetExpandEasingFunction(This,teachingTip,easingFunction) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetContractEasingFunction(This,teachingTip,easingFunction) \
    ( (This)->lpVtbl->SetContractEasingFunction(This,teachingTip,easingFunction) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetTipShouldHaveShadow(This,teachingTip,tipShouldHaveShadow) \
    ( (This)->lpVtbl->SetTipShouldHaveShadow(This,teachingTip,tipShouldHaveShadow) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetContentElevation(This,teachingTip,elevation) \
    ( (This)->lpVtbl->SetContentElevation(This,teachingTip,elevation) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetTailElevation(This,teachingTip,elevation) \
    ( (This)->lpVtbl->SetTailElevation(This,teachingTip,elevation) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetUseTestScreenBounds(This,teachingTip,useTestScreenBounds) \
    ( (This)->lpVtbl->SetUseTestScreenBounds(This,teachingTip,useTestScreenBounds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetTestScreenBounds(This,teachingTip,testScreenBounds) \
    ( (This)->lpVtbl->SetTestScreenBounds(This,teachingTip,testScreenBounds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetUseTestWindowBounds(This,teachingTip,useTestWindowBounds) \
    ( (This)->lpVtbl->SetUseTestWindowBounds(This,teachingTip,useTestWindowBounds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetTestWindowBounds(This,teachingTip,testWindowBounds) \
    ( (This)->lpVtbl->SetTestWindowBounds(This,teachingTip,testWindowBounds) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetTipFollowsTarget(This,teachingTip,tipFollowsTarget) \
    ( (This)->lpVtbl->SetTipFollowsTarget(This,teachingTip,tipFollowsTarget) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetReturnTopForOutOfWindowPlacement(This,teachingTip,returnTopForOutOfWindowPlacement) \
    ( (This)->lpVtbl->SetReturnTopForOutOfWindowPlacement(This,teachingTip,returnTopForOutOfWindowPlacement) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetExpandAnimationDuration(This,teachingTip,animationDurationMultiplier) \
    ( (This)->lpVtbl->SetExpandAnimationDuration(This,teachingTip,animationDurationMultiplier) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_SetContractAnimationDuration(This,teachingTip,animationDurationMultiplier) \
    ( (This)->lpVtbl->SetContractAnimationDuration(This,teachingTip,animationDurationMultiplier) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetIsIdle(This,teachingTip,result) \
    ( (This)->lpVtbl->GetIsIdle(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetEffectivePlacement(This,teachingTip,result) \
    ( (This)->lpVtbl->GetEffectivePlacement(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetEffectiveHeroContentPlacement(This,teachingTip,result) \
    ( (This)->lpVtbl->GetEffectiveHeroContentPlacement(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetVerticalOffset(This,teachingTip,result) \
    ( (This)->lpVtbl->GetVerticalOffset(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetHorizontalOffset(This,teachingTip,result) \
    ( (This)->lpVtbl->GetHorizontalOffset(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetTitleVisibility(This,teachingTip,result) \
    ( (This)->lpVtbl->GetTitleVisibility(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetSubtitleVisibility(This,teachingTip,result) \
    ( (This)->lpVtbl->GetSubtitleVisibility(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_GetPopup(This,teachingTip,result) \
    ( (This)->lpVtbl->GetPopup(This,teachingTip,result) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_OpenedStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OpenedStatusChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_OpenedStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_OpenedStatusChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_IdleStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IdleStatusChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_IdleStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_IdleStatusChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_OffsetChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OffsetChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_OffsetChanged(This,token) \
    ( (This)->lpVtbl->remove_OffsetChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_EffectivePlacementChanged(This,handler,token) \
    ( (This)->lpVtbl->add_EffectivePlacementChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_EffectivePlacementChanged(This,token) \
    ( (This)->lpVtbl->remove_EffectivePlacementChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_EffectiveHeroContentPlacementChanged(This,handler,token) \
    ( (This)->lpVtbl->add_EffectiveHeroContentPlacementChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_EffectiveHeroContentPlacementChanged(This,token) \
    ( (This)->lpVtbl->remove_EffectiveHeroContentPlacementChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_TitleVisibilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_TitleVisibilityChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_TitleVisibilityChanged(This,token) \
    ( (This)->lpVtbl->remove_TitleVisibilityChanged(This,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_add_SubtitleVisibilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_SubtitleVisibilityChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_remove_SubtitleVisibilityChanged(This,token) \
    ( (This)->lpVtbl->remove_SubtitleVisibilityChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CPrivate_CControls_CITeachingTipTestHooksStatics_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Private.Controls.ButtonInteraction
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IButtonInteraction ** Default Interface **
 *    Microsoft.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteraction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ButtonInteraction[] = L"Microsoft.UI.Private.Controls.ButtonInteraction";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IButtonInteractionInvokedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ButtonInteractionInvokedEventArgs[] = L"Microsoft.UI.Private.Controls.ButtonInteractionInvokedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IDisplayRegionHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_DisplayRegionHelperTestApi[] = L"Microsoft.UI.Private.Controls.DisplayRegionHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.MUXControlsTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IMUXControlsTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_MUXControlsTestHooks[] = L"Microsoft.UI.Private.Controls.MUXControlsTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IMUXControlsTestHooksLoggingMessageEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_MUXControlsTestHooksLoggingMessageEventArgs[] = L"Microsoft.UI.Private.Controls.MUXControlsTestHooksLoggingMessageEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IPullToRefreshHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_PullToRefreshHelperTestApi[] = L"Microsoft.UI.Private.Controls.PullToRefreshHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.RadioButtonsTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IRadioButtonsTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_RadioButtonsTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_RadioButtonsTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_RadioButtonsTestHooks[] = L"Microsoft.UI.Private.Controls.RadioButtonsTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.RepeaterTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IRepeaterTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_RepeaterTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_RepeaterTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_RepeaterTestHooks[] = L"Microsoft.UI.Private.Controls.RepeaterTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollViewerIRefreshInfoProviderAdapter ** Default Interface **
 *    Microsoft.UI.Private.Controls.IRefreshInfoProviderAdapter
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollViewerIRefreshInfoProviderAdapter[] = L"Microsoft.UI.Private.Controls.ScrollViewerIRefreshInfoProviderAdapter";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooks[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksAnchorEvaluatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksAnchorEvaluatedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksAnchorEvaluatedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksExpressionAnimationStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksExpressionAnimationStatusChangedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksExpressionAnimationStatusChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.IScrollerTestHooksInteractionSourcesChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_ScrollerTestHooksInteractionSourcesChangedEventArgs[] = L"Microsoft.UI.Private.Controls.ScrollerTestHooksInteractionSourcesChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SliderInteraction
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISliderInteraction ** Default Interface **
 *    Microsoft.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SliderInteraction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SliderInteraction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SliderInteraction[] = L"Microsoft.UI.Private.Controls.SliderInteraction";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SpectrumBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISpectrumBrush ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SpectrumBrush_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SpectrumBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SpectrumBrush[] = L"Microsoft.UI.Private.Controls.SpectrumBrush";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SplitButtonTestApi
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISplitButtonTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SplitButtonTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SplitButtonTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SplitButtonTestApi[] = L"Microsoft.UI.Private.Controls.SplitButtonTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.SwipeTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ISwipeTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_SwipeTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_SwipeTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_SwipeTestHooks[] = L"Microsoft.UI.Private.Controls.SwipeTestHooks";
#endif


/*
 *
 * Class Microsoft.UI.Private.Controls.TeachingTipTestHooks
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Controls.ITeachingTipTestHooks ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Controls_TeachingTipTestHooks_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Controls_TeachingTipTestHooks_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Controls_TeachingTipTestHooks[] = L"Microsoft.UI.Private.Controls.TeachingTipTestHooks";
#endif





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EPrivate2EControls_p_h__

#endif // __Microsoft2EUI2EPrivate2EControls_h__
