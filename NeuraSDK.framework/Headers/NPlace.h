//
//  NPlace.h
//  NeuraSDK
//
//  Created by Youval Vaknin on 08/03/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NeuraAPIObject.h"

#define INVALID_LONG (-181.0)
#define INVALID_LAT (-91.0)

/**
 An object representing Neura info about a place.
 */
@interface NPlace : NeuraAPIObject

/** Mandatory. home, work, gym, etc...
    Check out the full list of available labels here: https://dev.theneura.com/docs/api/labels.*/
@property (nonnull, nonatomic, readonly)NSString *label;

/** Optional. Coordinates according to google definitions: https://support.google.com/maps/answer/18539?co=GENIE.Platform%3DAndroid&hl=en&oco=1
 The precession (see: http://gis.stackexchange.com/a/8674 ) should be at least 6 points after the decimal point(at least 0.11m).
 For example, latitude = 24.12345 -> not valid. latitude = 24.123456 -> valid.
 The latitude must be a number between -90 and 90.*/
@property (nonatomic, readonly)double latitude;

/** Optional. See latitude. The longitude must be a number between -180 and 180.*/
@property (nonatomic, readonly)double longitude;

/** Optional. Address for the place you're adding. If this is null, the api will set this up according to the latitude and longitude you've provided.*/
@property (nonnull, nonatomic, readonly)NSString *address;

/** Optional. Name for the place you're adding. If this is null, the api will set this up according to the latitude and longitude you've provided.
              If the name is empty, and the address is not, the name will be the address.*/
@property (nonnull, nonatomic, readonly)NSString *name;

/**
 A new instance of a place with a label
 
 @param label home, work, gym, etc. Check out the full list of available labels here: https://dev.theneura.com/docs/api/labels.
 @return A new place object instance.
 */
+ (nonnull instancetype)placeWithLabel:(nonnull NSString*)label;

/**
 Init place
 
 @param label Mandatory.    home, work, gym, etc... Check out the full list of available labels here: https://dev.theneura.com/docs/api/labels.
 @param latitude Optional.  Coordinates according to google definitions: https://support.google.com/maps/answer/18539?co=GENIE.Platform%3DAndroid&hl=en&oco=1
                            The precession (see: http://gis.stackexchange.com/a/8674 ) should be at least 6 points after the decimal point(at least 0.11m).
                            For example, latitude = 24.12345 -> not valid. latitude = 24.123456 -> valid.
                            The latitude must be a number between -90 and 90. For unknown pass value lower than -90 and latest user known location will be used.
 @param longitude Optional. See latitude. The longitude must be a number between -180 and 180. For unknown pass value lower than -180 and latest user known location will be used.
 @param address Optional.   Address for the place you're adding. If this is null, address info will not be added to the node. It is the developer's responsibility to supply this meta data about the node.
 @param name Optional.      Name for the place you're adding. If this is null, name info will not be added to the node. It is the developer's responsibility to supply this meta data about the node.
                            If the name is empty, and the address is not, the name will be the address.
 @return A new subscription object instance.
 */
- (nonnull instancetype)initWithLabel:(nonnull NSString*)label
                             latitude:(double)latitude
                            longitude:(double)longitude
                              address:(nullable NSString*)address
                                 name:(nullable NSString*)name;

@end
