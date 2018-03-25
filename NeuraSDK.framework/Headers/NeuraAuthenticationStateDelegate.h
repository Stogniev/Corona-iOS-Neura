//
//  NeuraAuthenticationStateDelegate.h
//  NeuraSDK
//
//  Created by Neura on 01/08/2017.
//  Copyright © 2017 Neura. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 NeuraAuthState - The possible authentication flow states.
*/
typedef NS_ENUM(NSUInteger, NeuraAuthState) {
    /** NeuraAuthStateNotAuthenticated: No authenticated */
    NeuraAuthStateNotAuthenticated,
    /** NeuraAuthStateAccessTokenRequested: Finished authentication request successfully, but still waiting for tokens sent by push. */
    NeuraAuthStateAccessTokenRequested,
    /** NeuraAuthStateFailedReceivingAccessToken: Failed receiving tokens by push (and tokens expired). You'll need to retry authenticating. */
    NeuraAuthStateFailedReceivingAccessToken,
    /** NeuraAuthStateAuthenticatedAnonymously: Finished anonymous authentication and received tokens. */
    NeuraAuthStateAuthenticatedAnonymously,
    /** NeuraAuthStateAuthenticated: Finished authentication and received tokens. */
    NeuraAuthStateAuthenticated,
};

