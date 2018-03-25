//
//  NeuraLogoutResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"


/**
 NeuraLogoutResult
 
 */
@interface NeuraLogoutResult : NeuraAPIResult
@end

/**
 NeuraLogoutCallback
 
 On a successful logout, all tokens and user/session info will be cleared.
 Otherwise will return an error string.
 */
typedef void (^NeuraLogoutCallback)(NeuraLogoutResult * _Nonnull result);
