//
//  THAuthorizeManager.h
//  THOpenSDK
//
//  Created by will on 2020/7/7.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THAccessToken.h"

@interface THAuthorizeManager : NSObject

/// 获取授权 此方法必须要先设置rootView
/// @param clientID 客户端ID
/// @param redirectUrl 重定向地址
/// @param completion 回调方法
+(void)authorizeWithClientID:(NSString *)clientID RedirectUrl:(NSString *)redirectUrl Completion:(void (^)(THAccessToken *accessToken, NSError *error))completion;


@end

