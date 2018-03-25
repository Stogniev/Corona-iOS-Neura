//
//  NeuraAuthenticationInfo.h
//  NeuraSDK
//
//  Created by Neura on 24/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 Extra info (when required) about the authentication
 */
@interface NeuraAuthenticationInfo : NSObject


/**
 Access token for accessing APIs related to the authenticated user.
 */
@property (nonatomic, nullable, readonly) NSString *accessToken;


/**
 Initialize with NSString token.

 @param token NSString app's access token.
 @return initialized instance of NeuraAuthenticationInfo.
 */
- (instancetype _Nullable)initWithToken:(NSString * _Nonnull)token;

@end
