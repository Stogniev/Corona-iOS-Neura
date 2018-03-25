//
//  NeuraAuthenticationRequestError.h
//  NeuraSDK
//
//  Created by Neura on 27/07/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import "NeuraAPIError.h"

// Put the List of domains of possible request errors
extern NSErrorDomain _Nonnull const NeuraAuthenticationRequestErrorDomain;

@interface NeuraAuthenticationRequestError : NeuraAPIError

@end
