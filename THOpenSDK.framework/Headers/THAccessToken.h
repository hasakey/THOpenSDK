//
//  THAccessToken.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/6.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  令牌信息

#import <Foundation/Foundation.h>
#import "THCommonModel.h"

@interface THAccessToken : THCommonModel

/**
*   用户账号登录凭证
*
*/
@property (strong,nonatomic) NSString *AccessToken;

/**
*   用于刷新AccessToken
*
*/
@property (strong,nonatomic) NSString *RefreshToken;

/**
 *  过期时间
 *
 */
@property (strong,nonatomic) NSString *ExpirationTime;


@end

