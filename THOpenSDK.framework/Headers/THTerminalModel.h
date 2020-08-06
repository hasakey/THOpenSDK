//
//  THTerminalModel.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/10.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  控制器信息

#import <Foundation/Foundation.h>
#import "THCommonModel.h"

@interface THTerminalModel : THCommonModel

@property (strong,nonatomic) NSString *connMAC;

@property (strong,nonatomic) NSString *coordSequence;

@property (strong,nonatomic) NSString *curVersion;

@property (strong,nonatomic) NSString *hasUpgrade;

@property (strong,nonatomic) NSString *isSlave;

@property (strong,nonatomic) NSString *manufacturerName;

@property (strong,nonatomic) NSString *masterSequence;

@property (strong,nonatomic) NSString *modelName;

@property (strong,nonatomic) NSString *name;

@property (strong,nonatomic) NSString *orderNo;

@property (strong,nonatomic) NSString *percent;

@property (strong,nonatomic) NSString *prefix;

@property (strong,nonatomic) NSString *producerLogoScsUrl;

@property (strong,nonatomic) NSString *producerLogoUrl;

@property (strong,nonatomic) NSString *productImgUrl;

@property (strong,nonatomic) NSString *productLogoUrl;

@property (strong,nonatomic) NSString *productModel;

@property (strong,nonatomic) NSString *productType;

@property (strong,nonatomic) NSString *siteDescribe;

@property (strong,nonatomic) NSString *siteImageUrl;

@property (strong,nonatomic) NSString *terminalSequence;

@property (strong,nonatomic) NSString *thinkID;

@end

