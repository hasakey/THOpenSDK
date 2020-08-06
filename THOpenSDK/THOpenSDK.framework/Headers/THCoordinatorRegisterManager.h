//
//  THCoordinatorRegisterManager.h
//  THOpenSDK
//
//  Created by will on 2020/7/6.
//  Copyright © 2020 ThinkHome. All rights reserved.
//  配网SDK

#import <Foundation/Foundation.h>
#import "THTerminalRegisterWayModel.h"
#import "THTerminalModel.h"

@interface THCoordinatorRegisterManager : NSObject

/// 控制器注册方式
/// @param thinkIDStr 产品序列号(thinkID)
/// @param completion 回调block
+(void)registerWay:(NSString *)thinkIDStr Completion:(void (^)(THTerminalRegisterWayModel *registerWayModel,NSError *error))completion;

/// 判断控制器连接状态
/// @param thinkIDStr 产品序列号(thinkID)
/// @param completion 回调block error为空表示连接上
+(void)checkLineConnected:(NSString *)thinkIDStr Completion:(void (^)(NSError *error))completion;

/// 根据MAC 地址获取产品序列号
/// @param mac 应用客户端 mac 地址 例： AC:CF:23:63:D7:63
/// @param completion 回调block
+(void)getThinkIDByMac:(NSString *)mac Completion:(void (^)(NSString *thinkID,NSError *error))completion;

/// 添加控制器
/// @param thinkIDStr 控制器编号
/// @param completion 回调block terminalModel返回控制器信息
+(void)registerTerminal:(NSString *)thinkIDStr Completion:(void (^)(NSArray *terminalModels,NSError *error))completion;


/// smartAP
/// @param wifiName wifiName
/// @param wifiPassword wifiPassword
/// @param callback 回调block ret 表示成功与否 并且返回mac
+(void)smartAP:(NSString *)wifiName wifiPassword:(NSString *)wifiPassword Result:(void (^)(BOOL ret, NSString *mac))callback;


/// smartLink
/// @param wifiName wifi名字
/// @param wifiPassword wifi密码
/// @param callback 回调block ret 表示成功与否 并且返回mac
+(void)smartLink:(NSString *)wifiName wifiPassword:(NSString *)wifiPassword Result:(void (^)(BOOL ret, NSString *mac))callback;


@end

