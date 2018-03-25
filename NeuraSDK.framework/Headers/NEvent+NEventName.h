//
//  NEvent+NEventName.h
//  NeuraSDK
//
//  Created by Neura on 06/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import "NEvent.h"

/**
 Moments / Events names
 */
typedef NS_ENUM(NSUInteger, NEventName) {
    /** Undefined value */
    NEventNameUndefined,
    /** User finished running */
    NEventNameUserFinishedRunning,
    /** User finished walking */
    NEventNameUserFinishedWalking,
    /** User started walking */
    NEventNameUserStartedWalking,
    /** User finished driving */
    NEventNameUserFinishedDriving,
    /** User started driving */
    NEventNameUserStartedDriving,
    /** User started transit by walking */
    NEventNameUserStartedTransitByWalking,
    /** User started running */
    NEventNameUserStartedRunning,
    /** User finished transit by walking */
    NEventNameUserFinishedTransitByWalking,
    /** User started work out */
    NEventNameUserStartedWorkOut,
    /** User finished work out */
    NEventNameUserFinishedWorkOut,
    /** User started sleeping */
    NEventNameUserStartedSleeping,
    /** User is idle for 2 hours */
    NEventNameUserIsIdleFor2Hours,
    /** User woke up */
    NEventNameUserWokeUp,
    /** User is idle for 1 hour */
    NEventNameUserIsIdleFor1Hour,
    /** User got up */
    NEventNameUserGotUp,
    /** User is idle at home */
    NEventNameUserIsIdleAtHome,
    /** User arrived to work by running */
    NEventNameUserArrivedToWorkByRunning,
    /** User arrived home by walking */
    NEventNameUserArrivedHomeByWalking,
    /** User arrived home by running */
    NEventNameUserArrivedHomeByRunning,
    /** User arrived to work by walking */
    NEventNameUserArrivedToWorkByWalking,
    /** User left gym */
    NEventNameUserLeftGym,
    /** User arrived home */
    NEventNameUserArrivedHome,
    /** User arrived home from work */
    NEventNameUserArrivedHomeFromWork,
    /** User arrived to gym */
    NEventNameUserArrivedToGym,
    /** User arrived to work */
    NEventNameUserArrivedToWork,
    /** User left home */
    NEventNameUserLeftHome,
    /** User arrived work from home */
    NEventNameUserArrivedWorkFromHome,
    /** User arrived at active zone */
    NEventNameUserArrivedAtActiveZone,
    /** User left work */
    NEventNameUserLeftWork,
    /** User arrived at grocery store */
    NEventNameUserArrivedAtGroceryStore,
    /** User left active zone */
    NEventNameUserLeftActiveZone,
    /** User arrived at school campus */
    NEventNameUserArrivedAtSchoolCampus,
    /** User arrived at airport */
    NEventNameUserArrivedAtAirport,
    /** User arrived at clinic */
    NEventNameUserArrivedAtClinic,
    /** User arrived at cafe */
    NEventNameUserArrivedAtCafe,
    /** User arrived at restaurant */
    NEventNameUserArrivedAtRestaurant,
    /** User arrived at hospital */
    NEventNameUserArrivedAtHospital,
    /** User left school campus */
    NEventNameUserLeftSchoolCampus,
    /** User left cafe */
    NEventNameUserLeftCafe,
    /** User left hospital */
    NEventNameUserLeftHospital,
    /** User left restaurant */
    NEventNameUserLeftRestaurant,
    /** User left airport */
    NEventNameUserLeftAirport,
    /** User arrived at pharmacy */
    NEventNameUserArrivedAtPharmacy,
    /** User left pharmacy */
    NEventNameUserLeftPharmacy,
    /** User left grocery store */
    NEventNameUserLeftGroceryStore,
    /** User is on the way to active zone */
    NEventNameUserIsOnTheWayToActiveZone,
    /** User is about to go to sleep */
    NEventNameUserIsAboutToGoToSleep,
    /** User is on the way home */
    NEventNameUserIsOnTheWayHome,
    /** User is on the way to work */
    NEventNameUserIsOnTheWayToWork,
    /** User started running from place */
    NEventNameUserStartedRunningFromPlace,
};


@interface NEvent (NEventName)


/**
 Provided an NEventName returns the related event name as string.

 @param name NEVentName
 @return NSString if a recognized event (nil otherwise).
 */
+(NSString *)stringForEventName:(NEventName)name;


/**
 Provided a name of an event as string, returns the related NEventName value.

 @param name The name of the event as NSString (the string is case sensitive)
 @return NEventName of the recognized event name (will return NEventNameUndefined if unrecognized string provided as the name).
 */
+(NEventName)enumForEventName:(NSString *)name;

@end
