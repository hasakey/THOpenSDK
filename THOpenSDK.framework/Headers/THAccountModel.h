//
//  THAccountModel.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/6.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  账户信息

#import <Foundation/Foundation.h>
#import "THCommonModel.h"

@interface THAccountModel : THCommonModel

/**
 用户姓名
 */
@property (strong,nonatomic) NSString *name;

/**
 用户头像地址
 */
@property (strong,nonatomic) NSString *imageUrl;

/**
 用户手机号码（当前为账号）
 */
@property (strong,nonatomic) NSString *phone;

/**
 用户的邮箱
 */
@property (strong,nonatomic) NSString *mail;

@end

