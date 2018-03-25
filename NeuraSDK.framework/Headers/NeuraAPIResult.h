//
//  NeuraAPIResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIError.h"
#import "NeuraAPIObject.h"

/**
 NeuraAPIResult
 Base class for all other API results objects.
 Used in simple responses that include only errors and/or status field.
 Success is YES if no error encountered and server responded with status = success
 */
@interface NeuraAPIResult : NSObject

/**
 BOOL value indicating success.
 */
@property (nonatomic, readonly) BOOL success;

/**
 (optional) A NeuraAPIError object if an error encountered. mil otherwise.
 */
@property (nonatomic, nullable, readonly) NeuraAPIError *error;

/**
 (optional) error message if an error encountered. nil otherwise.
 This is the same as error.localizedDescription.
 */
@property (nonatomic, nullable, readonly) NSString *errorString;

/**
 Instantiate the base api result object.

 @param info Information to be parsed. NeuraAPIResult assumes info is NSDictionary. Derived classes may use a different NSObject.
 @param errorString An error message string.
 @return NeuraAPIResult object.
 */
+(nonnull instancetype)resultForInfo:(nonnull id)info errorString:(nullable NSString *)errorString;

@end
