//
//  THDeviceManager.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/11.
//  Copyright © 2019 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THDeviceModel.h"
#import "THDeviceInfoModel.h"
#import <UIKit/UIKit.h>
#import "THConstants.h"
#import "THDeviceStateModel.h"
#import "THDeviceTypeNameModel.h"

@interface THDeviceManager : NSObject

/// 获取设备单个信息
/// @param device 设备
/// @param completion 回调 返回设备信息
+(void)getDevice:(THDeviceModel *)device Completion:(void (^)(THDeviceInfoModel *deviceInfo,NSError *error))completion;


/// 更新设备名称
/// @param device 设备
/// @param deviceName 设备名称
/// @param completion 回调 返回设备信息
+(void)updateName:(THDeviceModel *)device DeviceName:(NSString *)deviceName Completion:(void (^)(NSError *error))completion;

/// 更新设备房间
/// @param device 设备
/// @param roomNo 设备名称
/// @param completion 回调 返回设备信息
+(void)updateRoom:(THDeviceModel *)device RoomNo:(NSString *)roomNo Completion:(void (^)(NSError *))completion;

/// 设备停启用
/// @param device 设备
/// @param isUse 停启用
/// @param completion 回调 返回设备信息
+(void)stopOrEnable:(THDeviceModel *)device IsUse:(BOOL)isUse Completion:(void (^)(NSError *))completion;


/// 获取房下全部设备操作指令
/// @param completion 回调
+(void)getAllDeviceCmdsCompletion:(void (^)(NSArray *deviceCmds,NSError *error))completion;

/// 获取设备状态（全部）
/// @param completion 回调
+(void)getStates:(void (^)(NSArray *deviceStates,NSError *error))completion;

/// 获取设备单个状态
/// @param device 设备
/// @param completion 回调 返回设备信息
+(void)getState:(THDeviceModel *)device Completion:(void (^)(THDeviceStateModel *deviceState,NSError *error))completion;

/// 获取设备单个操作指令
/// @param device 设备
/// @param completion 回调 返回设备信息
+(void)getCmd:(THDeviceModel *)device Completion:(void (^)(NSDictionary *deviceCmd,NSError *error))completion;

/// 更新设备图片
/// @param device 设备
/// @param image 房间图片
/// @param completion 回调
+(void)updateImage:(THDeviceModel *)device Image:(UIImage *)image Completion:(void (^)(NSError *error))completion;


/// 设备操作
/// @param device 设备信息
/// @param operationType 类型
/// @param value 具体设计设备的值 可为空字符串 （如果是红外类和无线类key的值需要通过value传进来）
/// @param completion 回调
+(void)deviceOperation:(THDeviceModel *)device OperationType:(THOperationType)operationType Value:(NSString *)value Completion:(void (^)(NSError *error))completion;


/// 查询是否是可控制设备
/// @param device 设备信息
/// @param completion 回调 isControl YES可控制 NO为不可控制
+(void)isControlDevice:(THDeviceModel *)device Completion:(void (^)(BOOL isControl,NSError *error))completion;


/// 获取单个设备类型名字  可以根据自己需要，针对类型自定义名字
/// @param device 设备信息
/// @param completion 回调
+(void)getDeviceTypeName:(THDeviceModel *)device Completion:(void (^)(NSString *typeName,NSError *error))completion;



/// 获取当前设备可以设置的类型
/// @param device 设备信息
/// @param completion 回调
+(void)getDeviceAllTypeName:(THDeviceModel *)device Completion:(void (^)(NSArray *typeData,NSError *error))completion;

/// 更新设备类型
/// @param device 设备
/// @param subType 设备中类   设备中类(详情请参考附录4.8) 原设备大类为00001,00002,00003,00004,00005,00009时可以更改中类类型
/// @param completion 回调
+(void)changeSubType:(THDeviceModel *)device subType:(NSString *)subType Completion:(void (^)(NSError *error))completion;

@end


