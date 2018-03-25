//
//  NeuraAPIError.h
//  NeuraSDK
//
//  Created by Neura on 24/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSErrorDomain _Nonnull const NeuraAPIErrorDomain;

@interface NeuraAPIError : NSError

+(nullable instancetype)errorWithString:(nullable NSString *)errorString
                                 domain:(nonnull NSString *)domain
                               userInfo:(nullable NSDictionary *)userInfo;

+(nullable instancetype)errorWithString:(nullable NSString *)errorString
                               userInfo:(nullable NSDictionary *)userInfo;

-(nonnull NSString *)description;

@end
