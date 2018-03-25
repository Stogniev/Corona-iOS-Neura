//
//  NeuraSdkConfiguration.h
//  NeuraSDK
//
//  Created by Neura on 11/08/2016.
//  Copyright © 2016 Neura. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NeuraSDKAPIAvailability.h"

#pragma mark - Legacy API
/** Legacy flags (This will be deprecated soon) */
typedef NS_OPTIONS(NSUInteger, NEUFeatures) {
    /** NEUSDKCustomErrorNotification */
    NEUSDKCustomErrorNotification       =(1 << 0),
    /** NEUSDKDisableSdkLogging */
    NEUSDKDisableSdkLogging             =(1 << 1)
};


/**
 A shared object used to configure the SDK.
 */
@interface NeuraSdkConfiguration : NSObject

+ (nonnull instancetype)sharedInstance;

#if FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST(8)
/** shared class property
 
 The same as [NeuraSdkConfiguration sharedInstance].
 This is just a convenience class property for shorter syntax under Swift 3.0+
 
 Starting Swift 3.0+
 Instead of : NeuraSdkConfiguration.sharedInstance()?.someMethodName()
 You can just use: NeuraSdkConfiguration.shared.someMethodName()
 */
@property (class, nonatomic, readonly, nonnull) NeuraSdkConfiguration *shared;
#endif

#pragma mark - Settings flags
/**
 This default preferences dictionary is used when the remote preferences
 are not set on the server side.
 
 Mostly used for debugging: don't set this property in production apps.
 */
@property(nonatomic,assign, nullable) NSDictionary *defaultPreferences;


@property(nonatomic,readwrite,assign) BOOL willSetupDefaultPushNotifications;
/**
 * Default notification error alerts will be displayed to the user by the SDK (enabled by default).
 * Call enableCustomErrorNotifications if you want to disable these default error alerts and handle
 * reporting errors to the user using your own custom user interface.
 */
@property(nonatomic,readonly,assign) BOOL errorNotificationsEnabled DEPRECATED_NEURA_API("Deprecated on NeuraSDK 4.2+.");

/**
 * Deprecated. This flag now always returns YES.
 * Will be removed from the API in future release.
 */
@property(nonatomic,readonly,assign) BOOL dataCollectionOnRequestEnabled DEPRECATED_NEURA_API("Deprecated. Always returns YES. Will be removed from API on future release..");

/**
 * Enable custom error notifications user interface.
 * (this will disable the default alerts shown to the user on SDK errors)
 * You may get the info about the errors and communicate them to the user by observing the XXXX notifications.
 * This setting is persistent.
 */
- (void)enableCustomErrorNotifications DEPRECATED_NEURA_API("Deprecated on NeuraSDK 4.2+.");

/**
 * Disable custom error notifications user interface.
 * (this will re enable the default alerts shown to the user on SDK errors)
 * This setting is persistent.
 */
- (void)disableCustomErrorNotifications DEPRECATED_NEURA_API("Deprecated on NeuraSDK 4.2+.");

/**
 Set all configuration flags in one call.
 Deprecated on NeuraSDK 3+. Please use the enable/disable methods on NeuraSdkConfiguration.
 @param flags A flags mask.
 */
- (void)setConfigurationFlags:(NSUInteger)flags DEPRECATED_NEURA_API("Deprecated on NeuraSDK 3+. Please use the enable/disable methods on NeuraSdkConfiguration.");

@end
