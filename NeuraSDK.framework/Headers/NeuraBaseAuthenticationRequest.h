//
//  NeuraBaseAuthenticationRequest.h
//  NeuraSDK
//
//  Created by Neura on 24/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import "NeuraRequest.h"
#import "NeuraAuthenticationRequestError.h"

#define kNeuraAuthenticationRequestDomain @"Neura authentication request domain"

/**
 AuthenticationType - The type of the flow used on authentication requests.
 */
typedef NS_ENUM(NSUInteger, AuthenticationType) {
    /** AuthenticationTypeUndefined - an undefined authentication type. A request set to this type will fail. */
    AuthenticationTypeUndefined = 0,
    
    
    /** AuthenticationTypeAnonymous - vendor id based authentication */
    AuthenticationTypeAnonymous = 1,
    
    /** ---------------------------------------------- **/
    /** AuthenticationTypeAuthenticationScreen: Legacy authentication screens view controller. */
    AuthenticationTypeAuthenticationScreen = 100,
    /** AuthenticationTypeAuthenticationAlert: A simple alerts pops up, requesting the user's phone number for validation. */
    AuthenticationTypeAuthenticationAlert = 200,
    /** AuthenticationTypePhoneInjection: The 3rd party developer (using Neura's SDK) already has the phone number of the user and is interested to inject it. */
    AuthenticationTypePhoneInjection = 300
};


/**
 Neura base authentication request.
 Don't use this class directly.
 Use only request classes derived from this base class.
 */
@interface NeuraBaseAuthenticationRequest : NeuraRequest

/**
 Error if the 
 */
@property (nonatomic, readwrite, nullable) NeuraAuthenticationRequestError *error;

/**
 The type of the authentication flow. See AuthenticationType
 */
@property (nonatomic, readwrite) AuthenticationType authenticationType;

/**
 user info
 */
@property (nonatomic, readwrite, nullable) NSDictionary *userInfo;

/**
 Checks if the request is valid.
 If the request is valid, will return YES (and the error property of the request will be nil).
 If the request is invalid, will return NO (and an error will be assigned to the error property of the request).
 
 @return BOOL indicating if the request ia a valid one.
 */
- (BOOL)isValidatedRequest;


@end
