//
//  NeuraGetInsightInfoResult.h
//  NeuraSDK
//
//  Created by Neura on 19/02/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"
#import "NeuraGetUserSituationResult.h"

/**
 A NeuraGetInsightInfoResult for getting insights about the user.
 see [NeuraSDK getUserSituationForTimeStamp:contextual:callback:]
 */
@interface NeuraGetInsightInfoResult : NeuraGetUserSituationResult
@end

/**
 NeuraGetInsightInfoCallback a callback returning the result object.
 
 @param result NeuraGetInsightInfoResult
 */
typedef void (^NeuraGetInsightInfoCallback)(NeuraGetInsightInfoResult * _Nonnull result);
