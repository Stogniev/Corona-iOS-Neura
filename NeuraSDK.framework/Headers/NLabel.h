//
//  NLabel.h
//  NeuraSDK
//
//  Created by Neura on 29/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIObject.h"

/**
 An object representing a Neura label.
 */
@interface NLabel : NeuraAPIObject

/**
 The priority of the label.
 */
@property (nonatomic, readonly) NSInteger priority;

/**
 The display name of the label.
 */
@property (nullable, nonatomic, readonly) NSString *displayName;

/**
 A url for a related thumb image.
 */
@property (nullable, nonatomic, readonly) NSString *imageThumbUrl;

/**
 A url for a related image.
 */
@property (nullable, nonatomic, readonly) NSString *imageUrl;

/**
 The related Neura id of the label.
 */
@property (nullable, nonatomic, readonly) NSString *neuraId;

/**
 The type of the label.
 */
@property (nullable, nonatomic, readonly) NSString *type;

/**
 The
 */
@property (nullable, nonatomic, readonly) NSString *value;


/**
 Parses info about labels provided in an array to an array of label objects.
 
 @param info An array of dictionary object containing info about labels.
 @return An array of NLabel objects.
 */
+(nonnull NSArray <NLabel *> *)listFromInfo:(nullable NSArray *)info;

@end
