//
//  THFloorManager.h
//  THOpenSDK
//
//  Created by will on 2020/7/21.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THFloorManager : NSObject

/// 获取房屋下楼层列表信息
/// @param completion homeArr：房屋数组
+(void)getFloors:(void (^)(NSArray *floorArr,NSError *error))completion;

/// 获取楼层下房间列表信息
/// @param floorNo 楼层编号
/// @param completion homeArr：房屋数组
+(void)getRooms:(NSString *)floorNo Completion:(void (^)(NSArray *roomArr,NSError *error))completion;

/// 获取楼层下设备列表信息
/// @param floorNo 楼层编号
/// @param completion homeArr：房屋数组
+(void)getDevices:(NSString *)floorNo Completion:(void (^)(NSArray *deviceArr,NSError *error))completion;

/// 获取楼层下场景列表信息
/// @param floorNo 楼层编号
/// @param completion homeArr：房屋数组
+(void)getPatterns:(NSString *)floorNo Completion:(void (^)(NSArray *patternArr,NSError *error))completion;

@end

