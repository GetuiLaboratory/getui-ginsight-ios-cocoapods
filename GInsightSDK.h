//
//  GInsightSDK.h
//  GInsightSDK
//
//  Created by j on 16/5/3.
//  Copyright © 2016年 getui. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GInsightSDKDelegate <NSObject>

@optional
- (void)GInsightSDKDidReceiveGiuid:(NSString *)giUid;
- (void)GInsightSDKDidReceiveError:(NSError *)error;
@end

@interface GInsightSDK : NSObject
/**
 *  初始化GInsightSDK
 *
 *  @param appId    应用在个推登记的APPID
 *  @param channel  渠道名称
 *  @param delegate 回调代理委托
 */
+ (void)startSDKWithAppId:(NSString *)appId channel:(NSString *)channel delegate:(id<GInsightSDKDelegate>)delegate;
/**
 *  获取GInsightSDK版本号
 *
 *  @return GInsightSDK 版本号
 */
+ (NSString *)version;
@end
