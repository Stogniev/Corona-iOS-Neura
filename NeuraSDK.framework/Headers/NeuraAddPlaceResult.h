//
//  NeuraAddPlaceResult.h
//  NeuraSDK
//
//  Created by Youval Vaknin on 07/03/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NeuraAPIResult.h"

/**
 Result object for adding a new place
 */
@interface NeuraAddPlaceResult : NeuraAPIResult
@property (nonatomic, readonly, nullable) NSString *neuraId;
@end

/**
 Convenience block for callback

 @param result Result object received from add place call
 */
typedef void (^NeuraAddPlaceCallback)(NeuraAddPlaceResult * _Nonnull result);
