//
//  MyNavigator.m
//  WeexDemo
//
//  Created by HuangPeng on 8/15/16.
//  Copyright © 2016 taobao. All rights reserved.
//

#import "MyNavigator.h"
#import <WeexSDK/WXBridgeManager.h>

@implementation MyNavigator

WX_EXPORT_METHOD(@selector(openURL:callback:))

- (void)openURL:(NSString *)url callback:(WXModuleCallback)callback {
    NSLog(@"hello");
    
    if (callback) {
        callback(nil);
    }
}

@end
