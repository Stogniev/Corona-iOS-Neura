//
//  NotificationService.m
//  Notifications
//
//  Created by Aviv Wolf on 15/10/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NotificationService.h"

@interface NotificationService ()

@property (nonatomic, strong) void (^contentHandler)(UNNotificationContent *contentToDeliver);
@property (nonatomic, strong) UNMutableNotificationContent *mutableContent;

@end

@implementation NotificationService

- (void)didReceiveNotificationRequest:(UNNotificationRequest *)request withContentHandler:(void (^)(UNNotificationContent * _Nonnull))contentHandler {
    self.contentHandler = contentHandler;
    self.mutableContent = [request.content mutableCopy];
    
    NSLog(@"SUKA NAHUY");
    
    NSDictionary *pushData = request.content.userInfo[@"data"][@"pushData"];
    NSString *pushType = request.content.userInfo[@"data"][@"pushType"];
    NSNumber *timestampNumber = pushData[@"event"][@"timestamp"];
    NSString *eventId = pushData[@"event"][@"neuraId"];
    NSString *eventName = pushData[@"event"][@"name"];

    // Title
    if ([pushType isEqualToString:@"neura_event"]) {
        self.mutableContent.title = @"Neura Event!";
    }

    // Subtitle
    if ([timestampNumber isKindOfClass:[NSNumber class]]) {
        NSString *timestampString = [self formattedTimestamp:timestampNumber];
        if (timestampString) self.mutableContent.subtitle = timestampString;
    }
    
    // Body
    if (eventName != nil && eventId != nil) {
        self.mutableContent.body = [NSString stringWithFormat:@"%@ (%@)", eventName, eventId];
    }
    
    self.contentHandler(self.mutableContent);
}

- (void)serviceExtensionTimeWillExpire {
    // Called just before the extension will be terminated by the system.
    // Use this as an opportunity to deliver your "best attempt" at modified content, otherwise the original push payload will be used.
    self.contentHandler(self.mutableContent);
}

- (NSString *)formattedTimestamp:(NSNumber *)timestampNumber {
    NSTimeInterval timestamp = [timestampNumber integerValue];
    NSDate *theDate = [NSDate dateWithTimeIntervalSince1970:timestamp];
    NSDateFormatter *formatter = [NSDateFormatter new];
    formatter.timeZone = [NSTimeZone systemTimeZone];
    formatter.dateFormat = @"dd/MM/yyyy HH:mm:ss (z)";
    NSString *timeString = [formatter stringFromDate:theDate];
    return timeString;
}


@end
