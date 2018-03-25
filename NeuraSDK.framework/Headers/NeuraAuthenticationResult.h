//
//  NeuraAuthenticationResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"
#import "NeuraAuthenticationInfo.h"

/**
 NeuraAuthenticationResult
 
 */
@interface NeuraAuthenticationResult : NeuraAPIResult

/**
 A unique Neura id for the user.
 This same id will also be provided on events webhook calls etc.
 So it is a good practice to store the relation between this id to your own users' records.
 */
@property (nonatomic, nullable, readonly) NSString *neuraUserId;


/**
 NeuraAuthenticationInfo with extra info about the authentication.
 */
@property (nonatomic, nullable, readonly) NeuraAuthenticationInfo *info;


/**
 Authentication result with token.

 @param token NSString The app's access token.
 @param errorString An error string (if error encountered)
 @return New result object instance.
 */
+(nonnull instancetype)resultWithToken:(nullable NSString *)token
                           errorString:(nullable NSString *)errorString;


@end

/**
 AuthenticateCallback
 
 On a successful authentication returns app's access token.
 Otherwise will return an error string.
 */
typedef void (^NeuraAuthenticateCallback)(NeuraAuthenticationResult * _Nonnull result);
