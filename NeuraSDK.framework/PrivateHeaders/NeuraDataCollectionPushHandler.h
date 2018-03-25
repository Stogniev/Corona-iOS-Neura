//
//  NeuraDataCollectionPushHandler.h
//  NeuraSDK
//
//  Created by Neura on 15/02/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NeuraDataCollectionPushHandler : NSObject

+ (BOOL)handleNotificationWithInfo:(NSDictionary *)info;

@end
