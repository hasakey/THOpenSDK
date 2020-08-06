//
//  THDeviceModel.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/10.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  设备信息

#import <Foundation/Foundation.h>
#import "THCommonModel.h"

@interface THDeviceModel : THCommonModel

@property (strong , nonatomic) NSString *deviceNo;

@property (strong , nonatomic) NSString *name;

@property (strong , nonatomic) NSString *type;

@property (strong , nonatomic) NSString *subType;

@property (strong , nonatomic) NSString *roomNo;

@property (strong , nonatomic) NSString *roomName;

@property (strong , nonatomic) NSString *floorNo;

@property (strong , nonatomic) NSString *terminalSequence;
//数值
@property (strong , nonatomic) NSString *value;

/// 设备是否在线 0: 不在线 1: 在线
@property (assign,nonatomic) BOOL isOnline;

/// 设备状态 0:关1:开
@property (assign,nonatomic) BOOL state;

@property (assign , nonatomic) BOOL isCustomImage;

@property (strong , nonatomic) NSString *customImageURL;

@property (strong , nonatomic) NSString *defaultName;

@property (strong , nonatomic) NSString *orderNo;

@property (assign , nonatomic) BOOL isUse;

@end

