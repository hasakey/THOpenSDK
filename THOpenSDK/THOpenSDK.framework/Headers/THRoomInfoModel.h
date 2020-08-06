//
//  THRoomInfoModel.h
//  THOpenSDK
//
//  Created by will on 2020/7/24.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THCommonModel.h"
#import "THConstants.h"

@interface THRoomInfoModel : THCommonModel

/// 房间编号
@property (strong,nonatomic) NSString *roomNo;

/// 房间名字
@property (strong,nonatomic) NSString *name;

/// 房间类型
@property (assign,nonatomic) THRoomType type;

/// 楼层
@property (strong,nonatomic) NSString *floorNo;

/// 是否为自定义照片
@property (assign,nonatomic) bool isCustomImage;

/// 自定义照片地址
@property (strong,nonatomic) NSString *customImageURL;

/// 是否是默认房间
@property (assign,nonatomic) BOOL isDefault;


@end

