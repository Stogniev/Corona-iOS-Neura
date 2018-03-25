//
//  Permission.h
//  NeuraSDK
//
//  Created by Neura on 24/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIObject.h"

@class NEvent;

#pragma mark - NDisplayTextVariations
/**
 Text variations of a permission object (can be used for display).
 */
@interface NDisplayTextVariations : NeuraAPIObject

/**
 First person phrasing.
 */
@property (nonnull, nonatomic, readonly) NSString *firstPerson;

/**
 Second person phrasing.
 */
@property (nonnull, nonatomic, readonly) NSString *secondPerson;

/**
 Second person phrasing (short version).
 */
@property (nonnull, nonatomic, readonly) NSString *secondPersonShort;

/**
 Third person phrasing.
 */
@property (nonnull, nonatomic, readonly) NSString *thirdPerson;

/**
 Third person phrasing (short version).
 */
@property (nonnull, nonatomic, readonly) NSString *thirdPersonShort;

@end

#pragma mark - NPermission
/**
 An object representing a Neura permission.
 */
@interface NPermission : NeuraAPIObject

/**
 The name of the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *name;

/**
 Neura Id of this permission.
 */
@property (nonnull, nonatomic, readonly) NSString *neuraId;

/**
 The reason for asking the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *reason;

/**
 The state of the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *state;

/**
 The category of the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *category;

/**
 A description of the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *aDescription;

/**
 The display name of the permission.
 */
@property (nonnull, nonatomic, readonly) NSString *displayName;

/**
 More variations of display names of the permission.
 (See NDisplayTextVariations)
 */
@property (nonnull, nonatomic, readonly) NDisplayTextVariations *displayTextVariations;

/**
 An array of events related to the permission.
 */
@property (nonnull, nonatomic, readonly) NSArray <NEvent *> *events;

/**
 Given an array of NPermissions, returns an array of strings containing the names of those permissions.

 @param list an array of NPermission objects.
 @return an array of names.
 */
+(nonnull NSArray <NSString *> *)stringsFromList:(nonnull NSArray <NPermission *> *)list;

/**
 Given an array of strings of names of permissions returns an array of NPermission objects representing those permissions.
 Note: This method doesn't validate if the provided names are actually names of existing permissions.

 @param array An array of names
 @return An array of permissions
 */
+(nonnull NSArray <NPermission *> *)listFromStrings:(nonnull NSArray <NSString *> *)array;

/**
 Returns a dictionary of all known event objects with the names of the events as keys.

 @return events by name dictionary.
 */
-(nonnull NSDictionary <NSString *, NEvent *> *)eventsByName;

@end
