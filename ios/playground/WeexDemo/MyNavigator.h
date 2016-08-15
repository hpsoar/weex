//
//  MyNavigator.h
//  WeexDemo
//
//  Created by HuangPeng on 8/15/16.
//  Copyright © 2016 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WeexSDK/WXEventModuleProtocol.h>
#import <WeexSDK/WXModuleProtocol.h>


@protocol MyNavigator <WXModuleProtocol>

- (void)openURL:(NSString *)url callback:(WXModuleCallback)callback;

@end

@interface MyNavigator : NSObject <WXModuleProtocol, MyNavigator>

- (void)openURL:(NSString *)url callback:(WXModuleCallback)callback;

@end
