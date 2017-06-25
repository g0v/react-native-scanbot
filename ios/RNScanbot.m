
#import "RNScanbot.h"
#import "RNScanbotViewController.h"
#import <ScanbotSDK/ScanbotSDK.h>

@implementation RNScanbot

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}

- (UIViewController *) getRootViewController {
    UIViewController *root = [[[[UIApplication sharedApplication] delegate] window] rootViewController];
    while (root.presentedViewController != nil) {
        root = root.presentedViewController;
    }
    
    return root;
}

RCT_EXPORT_MODULE()

- (NSDictionary *)constantsToExport
{
    return @{};
}

RCT_EXPORT_METHOD(setLicense:(NSString *)license
                  resolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)
{
    [ScanbotSDK setLicense: license];
    
    resolve(@"ok");
}

RCT_EXPORT_METHOD(scan:(NSDictionary *)options
                  resolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)
{
    RNScanbotViewController* view = [[RNScanbotViewController alloc] init];
    
    [view once:resolve rejecter:reject];
}


@end
