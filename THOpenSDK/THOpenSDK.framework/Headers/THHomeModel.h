//
//  THHomeModel.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/6.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  房间信息

#import <Foundation/Foundation.h>
#import "THCommonModel.h"

@interface THHomeModel : THCommonModel

@property (strong,nonatomic) NSString *homeID;

@property (strong,nonatomic) NSString *name;

@property (strong,nonatomic) NSString *imageUrl;

@end
