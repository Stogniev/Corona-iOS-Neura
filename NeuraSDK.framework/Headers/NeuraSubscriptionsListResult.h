//
//  NeuraSubscriptionsListResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NSubscription;

/**
 NeuraSubscriptionsListResult
 
 success        - BOOL value indicating success/failure as returned from the server.
 subscriptions  - NSArray<NSubscription *> List of subscriptions objects (nonnull).
 error          - NeuraAPIError object if error encountered. nil otherwise.
 */
@interface NeuraSubscriptionsListResult : NeuraAPIResult
@property (nonatomic, nonnull, readonly) NSArray<NSubscription *> *subscriptions;
@property (nonatomic, nonnull, readonly) NSDictionary<NSString *, NSubscription *> *subscriptionsByName;
@end

/**
 NeuraSubscriptionsListCallback
 
 Result callback, returning a NeuraSubscriptionsListResult
 Will return an neura api error object, if any error encountered during the retrieval of the subscriptions array.
 */
typedef void (^NeuraSubscriptionsListCallback)(NeuraSubscriptionsListResult * _Nonnull result);
