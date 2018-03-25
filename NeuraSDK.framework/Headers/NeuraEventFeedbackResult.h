//
//  NeuraAddDeviceResult.h
//  NeuraSDK
//
//  Created by Neura on 03/12/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

/**
 A NeuraAPIResult for returning the response for feedback sent to Neura.
 
 see [NeuraSDK sendFeedbackForEventId:approved:callback:]
 */
@interface NeuraEventFeedbackResult : NeuraAPIResult
@end


/**
 NeuraEventFeedbackCallback a callback returning the result object.
 
 @param result NeuraEventFeedbackResult
 */
typedef void (^NeuraEventFeedbackCallback)(NeuraEventFeedbackResult * _Nonnull result);
