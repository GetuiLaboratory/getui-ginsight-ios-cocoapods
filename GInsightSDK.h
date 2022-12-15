//
//  GInsightSDK.h
//  GInsightSDK
//
//  Created by j on 16/5/3.
//  Copyright © 2016年 getui. All rights reserved.
//  version:2.0.0.0

#import <Foundation/Foundation.h>

DEPRECATED_ATTRIBUTE
@protocol GInsightSDKDelegate <NSObject>

@optional
- (void)GInsightSDKDidReceiveGiuid:(NSString *)giUid;
- (void)GInsightSDKDidReceiveError:(NSError *)error;
@end

typedef void(^GISuccessCallback)(NSString *giUid);
typedef void(^GIFailCallback)(NSString *failInfo);

@interface GInsightSDK : NSObject

/**
 *  初始化GInsightSDK（已废弃，请使用 [startSDK:channel:onSuccess:onFail:] ）
 *
 *  @param appId    应用在个推登记的APPID
 *  @param channel  渠道名称
 *  @param delegate 回调代理委托
 */
+ (void)startSDKWithAppId:(NSString *)appId channel:(NSString *)channel delegate:(id<GInsightSDKDelegate>)delegate DEPRECATED_MSG_ATTRIBUTE("Please use [startSDK:channel:onSuccess:onFail:] instead");


/**
 初始化GInsightSDK

 @param appId 应用在个推登记的APPID
 @param channel 渠道名称
 @param success 成功回调，返回cid
 @param fail 错误回调，返回错误信息
 */
+ (void)startSDK:(NSString *)appId channel:(NSString *)channel onSuccess:(GISuccessCallback)success onFail:(GIFailCallback)fail;

/**
 *  获取GInsightSDK版本号
 *
 *  @return GInsightSDK 版本号
 */
+ (NSString *)version;
@end
