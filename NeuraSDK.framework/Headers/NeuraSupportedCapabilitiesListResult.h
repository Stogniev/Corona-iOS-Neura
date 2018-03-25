//
//  NeuraSupportedDevicesListResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NCapability;

/**
 A NeuraAPIResult for getting all the supported capabilities for devices.
 
 see [NeuraSDK getSupportedCapabilitiesListWithCallback:]
 */
@interface NeuraSupportedCapabilitiesListResult : NeuraAPIResult

/**
 List of capabilities.
 */
@property (nonatomic, nonnull, readonly) NSArray<NCapability *> *capabilities;
@end

/**
 NeuraSupportedCapabilitiesListCallback a callback returning the result object.
 
 @param result NeuraSupportedCapabilitiesListResult
 */
typedef void (^NeuraSupportedCapabilitiesListCallback)(NeuraSupportedCapabilitiesListResult * _Nonnull result);
