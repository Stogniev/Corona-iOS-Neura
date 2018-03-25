//
//  NDevice.h
//  NeuraSDK
//
//  Created by Neura on 29/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIObject.h"

@class NLabel;
@class NCapability;

/**
 An object representing Neura info about a device.
 */
@interface NDevice : NeuraAPIObject

/**
 An array of capability objects representing the list of capabilities supported by the device.
 */
@property (nonnull, nonatomic, readonly) NSArray <NCapability *> *capabilities;

/**
 A URL to a related image.
 */
@property (nonnull, nonatomic, readonly) NSString *image;

/**
 An array of related labels.
 */
@property (nonnull, nonatomic, readonly) NSArray <NLabel *> *labels;

/**
 The name of the device.
 */
@property (nonnull, nonatomic, readonly) NSString *name;

/**
 The type of the device.
 */
@property (nonnull, nonatomic, readonly) NSString *type;

/**
 The vendor of the device.
 */
@property (nonnull, nonatomic, readonly) NSString *vendor;

@end
