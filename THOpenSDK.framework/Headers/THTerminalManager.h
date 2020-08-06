//
//  THTerminalManager.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/11.
//  Copyright © 2019 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THTerminalModel.h"
#import "THTerminalInfoModel.h"

//R系列指示灯——夜间显示
typedef NS_ENUM(NSInteger,TerminalNightShowType) {
    TerminalNightShowTypeAlways,//始终显示
    TerminalNightShowTypeDimShow,//昏暗显示
    TerminalNightShowTypeAlarm,//昏暗不显示，除报警外
};

@interface THTerminalManager : NSObject

/**
 获取房屋下控制器列表(需要设置accessToken及HomeID)

 @param completion 执行回调   terminalArr:房屋下控制器列表
 */
+(void)getTerminalLists:(void (^)(NSArray *terminalArr,NSError *error))completion;

/**
 获取控制器信息(需要设置accessToken及HomeID)

 @param terminalSequence 控制器编号
 @param completion 执行回调   terminal:查询的控制器模型
 */
+(void)getTerminal:(NSString *)terminalSequence completion:(void (^)(THTerminalInfoModel *terminalInfo,NSError *error))completion;

/**
 修改控制器名称(需要设置accessToken及HomeID)

 @param terminalSequence 控制器编号
 @param name 控制器名称（长度不能超过16位，不允许特殊字符）
 @param completion 执行回调
 */
+(void)updateName:(NSString *)terminalSequence Name:(NSString *)name completion:(void (^)(NSError *error))completion;

/**
 获取控制器下全部设备列表，包括启用和未启用设备。(需要设置accessToken及HomeID)

 @param terminalSequence 控制器编号
 @param completion 执行回调   deviceArr:设备模型数组
 */
+(void)getAllDevices:(NSString *)terminalSequence completion:(void (^)(NSArray *deviceArr,NSError *error))completion;

/**
 删除控制器(需要设置accessToken及HomeID)

 @param terminalSequence 控制器编号
 @param completion 执行回调
 */
+(void)deleteTerminal:(NSString *)terminalSequence completion:(void (^)(NSError *error))completion;


@end


