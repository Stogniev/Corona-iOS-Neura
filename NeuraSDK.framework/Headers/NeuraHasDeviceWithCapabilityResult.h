//
//  NeuraHasDeviceWithCapabilityResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NCapability;


/**
 A NeuraAPIResult providing info and answering the question: do the user have a device with the provided capability?
 
 see [NeuraSDK hasDeviceWithCapability:withCallback:]
 */
@interface NeuraHasDeviceWithCapabilityResult : NeuraAPIResult


/**
 Bool value indicating if a device exist with provided capability.
 */
@property (nonatomic, readonly) BOOL hasDevice;

/**
 The name of the capability.
 */
@property (nonatomic, nonnull, readonly) NSString *capabilityName;

/**
 A NCapability object providing information about the capability.
 */
@property (nonatomic, nullable, readonly) NCapability *capability;

/**
 Helper initializer.

 @param info Raw info.
 @param capabilityName The name of the capability.
 @param errorString An eror string (nil if no error encountered).
 @return A new instance of NeuraHasDeviceWithCapabilityResult
 */
+(nonnull instancetype)resultForInfo:(nonnull id)info capabilityName:(nonnull NSString *)capabilityName errorString:(nonnull NSString *)errorString;
@end

/**
 NeuraHasDeviceWithCapabilityCallback a callback returning the result object.

 @param result NeuraHasDeviceWithCapabilityResult
 */
typedef void (^NeuraHasDeviceWithCapabilityCallback)(NeuraHasDeviceWithCapabilityResult * _Nonnull result);
