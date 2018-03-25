//
//  NeuraEventsList.h
//  NeuraSDK
//
//  Created by Neura on 03/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NeuraAPIResult.h"
#import "NEvent.h"


/**
 Result object with the array of event definitions.
 */
@interface NeuraEventsListResult : NeuraAPIResult


/**
 An array of event definitions (array of NEvent objects)
 */
@property (nonatomic, nonnull, readonly) NSArray<NEvent *> *eventDefinitions;

@end


/**
 A callback returning a NeuraEventsListResult object.

 @param result NeuraEventsListResult the result object.
 */
typedef void (^NeuraEventsListResultCallback)(NeuraEventsListResult * _Nonnull result);
