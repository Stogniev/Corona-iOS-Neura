//
//  NeuraPermissionsListResult.h
//  NeuraSDK
//
//  Created by Neura on 30/11/2016.
//  Copyright © 2016 Neura. All rights reserved.
//
#import "NeuraAPIResult.h"

@class NPermission;
@class NEvent;

/**
 NeuraPermissionsListResult
 
 permissions - A list of NPermission objects.
 error - May include an error if an error encountered during the request to the server or while parsing the response.
 */
@interface NeuraPermissionsListResult : NeuraAPIResult
@property (nonatomic, nonnull, readonly) NSArray<NPermission *> *permissions;
@property (nonatomic, nonnull ,readonly) NSDictionary<NSString *,NEvent *> *eventsByName;
@end

/**
 NeuraPermissionsListCallback
 
 Result callback, returning a NeuraPermissionsListResult
 Will return an neura api error object, if any error encountered during the retrieval of the permissions array.
 */
typedef void (^NeuraPermissionsListCallback)(NeuraPermissionsListResult * _Nonnull result);
