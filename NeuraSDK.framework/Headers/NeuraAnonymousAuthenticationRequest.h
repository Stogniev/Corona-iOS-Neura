//
//  NeuraAnonymousAuthenticationRequest.h
//  NeuraSDK
//
//  Created by Neura on 24/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NeuraBaseAuthenticationRequest.h"
#import "NeuraSDKAPIAvailability.h"

/**
 An anonymous based authentication request (without user validation)
 Uses iOS vendor identifier to identify the user. 
 */
@interface NeuraAnonymousAuthenticationRequest : NeuraBaseAuthenticationRequest

/**
 Helper method. Converts the NSData device token (as provided by the app's delegate didRegisterForRemoteNotificationsWithDeviceToken:) to NSString.
 This string can be used when initializing the NeuraAnonymousAuthenticationRequest.

 @param deviceToken NSData device token (as provided by the app's delegate didRegisterForRemoteNotificationsWithDeviceToken:)
 @return The token as NSString.
 */
+ (NSString *)deviceTokenStringFromData:(NSData *)deviceToken;

/**
 Helper initializer
 
 @param deviceTokenString The device token string. Used to inform Neura's servers about the device token.
                          Note: remote notifications must be available and the token must be provided for anonymous authentication to work.
 @return A new instance of the anonymous authentication request.
 */
- (instancetype)initWithDeviceTokenString:(NSString *)deviceTokenString DEPRECATED_NEURA_API("Deprecated on SDK v4.2.3 - No need to provide device token for anonymous authentication. Simply use init instead.");

/**
 Helper initializer
 
 @param deviceToken NSData device token (as provided by the app's delegate didRegisterForRemoteNotificationsWithDeviceToken:). 
        Used to inform Neura's servers about the device token.
        Note: remote notifications must be available and the token must be provided for anonymous authentication to work.
 @return A new instance of the anonymous authentication request.
 */
- (instancetype)initWithDeviceToken:(NSData *)deviceToken DEPRECATED_NEURA_API("Deprecated on SDK v4.2.3 - No need to provide device token for anonymous authentication. Simply use init instead.");

/**
 Deprecated on SDK v4.2.3
 There is no need now to supply device token for anonymous authentication.
 */
@property NSString *deviceTokenString DEPRECATED_NEURA_API("Deprecated on SDK v4.2.3 - No need to provide device token for anonymous authentication.");

@end
