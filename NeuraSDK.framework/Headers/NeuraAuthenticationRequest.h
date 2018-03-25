//
//  NeuraAuthenticationRequest.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraBaseAuthenticationRequest.h"

@class UIViewController;
@class NPermission;

/**
 An object representing an authentication request.
 After creating an instance of this object you pass it to the authenticateWithRequest method of NeuraSDK.shared
 */
@interface NeuraAuthenticationRequest : NeuraBaseAuthenticationRequest

/**
 The phone number of the user. Set this if you are using AuthenticationTypePhoneInjection
 or if you are intereseted to use phone injection in the legacy AuthenticationTypeAuthenticationScreen.
 */
@property (nonatomic, readwrite, nullable) NSString *phone;

/**
 The authentication flow may present authentication user interface, so you need to provide the presenting view controller.
 */
@property (nonatomic, readwrite, nullable) UIViewController *controller;

/**
 (optional) A list of permissions used on authentication.
 If not set, the SDK will get a list of all permissions you enabled on the devsite and will use that list on authentication.
 */
@property (nonatomic, readwrite, nullable) NSArray <NPermission *> *permissions;

/**
 Returns userInfo used in configuration of authentication method in the legacy API.
 This is read only. Use the other properties of NeuraAuthenticationRequest to configure the authentication request.
 */
@property (nonatomic, readonly, nullable) NSDictionary *legacyUserInfo;

/**
 Initialize authentication request with a presenting controller.

 @param controller The view controller that will present authentication related UI.
 @return NeuraAuthenticationRequest instance initialized.
 */
- (nonnull NeuraAuthenticationRequest *)initWithController:(nonnull UIViewController *)controller;


/**
 Initialize authentication request with a presenting controller.

 @param permissions An array of NPermission objects.
 @param controller The view controller that will present authentication related UI.
 @return NeuraAuthenticationRequest instance initialized.
 */
- (nonnull NeuraAuthenticationRequest *)initWithPermissions:(nonnull NSArray <NPermission *> *)permissions
                                                controller:(nonnull UIViewController *)controller;

@end
