//
//  THTerminalInfoModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/23.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"

@interface THTerminalInfoModel : THCommonModel

/// 控制器编号
@property (strong,nonatomic) NSString *terminalSequence;

/// 控制器名字
@property (strong,nonatomic) NSString *name;

/// 前缀
@property (strong,nonatomic) NSString *prefix;

/// 安装位置图片路径（多路径以分号隔开）
@property (strong,nonatomic) NSString *siteImageUrl;

/// 安装位置描述
@property (strong,nonatomic) NSString *siteDescribe;

/// 产品类型唯一标识
@property (strong,nonatomic) NSString *productModel;

///     8位产品序列号
@property (strong,nonatomic) NSString *thinkID;

///     产品类别
@property (strong,nonatomic) NSString *productType;

///     生产商Logo路径
@property (strong,nonatomic) NSString *producerLogoUrl;

///     生产商大Logo路径
@property (strong,nonatomic) NSString *producerLogoScsUrl;

///     产品图标路径
@property (strong,nonatomic) NSString *productLogoUrl;

///     产品图片路径
@property (strong,nonatomic) NSString *productImgUrl;

///     产品类型所占比重
@property (strong,nonatomic) NSString *percent;

///     顺序编号
@property (strong,nonatomic) NSString *orderNo;

///    主控制器序列号
@property (strong,nonatomic) NSString *masterSequence;

///    是否从机 0:否 1: 是
@property (strong,nonatomic) NSString *isSlave;

///    当前硬件版本
@property (strong,nonatomic) NSString *curVersion;

///    是否有硬件版本更新
@property (strong,nonatomic) NSString *hasUpgrade;

@end

