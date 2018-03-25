//
//  NeuraAPIObject.h
//  NeuraSDK
//
//  Created by Neura on 27/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIError.h"


/**
 Base Neura API Objects.
 You should consider this class as an abstract class that is the base for other API classes.
 There is no need to use this class directly. Use only the derived classes.
 */
@interface NeuraAPIObject : NSObject


/**
 Holds an NeuraAPIError object if an error encountered.
 */
@property (nullable, nonatomic) NeuraAPIError *error;

// Must be implemented in subclass.

/**
 Must be implemented by the subclass.

 @param info NSDictionary info to parse.
 @return An instance of an API object.
 */
+(nonnull instancetype)fromDictionary:(nonnull NSDictionary *)info;

// Must be implemented in subclass.


/**
 Returns a dictionary with info about the object.

 @return A dictionary representation of the object.
 */
-(nonnull NSDictionary *)toDictionary;

#pragma mark - Safe types parsing

/**
 Safely returns data object as string.
 Or returns an empty string.
 
 @param data An object that may be a string.
 @return NSString.
 */
+(nonnull NSString *)pString:(nullable id)data;

/**
 Safely returns data object as string.
 Or returns the default provided string.
 
 @param data An object that may be a string.
 @param defaultValue A default value that is returned if data can't be returned as a string.
 @return NSString.
 */
+(nonnull NSString *)pString:(nullable id)data defaultValue:(nullable NSString *)defaultValue;


/**
 Safely returns data object as string.
 Or returns nil.
 
 @param data An object that may be a string.
 @return NSString or nil.
 */
+(nullable NSString *)pOptionalString:(nullable id)data;

/**
 Safely returns data object as NSDictionary.
 Or returns an empty dictionary.
 
 @param data An object that may be a dictionary.
 @return NSDictioary.
 */
+(nonnull NSDictionary *)pDictionary:(nullable id)data;

/**
 Safely returns data object as NSDictionary.
 Or returns a default dictionary.
 
 @param data An object that may be a dictionary.
 @param defaultValue A default value that is returned if data can't be returned as a dictionary.
 @return NSDictioary.
 */
+(nonnull NSDictionary *)pDictionary:(nullable id)data defaultValue:(nullable NSDictionary *)defaultValue;

/**
 Safely returns data object as NSArray.
 Or returns an empty array.
 
 @param data An object that may be an array.
 @return NSArray.
 */
+(nonnull NSArray *)pArray:(nullable id)data;

/**
 Safely returns data object as NSArray.
 Or returns a default array.
 
 @param data An object that may be an array.
 @param defaultValue A default value that is returned if data can't be returned as an array.
 @return NSDictioary.
 */
+(nonnull NSArray *)pArray:(nullable id)data defaultValue:(nullable NSArray *)defaultValue;

/**
 Safely returns data object as BOOL.
 Or returns NO.
 
 @param data An object that may be converted to BOOL (like NSNumber, for example).
 @return BOOL.
 */
+(BOOL)pBool:(nullable)data;

/**
 Safely returns data object as BOOL.
 Or returns the default value.
 
 @param data An object that may be converted to BOOL (like NSNumber, for example).
 @param defaultValue A default value that is returned if data can't be returned as a boolean.
 @return BOOL.
 */
+(BOOL)pBool:(nullable)data defaultValue:(BOOL)defaultValue;

/**
 Safely returns data object, if it equals to a "success" string as BOOL.
 Or returns the default value.
 
 @param data An object that may be equal to a "success" string.
 @return BOOL.
 */
+(BOOL)pSuccessStatus:(nullable)data;

/**
 Safely returns data object, if it equals to a "success" string as BOOL.
 Or returns the default value.
 
 @param data An object that may be equal to a "success" string.
 @param defaultValue A default value that is returned if fails to parse data.
 @return BOOL.
 */
+(BOOL)pSuccessStatus:(nullable)data defaultValue:(BOOL)defaultValue;

/**
 Safely returns data object as NSInteger.
 Or returns 0.
 
 @param data An object that may be converted to an integer (like NSNumber).
 @return NSInteger.
 */
+(NSInteger)pInt:(nullable)data;

/**
 Safely returns data object as NSInteger.
 Or returns 0.
 
 @param data An object that may be converted to an integer (like NSNumber).
 @param defaultValue A default value that is returned if fails to parse data.
 @return NSInteger.
 */
+(NSInteger)pInt:(nullable)data defaultValue:(NSInteger)defaultValue;

/**
 Safely returns data object as SInt64.
 Or returns 0.
 
 @param data An object that may be converted to an integer (like NSNumber).
 @return SInt64.
 */
+(SInt64)pInt64:(nullable)data;

/**
 Safely returns data object as SInt64.
 Or returns 0.
 
 @param data An object that may be converted to an integer (like NSNumber).
 @param defaultValue A default value that is returned if fails to parse data.
 @return SInt64.
 */
+(SInt64)pInt64:(nullable)data defaultValue:(SInt64)defaultValue;


@end
