//
//  THRoomManager.h
//  THOpenSDK
//
//  Created by will on 2020/7/1.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "THRoomModel.h"
#import "THConstants.h"
#import "THRoomInfoModel.h"

@interface THRoomManager : NSObject

/// 获取房屋下房间列表信息
/// @param completion roomArr：房屋数组
+(void)getRoomsCompletion:(void (^)(NSArray *roomArr,NSError *error))completion;

/// 添加房间
/// @param roomName 房间名称
/// @param roomType 房间类型 默认为默认
/// @param floorNo 传-5到100
/// @param completion 回调 添加成功 返回房间信息
+(void)add:(NSString *)roomName RoomType:(THRoomType)roomType FloorNo:(int)floorNo Completion:(void (^)(THRoomModel *room,NSError *error))completion;

/// 获取房间信息
/// @param room 房间信息
/// @param completion 回调 添加成功 返回房间信息
+(void)getRoomInfo:(THRoomModel *)room Completion:(void (^)(THRoomInfoModel *roomInfo,NSError *error))completion;

/// 删除房间
/// @param room 房间信息
/// @param completion 回调
+(void)deleteRoom:(THRoomModel *)room Completion:(void (^)(NSError *error))completion;

/// 删除房间
/// @param room 房间信息
/// @param roomName 房间名字
/// @param completion 回调
+(void)updateNameRoom:(THRoomModel *)room RoomName:(NSString *)roomName Completion:(void (^)(NSError *error))completion;

/// 房间-设备列表
/// @param room 房间信息
/// @param completion 回调
+(void)getDevices:(THRoomModel *)room Completion:(void (^)(NSArray *deviceArr,NSError *error))completion;

/// 房间-场景列表
/// @param room 房间信息
/// @param completion 回调
+(void)getPatterns:(THRoomModel *)room Completion:(void (^)(NSArray *patternArr,NSError *error))completion;

/// 房间-修改房间归属楼层
/// @param room 房间信息
/// @param floorNo 传-5到100
/// @param completion 回调
+(void)changeFloor:(THRoomModel *)room FloorNo:(int)floorNo Completion:(void (^)(NSError *error))completion;

/// 更新房间类型以及图片
/// @param room 房间信息
/// @param roomType 房间类型
/// @param image 房间图片
/// @param completion 回调
+(void)updateTypeAndImage:(THRoomModel *)room RoomType:(THRoomType)roomType Image:(UIImage *)image Completion:(void (^)(NSError *error))completion;

@end

