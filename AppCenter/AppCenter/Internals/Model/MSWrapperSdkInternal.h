#import <Foundation/Foundation.h>

#import "MSAbstractLogInternal.h"

@interface MSWrapperSdk () <MSSerializableObject>

/*
 * Version of the wrapper SDK. When the SDK is embedding another base SDK (for example Xamarin.Android wraps Android),
 * the Xamarin specific version is populated into this field while sdkVersion refers to the original Android SDK.
 * [optional]
 */
@property(nonatomic, copy) NSString *wrapperSdkVersion;

/*
 * Name of the wrapper SDK (examples: Xamarin, Cordova).  [optional]
 */
@property(nonatomic, copy) NSString *wrapperSdkName;

/*
 * Version of the wrapper technology framework (Xamarin runtime version or ReactNative or Cordova etc...).  [optional]
 */
@property(nonatomic, copy) NSString *wrapperRuntimeVersion;

/*
 * Label that is used to identify application code 'version' released via Live Update beacon running on device
 */
@property(nonatomic, copy) NSString *liveUpdateReleaseLabel;

/*
 * Identifier of environment that current application release belongs to, deployment key then maps to environment like
 * Production, Staging.
 */
@property(nonatomic, copy) NSString *liveUpdateDeploymentKey;

/*
 * Hash of all files (ReactNative or Cordova) deployed to device via LiveUpdate beacon.
 * Helps identify the Release version on device or need to download updates in future
 */
@property(nonatomic, copy) NSString *liveUpdatePackageHash;

@end
