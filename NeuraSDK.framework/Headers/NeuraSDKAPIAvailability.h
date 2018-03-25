//
//  NeuraSDKAPIAvailability.h
//  NeuraSDK
//
//  Created by Neura on 24/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#if NEURA_INTERNAL_BUILD
#   define DEPRECATED_NEURA_API(s)
#else
#   define DEPRECATED_NEURA_API(s) __attribute__((deprecated(s)))
#endif

