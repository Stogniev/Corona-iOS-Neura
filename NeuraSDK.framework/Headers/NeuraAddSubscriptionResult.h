//
//  NeuraAddSubscriptionResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NSubscription;

/**
 NeuraAddSubscriptionResult
 
 success        - BOOL value indicating success/failure as returned from the server.
 timestamp      - UInt64 The timestamp
 subscription   - NeuraSubscription - subscription information (nil if no info available).
 error          - NeuraAPIError object if error encountered. nil otherwise.
 */
@interface NeuraAddSubscriptionResult : NeuraAPIResult
@property (nonatomic, readonly) UInt64 timestamp;
@property (nonatomic, nullable, readonly) NSubscription *subscription;
@end

/**
 NeuraAddSubscriptionCallback a callback returning the result object.
 
 @param result NeuraAddSubscriptionResult
 */
typedef void (^NeuraAddSubscriptionCallback)(NeuraAddSubscriptionResult * _Nonnull result);

/**
 NeuraRemoveSubscriptionCallback a callback returning the result object.
 
 @param result NeuraAPIResult
 */
typedef void (^NeuraRemoveSubscriptionCallback)(NeuraAPIResult * _Nonnull result);

/**
 NeuraMissingDataForEventCallback a callback returning the result object.
 
 @param result NeuraAPIResult
 */
typedef void (^NeuraMissingDataForEventCallback)(NeuraAPIResult * _Nonnull result);
