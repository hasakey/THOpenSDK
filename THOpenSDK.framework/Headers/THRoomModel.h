//
//  THRoomModel.h
//  THOpenSDK
//
//  Created by will on 2020/6/30.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "THCommonModel.h"
#import "THConstants.h"

@interface THRoomModel : THCommonModel

@property (strong,nonatomic) NSString *roomNo;

@property (strong,nonatomic) NSString *name;

@property (assign,nonatomic) THRoomType type;

@property (strong,nonatomic) NSString *floorNo;

@property (assign,nonatomic) BOOL isCustomImage;

@property (strong,nonatomic) NSString *customImageURL;

@property (assign,nonatomic) BOOL isDefault;

@property (assign,nonatomic) BOOL isFavorties;

@property (strong,nonatomic) NSString *homestayShareCount;

@property (strong,nonatomic) NSString *orderNo;

@property (strong,nonatomic) NSString *sortName;

@property (strong,nonatomic) NSString *areaSettingImageURL;

@end

