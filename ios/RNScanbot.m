
#import "RNScanbot.h"
#import <ScanbotSDK/ScanbotSDK.h>

@implementation RNScanbot

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}
RCT_EXPORT_MODULE()

- (NSDictionary *)constantsToExport
{
    return @{
             @"isLicenseValid": @true,
             };
}

RCT_EXPORT_METHOD(setLicense:(NSString *)license
                  resolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)
{
    [ScanbotSDK setLicense: license];
    
    resolve(@"ok");
}


@end
