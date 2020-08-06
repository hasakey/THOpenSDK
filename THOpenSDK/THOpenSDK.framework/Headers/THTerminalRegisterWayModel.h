//
//  THTerminalRegisterWayModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/9.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"
#import "THConstants.h"

@interface THTerminalRegisterWayModel : THCommonModel

/**
*  注册方式
*
*/
@property (assign,nonatomic) THTerminalRegisterWay regWay;


/**
*   产品类型唯一标识
*
*/
@property (strong,nonatomic) NSString *productModel;

/**
*   ThinkHome产品序列号
*
*/
@property (strong,nonatomic) NSString *thinkID;


/**
*   是否已经被该账户绑定过 1表示被注册，0表示未被注册
*
*/
@property (assign,nonatomic) BOOL isActive;


@end

