//
//  NeuraSupportedDevicesListResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NDevice;

/**
 A NeuraAPIResult for getting all the supported capabilities for devices.
 
 see [NeuraSDK getSupportedDevicesListWithCallback:]
 */
@interface NeuraSupportedDevicesListResult : NeuraAPIResult
/**
 A list of supported devices.
 */
@property (nonatomic, nonnull, readonly) NSArray<NDevice *> *devices;
@end

/**
 NeuraSupportedDevicesListCallback a callback returning the result object.
 
 @param result NeuraSupportedDevicesListResult
 */
typedef void (^NeuraSupportedDevicesListCallback)(NeuraSupportedDevicesListResult * _Nonnull result);
