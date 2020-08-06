//
//  THAccountManager.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/4.
//  Copyright © 2019 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THAccessToken.h"
#import "THAccountModel.h"


@interface THAccountManager : NSObject

/**
 注册账户

 @param account 用户账户（手机号）
 @param password 用户密码（位数限制：6-20位）
 @param verifyCode 注册账户的验证码
 @param completion 执行结果回调
 */
+(void)accountRegister:(NSString *)account password:(NSString *)password verifyCode:(NSString *)verifyCode completion:(void (^)(NSError *error))completion;

/**
 获取注册账户的验证码

 @param receiver 接收验证码的账户（手机号）
 @param completion 执行结果回调
 */
+(void)getRegisterCode:(NSString *)receiver completion:(void (^)(NSError *error))completion;

/**
 获取重置密码的验证码

 @param receiver 接收验证码的账户（手机号）
 @param completion 执行结果回调
 */
+(void)getResetCode:(NSString *)receiver completion:(void (^)(NSError *error))completion;

/**
 重置密码

 @param account 待重置密码的账户（手机号）
 @param password 新的密码（位数限制：6-20位）
 @param verifyCode 重置密码的验证码
 @param completion 执行结果回调
 */
+(void)resetPassword:(NSString *)account password:(NSString *)password verifyCode:(NSString *)verifyCode completion:(void (^)(NSError *error))completion;

/**
 获取账户信息(需要设置accessToken)

 @param completion 执行结果回调 accountModel：账户信息模型
 */
+(void)getInfo:(void (^)(THAccountModel *accountModel,NSError *error))completion;


/// 获取账户下房屋列表信息
/// @param completion homeArr：房屋数组
+(void)getHomes:(void (^)(NSArray *homeArr,NSError *error))completion;

@end

