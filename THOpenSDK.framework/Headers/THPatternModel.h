//
//  THPatternModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/22.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"

@interface THPatternModel : THCommonModel


/// 场景编号
@property (strong,nonatomic) NSString *patternNo;

/// 场景类型
@property (strong,nonatomic) NSString *type;

/// 场景所属类型
@property (strong,nonatomic) NSString *belongType;

/// 场景所属编号
@property (strong,nonatomic) NSString *belongTypeNo;

/// 场景名称
@property (strong,nonatomic) NSString *name;

/// 是否有自定义照片
@property (assign,nonatomic) BOOL isCustomImage;

/// 自定义照片地址
@property (strong,nonatomic) NSString *customImageURL;

/// 是否隐藏
@property (assign,nonatomic) BOOL isHidden;

@end

