//
//  THOpenSDK.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/4.
//  Copyright © 2019 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface THOpenSDK : NSObject

/**
 *  初始化THOpenSDK
 *  引入版本: 1.0.0Beta1
 *  @param appKey    传入申请的APPKey
 *
 *  @return 返回是否初始化成功
 */
+(BOOL)initLibWithAppKey:(NSString *)appKey secretKey:(NSString *)secretKey;

/**
 设置需要使用的用户的AccessToken（登录获取）

 @param accessToken 用户的AccessToken
 @return 返回是否设置成功
 */
+(BOOL)setAccessToken:(NSString *)accessToken;

/**
 设置需要使用的房屋编号

 @param homeID 房屋编号
 @return 是否设置成功
 */
+(BOOL)setHomeID:(NSString *)homeID;

/**
 设置项目的运行环境

 @param isTestEnviroment YES 测试环境，NO 正式环境
 */
+(void)setConfigEnviroment:(BOOL)isTestEnviroment;

/**
 *  获取THOpenSDK的当前版本号
 *  引入版本: 1.0.0Beta1
 *  @return THOpenSDK的当前版本号
 */
+(NSString *)getOpenSDKVersion;

@end

