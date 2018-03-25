//
//  NeuraAddDeviceResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

/**
 A NeuraAPIResult for adding a device.
 see 
    [NeuraSDK addDeviceWithCallback:]
    [NeuraSDK addDeviceNamed:withCallback:]
    [NeuraSDK addDeviceWithCapabilityNamed:withCallback:]
 */
@interface NeuraAddDeviceResult : NeuraAPIResult
@end

/**
 NeuraEventFeedbackCallback a callback returning the result object.
 
 @param result NeuraAddDeviceResult
 */
typedef void (^NeuraAddDeviceCallback)(NeuraAddDeviceResult * _Nonnull result);
