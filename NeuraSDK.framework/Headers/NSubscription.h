//
//  NSubscription.h
//  NeuraSDK
//
//  Created by Neura on 28/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIObject.h"


/**
 An object representing a subscription to an event.
 */
@interface NSubscription : NeuraAPIObject


/**
 The name of the related Neura event.
 */
@property (nonnull, nonatomic, readonly) NSString *eventName;


/**
 A unique identifier for this specific subscription.
 Note: You can have one or more subscriptions to the same event.
       Each subscription must have a different unique identifier.
 */
@property (nonnull, nonatomic, readonly) NSString *identifier;

/**
 (optional) The identifier of the related webhook.
 */
@property (nullable, nonatomic, readonly) NSString *webhookId;

/**
 The time of creation of the subscription.
 */
@property (nonnull, nonatomic, readonly) NSString *createdAt;

/**
 Meta data related to the subscription.
 */
@property (nonnull, nonatomic, readonly) NSDictionary *metadata;

/**
 The method of the subscription.
 
 - webhook: Event sent to a webhook implemented on the developer's server. A webhook identifier must be provided.
 - push: Event sent to client using mutable-content messages (supported only by iOS 10 and up).
 - all: Event sent with both methods: to the webhook and by a mutable content message to the client.
 */
@property (nonnull, nonatomic, readonly) NSString *method;


/**
 The related unique Neura identifier.
 */
@property (nullable, nonatomic, readonly) NSString *neuraId;


/**
 Enabled / disabled state.
 */
@property (nullable, nonatomic, readonly) NSString *state;



/**
 Subscription methods.

 - NSubscriptionMethodWebhook: Event sent to a webhook implemented on the developer's server. A webhook identifier must be provided.
 - NSubscriptionMethodPush: Event sent to client using mutable-content messages (supported only by iOS 10 and up).
 - NSubscriptionMethodAll: Event sent with both methods: to the webhook and by a mutable content message to the client.
 */
typedef NS_ENUM(NSUInteger, NSubscriptionMethod) {
    NSubscriptionMethodAll,
    NSubscriptionMethodWebhook,
    NSubscriptionMethodPush
};

/**
 Init subscription with provided identifier and webhook id.
 
 @param eventName The name of the event the subscription is related to.
 @param identifier The identifier of the subscription.
 @param webhookId A related webhook identifier.
 @param method Determines where the notification will come from: Whether from the webhook or the server or both
 @return A new subscription object instance.
 */
- (nonnull instancetype)initWithEventName:(nonnull  NSString *)eventName
                               identifier:(nonnull  NSString *)identifier
                                webhookId:(nullable NSString *)webhookId
                                  method:(NSubscriptionMethod)method;

/**
 Init subscription with the webhook method (with provided webhook id).
 
 This call is equivelant to initWithEventName:identifier:webhookId:method: where the identifier is set to be the event name with an underscore as a prefix and the method is webhook.
 
 @param eventName The name of the event the subscription is related to.
 @param webhookId A related webhook identifier.
 @return A new subscription object instance.
 */
- (nonnull instancetype)initWithEventName:(nonnull NSString *)eventName
                                webhookId:(nullable NSString *)webhookId;



/**
 Init subscription with the push method (with provided subscription id).
 
 This call is equivelant to initWithEventName:identifier:webhookId:method: where the method is push and webhookId is nil.
 
 @param eventName The name of the event the subscription is related to.
 @param identifier The identifier of the subscription.
 @return A new subscription object instance.
 */
- (nonnull instancetype)initWithEvenName:(nonnull NSString *)eventName
                   forPushWithIdentifier:(nonnull NSString *)identifier;



/**
 Returns the set properties of this object as a dictionary.

 @return NSDictionary with the set values of this object.
 */
- (nonnull NSDictionary *)params;

@end
