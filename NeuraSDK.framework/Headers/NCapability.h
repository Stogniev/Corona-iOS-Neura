//
//  NCapability.h
//  NeuraSDK
//
//  Created by Neura on 29/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIObject.h"

/**
  An object representing Neura info about a device capability.
 */
@interface NCapability : NeuraAPIObject

/**
 A description of the capability.
 */
@property (nonnull, nonatomic, readonly) NSString *aDescription;

/**
 The display name of the capability.
 */
@property (nonnull, nonatomic, readonly) NSString *displayName;

/**
 A related image URL of the capability.
 */
@property (nonnull, nonatomic, readonly) NSDictionary *image;

/**
 The name of the capability.
 */
@property (nonnull, nonatomic, readonly) NSString *name;

/**
 The related Neura id of the capability.
 */
@property (nonnull, nonatomic, readonly) NSString *neuraId;

/**
 Converts an array of dictionaries with info about capabilities to an array of capability objects.
 
 @param info An array of dictionaries with info about capabilities.
 @return An array of NCapability objects.
 */
+ (nonnull NSArray <NCapability *> *)listFromInfo:(nullable NSArray *)info;

/**
 Creates and returns a new capability object with the provided name.
 
 @param name A name of a capability.
 @return A new instance of a capability object.
 */
+ (nonnull instancetype)named:(nonnull NSString*)name;

/**
 Initializes a NCapability object with the provided name.
 
 @param name The name of the capability.
 @return A new instance of a NCapability object.
 */
- (nonnull instancetype)initWithName:(nonnull NSString*)name;

@end
