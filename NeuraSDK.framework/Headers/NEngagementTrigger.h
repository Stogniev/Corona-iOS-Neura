//
//  NTrigger.h
//  NeuraSDK
//
//  Created by Neura on 29/11/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NeuraAPIObject.h"


/**
 An object representing Neura info about Trigger of the engagement.
 */
@interface NEngagementTrigger : NeuraAPIObject

/**
 the name of the trigger.
 */
@property (nonnull, nonatomic, readonly) NSString *triggerName;

/**
 the id of the trigger.
 */
@property (nonnull, nonatomic, readonly) NSString *triggerId;

/**
 the type of the trigger.
 */
@property (nonnull, nonatomic, readonly) NSString *triggerType;

/**
 build a NEngagementTrigger Object
 
 @param triggerId the id of the event.
 @param triggerName the name of the event
 */

+ (instancetype _Nullable)initWithTriggerId:(nonnull NSString *)triggerId andName:(nonnull NSString *)triggerName;

@end
