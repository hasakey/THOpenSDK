//
//  THAuthorizeManager.m
//  THOpenSDK
//
//  Created by will on 2020/7/7.
//  Copyright © 2020 ThinkHome. All rights reserved.
//

#import "THAuthorizeManager.h"
#import "THAuthorizeVC.h"
#import "THAlertData.h"
#import "THConstants.h"

typedef void(^AuthorizeManagerBlock) (THAccessToken *accessToken, NSError *error);

@interface THAuthorizeManager()

@end

@implementation THAuthorizeManager

+(void)authorizeWithClientID:(NSString *)clientID RedirectUrl:(NSString *)redirectUrl Completion:(void (^)(THAccessToken *accessToken, NSError *error))completion{
    [self gotoLoginWithClientID:clientID RedirectUrl:redirectUrl Block:completion];
}

+(void)gotoLoginWithClientID:(NSString *)clientID RedirectUrl:(NSString *)redirectUrl Block:(AuthorizeManagerBlock)block{
    UIViewController *currentVC = [self getCurrentVC];
    THAuthorizeVC *authorizeVC = [THAuthorizeVC new];
    authorizeVC.client_id =clientID;
    authorizeVC.redirect_url = redirectUrl;
    authorizeVC.modalPresentationStyle = UIModalPresentationFullScreen;
    authorizeVC.block = ^(BOOL login, THAccessToken *accessToken) {
        if (login) {
            block(accessToken,nil);
        }else{
            block(accessToken,[THAlertData getAlertError:TH_AUTHORIZATION_FAILURE]);
        }
    };
    [currentVC presentViewController:authorizeVC animated:YES completion:nil];
}

+ (UIViewController *)getCurrentVC {
    UIViewController *result = nil;
    UIWindow * window = [[UIApplication sharedApplication] keyWindow];
    if (window.windowLevel != UIWindowLevelNormal) {
        NSArray *windows = [[UIApplication sharedApplication] windows];
        for(UIWindow * tmpWin in windows) {
            if (tmpWin.windowLevel == UIWindowLevelNormal) {
                window = tmpWin;
                break;
            }
        }
    }
    UIView *frontView = [[window subviews] objectAtIndex:0];
    id nextResponder = [frontView nextResponder];
    if ([nextResponder isKindOfClass:[UIViewController class]]) {
        result = nextResponder;
    } else {
        result = window.rootViewController;
    }
    return result;
}

@end
