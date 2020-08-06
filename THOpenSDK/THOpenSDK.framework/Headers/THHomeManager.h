//
//  THHouseManager.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/11.
//  Copyright © 2019 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THHomeModel.h"

@interface THHomeManager : NSObject

/**
 新增房屋(需要设置accessToken)

 @param name 房屋名称（长度不能超过16位，不允许特殊字符）
 @param completion 执行回调 house:新增房屋模型
 */
+(void)add:(NSString *)name Completion:(void (^)(THHomeModel *home,NSError *error))completion;

/**
 获取房屋信息(需要设置accessToken)
 
 @param completion 执行回调 house:新增房屋模型
 */
+(void)getInfoCompletion:(void (^)(THHomeModel *home,NSError *error))completion;

/**
 修改房屋名称(需要设置accessToken及HomeID)

 @param name 房屋名称（长度不能超过16位，不允许特殊字符）
 @param completion 执行回调
 */
+(void)changeName:(NSString *)name Completion:(void (^)(NSError *error))completion;

/**
 删除房屋(需要设置accessToken)

 @param homeID 待删除的房屋编号
 @param completion 执行回调
 */
+(void)deleteHome:(NSString *)homeID completion:(void (^)(NSError *error))completion;

/// 获取楼层下设备列表信息
/// @param completion homeArr：房屋数组
+(void)getDevicesCompletion:(void (^)(NSArray *deviceArr,NSError *error))completion;

@end

