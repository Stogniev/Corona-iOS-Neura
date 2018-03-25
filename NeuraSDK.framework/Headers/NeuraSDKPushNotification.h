//
//  NeuraSDKPushNotification.h
//  NeuraSDK
//
//  Created by Neura on 01/05/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 An app integrating Neura's SDK must support receiving push messages.
 
 Silent push messages are used as part of the data collection mechanism.
 
 The following steps will get you started:
 
 */
@interface NeuraSDKPushNotification : NSObject

/**
 Called to support the default configuration of Neura's push notifications mechanism.
 By default, this is called automatically for you after the user finishes a successfull authentication process.
 
 1) If you choose, you may call this method explicitly even before the authentication flow, allowing the user to agree to receive push notification earlier.
    This option allows you to control when to ask the user if she is interested to receive push notifications.
 
 2) If you want to explicitly configure push notifications in your app, you can set the setupDefaultPushNotificationsSupport flag to NO on the NeuraAuthenticationRequest object.
 
 Behind the scenes, this method doesn't do anything special. It just calls:
 if ([[UIApplication sharedApplication] isRegisteredForRemoteNotifications] == NO) {
    .
    .
    .
    [[UIApplication sharedApplication] registerUserNotificationSettings:settings];
    [[UIApplication sharedApplication] registerForRemoteNotifications];
 }
 With these notification types in the settings: UIUserNotificationTypeAlert, UIUserNotificationTypeBadge, UIUserNotificationTypeSound.
 
 Neura is using silent push messages as part of the data collection processes.
 You can implement the push configuration on your own, by changing the flag setupDefaultPushNotificationsSupport on the authentication request object and calling
 [[UIApplication sharedApplication] registerForRemoteNotifications] on your own. 
 Just keep in mind you must call this, or Neura's data collection will not work as designed.
 */
+ (void)setupDefaultPushNotificationsSupport;

/**
 Informs Neura's server about the push token.
 Also stores locally the token as string (use getDeviceToken to get the stored value).
 You must call this in application:didRegisterForRemoteNotificationsWithDeviceToken: for Neura's data collection to work as designed.
 
 @param token NSData token data exactly as received in application:didRegisterForRemoteNotificationsWithDeviceToken:
 */
+ (void)registerDeviceToken:(NSData *)token;

/**
 Informs Neura's server about the push token.
 Also stores locally the token as string (use getDeviceToken to get the stored value).
 You must call this in application:didRegisterForRemoteNotificationsWithDeviceToken: for Neura's data collection to work as designed.
 
 @param tokenString string NSString token received in application:didRegisterForRemoteNotificationsWithDeviceToken: and converted to string.
 */
+ (void)registerDeviceTokenString:(NSString *)tokenString;


/**
 Given a device token NSData object (as received in application:didRegisterForRemoteNotificationsWithDeviceToken:)
 converts it to a string representation of that token.

 @param deviceToken NSData object as received in application:didRegisterForRemoteNotificationsWithDeviceToken:
 @return NSString representation of the device token.
 */
+ (NSString *)deviceTokenStringFromData:(NSData *)deviceToken;

/**
 Get the registered push token as string.

 @return NSString of the registered device/push token.
 */
+ (NSString *)getDeviceToken;

/**
 Handle a remote push notification.

 @param info The user info of the notification.
 @param completionHandler A completion handler that must be called after handling the notification.
 @return YES if the info was handled as a Neura push notification. In that case, the SDK will call the completion handler.
         NO if the notification is not related to the Neura SDK. In that case, you will need to call the completion handler yourself.
 */
+ (BOOL)handleNeuraPushWithInfo:(NSDictionary *)info fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

+ (void)sendDeviceTokenIfRequire;

@end
