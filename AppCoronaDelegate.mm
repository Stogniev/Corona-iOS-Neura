//
//  AppCoronaDelegate.mm
//  TemplateApp
//
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import "AppCoronaDelegate.h"

#import <CoronaRuntime.h>
#import <CoronaLua.h>
#import <NeuraSDK/NeuraSDK.h>


@implementation AppCoronaDelegate

- (void)willLoadMain:(id<CoronaRuntime>)runtime
{


}

- (void)didLoadMain:(id<CoronaRuntime>)runtime
{
    
}


#pragma mark UIApplicationDelegate methods

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    NeuraSDK.shared.appUID = @"4890d43a33b0479929abcebc54edb1a8e305bb9b21d705081b091e1b316da5b5";
    NeuraSDK.shared.appSecret = @"bd8eafae11ec34f523fbc4949b357b906ac35dd49615c5587b5530cd0e9f90ba";
    
    NSLog(@"- did finish launch");
    
    
    [self requestPermissionForPushNotifications];
    

    return YES;
}

- (void)requestPermissionForPushNotifications {
    UIApplication *application = [UIApplication sharedApplication];
    UIUserNotificationType userNotificationTypes = (UIUserNotificationTypeAlert |
                                                    UIUserNotificationTypeBadge |
                                                    UIUserNotificationTypeSound);
    UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:userNotificationTypes categories:nil];
    [application registerUserNotificationSettings:settings];
    [application registerForRemoteNotifications];
}

- (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
    [NeuraSDK.shared collectDataForBGFetchWithResult:^(UIBackgroundFetchResult collectDataResult) {
        completionHandler(collectDataResult);
    }];
     NSLog(@"- performFetchWithCompletionHandler");
}


- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(nonnull NSData *)deviceToken {
    [NeuraSDKPushNotification registerDeviceToken:deviceToken];
//         let token: String = deviceToken.map { String(format: "%02.2hhx", $0) }.joined()        print("👍 ", String(describing: type(of: self)),":", #function, "\n", token)}
    NSLog(@"deviceToken: %@", deviceToken);
    NSString * token = [NSString stringWithFormat:@"%@", deviceToken];
    //Format token as you need:
    token = [token stringByReplacingOccurrencesOfString:@" " withString:@""];
    token = [token stringByReplacingOccurrencesOfString:@">" withString:@""];
    token = [token stringByReplacingOccurrencesOfString:@"<" withString:@""];
    
    NSLog(@"- didRegisterForRemoteNotificationsWithDeviceToken = %@", token);
    
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error {
    NSLog(@">>> Error with registering for remote notifications: %@", error);
    NSLog(@"Please check that you set everything right for supporting push notifications on iOS dev center");
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(nonnull void (^)(UIBackgroundFetchResult))completionHandler {
      NSLog(@"- didReceiveRemoteNotification");
    

    if ([NeuraSDKPushNotification handleNeuraPushWithInfo:userInfo fetchCompletionHandler:completionHandler]) {
        // A Neura notification was consumed and handled.
        // The SDK will call the completion handler.

        return;
    }

    // Handle your own remote notifications here.
    // . . .
    
    // Don't forget to call the completion handler!
    completionHandler(UIBackgroundFetchResultNoData);
}

// The following are stubs for common delegate methods. Uncomment and implement
// the ones you wish to be called. Or add additional delegate methods that
// you wish to be called.

/*
- (void)applicationWillResignActive:(UIApplication *)application
{
	// Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
	// Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}
*/

/*
- (void)applicationDidEnterBackground:(UIApplication *)application
{
	// Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
	// If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}
*/

/*
- (void)applicationWillEnterForeground:(UIApplication *)application
{
	// Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}
*/

/*
- (void)applicationDidBecomeActive:(UIApplication *)application
{
	// Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}
*/

/*
- (void)applicationWillTerminate:(UIApplication *)application
{
	// Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}
*/

@end
