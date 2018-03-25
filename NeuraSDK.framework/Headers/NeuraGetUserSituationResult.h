//
//  NeuraAddDeviceResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

/**
 A NeuraAPIResult for getting use situation.
 see
 [NeuraSDK getUserSituationForTimeStamp:contextual:callback:]
 */
@interface NeuraGetUserSituationResult : NeuraAPIResult
/**
 Returned raw information provided by Neura's server API.
 */
@property (nullable, nonatomic, readonly) NSDictionary *rawInfo;
@end

/**
 NeuraGetUserSituationCallback a callback returning the result object.
 
 @param result NeuraGetUserSituationResult
 */
typedef void (^NeuraGetUserSituationCallback)(NeuraGetUserSituationResult * _Nonnull result);
