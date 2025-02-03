#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The resource bundle ID.
static NSString * const ACBundleID AC_SWIFT_PRIVATE = @"Dilshad-P.SwiftUI-Crypto";

/// The "AccentColor" asset catalog color resource.
static NSString * const ACColorNameAccentColor AC_SWIFT_PRIVATE = @"AccentColor";

/// The "AppGreenColor" asset catalog color resource.
static NSString * const ACColorNameAppGreenColor AC_SWIFT_PRIVATE = @"AppGreenColor";

/// The "AppRedColor" asset catalog color resource.
static NSString * const ACColorNameAppRedColor AC_SWIFT_PRIVATE = @"AppRedColor";

/// The "BackgroundColor" asset catalog color resource.
static NSString * const ACColorNameBackgroundColor AC_SWIFT_PRIVATE = @"BackgroundColor";

/// The "SecondaryTextColor" asset catalog color resource.
static NSString * const ACColorNameSecondaryTextColor AC_SWIFT_PRIVATE = @"SecondaryTextColor";

/// The "coingecko" asset catalog image resource.
static NSString * const ACImageNameCoingecko AC_SWIFT_PRIVATE = @"coingecko";

/// The "logo" asset catalog image resource.
static NSString * const ACImageNameLogo AC_SWIFT_PRIVATE = @"logo";

/// The "logo-transparent" asset catalog image resource.
static NSString * const ACImageNameLogoTransparent AC_SWIFT_PRIVATE = @"logo-transparent";

#undef AC_SWIFT_PRIVATE
