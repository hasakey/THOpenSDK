//
//  THDeviceInfoModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/27.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"

@interface THDeviceInfoModel : THCommonModel

/// 设备编号
@property (strong,nonatomic) NSString *deviceNo;
/// 设备名称
@property (strong,nonatomic) NSString *name;
/// 设备大类
@property (strong,nonatomic) NSString *type;
/// 设备中类
@property (strong,nonatomic) NSString *subType;
/// 归属房间号
@property (strong,nonatomic) NSString *roomNo;
/// 归属房间名称
@property (strong,nonatomic) NSString *roomName;
/// 归属楼层号
@property (strong,nonatomic) NSString *floorNo;
/// 控制器序列号
@property (strong,nonatomic) NSString *terminalSequence;
/// 设备值具体内容格式见附录4.3
@property (strong,nonatomic) NSString *value;
/// 传感类设备的状态值
@property (strong,nonatomic) NSString *sensorState;

/// 设备是否在线 0: 不在线 1: 在线
@property (assign,nonatomic) BOOL isOnline;

/// 设备状态 0:关1:开
@property (assign,nonatomic) BOOL state;

/// 是否自定义图片 0:默认1：自定义
@property (assign,nonatomic) BOOL isCustomImage;

/// 自定义图片路径
@property (strong,nonatomic) NSString *customImageURL;

/// 设备默认名称
@property (strong,nonatomic) NSString *defaultName;

/// 顺序编号(全部)
@property (strong,nonatomic) NSString *orderNo;

/// 是否启用 0 ：未启用 1:启用
@property (assign,nonatomic) BOOL isUse;

@end

