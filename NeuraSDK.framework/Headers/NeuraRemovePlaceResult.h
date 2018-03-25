//
//  NeuraRemovePlaceResult.h
//  NeuraSDK
//
//  Created by Neura on 04/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//

#import "NeuraAPIResult.h"


/**
 The result of a remove place request.
 */
@interface NeuraRemovePlaceResult : NeuraAPIResult

@end

/**
 Convenience block for callback
 
 @param result Result object received from add place call
 */
typedef void (^NeuraRemovePlaceCallback)(NeuraRemovePlaceResult * _Nonnull result);

