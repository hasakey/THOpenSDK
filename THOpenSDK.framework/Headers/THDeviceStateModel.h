//
//  THDeviceStateModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/31.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface THDeviceStateModel : THCommonModel

/// 设备是否在线 0: 不在线 1: 在线
@property (assign,nonatomic) BOOL isOnline;

/// 设备状态 0:关1:开
@property (assign,nonatomic) BOOL state;

@end

NS_ASSUME_NONNULL_END
