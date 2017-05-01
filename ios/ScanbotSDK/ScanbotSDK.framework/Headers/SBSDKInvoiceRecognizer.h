//
//  SBSDKInvoiceRecognizer.h
//  ScanbotSDK
//
//  Created by Andrew Petrus on 29.06.16.
//  Copyright © 2016 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import "SBSDKInvoiceRecognizerResult.h"

/**
 * @class SBSDKInvoiceRecognizer
 * Wrapper class for invoice recognition. Recognition is performed on still UIImage or SampleBufferRef,
 * result is incapsulated in SBSDKInvoiceRecognizerResult instance.
 * NOTE: In order to operate, this class requires tesseract languages and trained data to be present
 * in application bundle
 */
@interface SBSDKInvoiceRecognizer : NSObject

/**
 * Acquire all available invoice information from UIImage instance
 * @param image The image with detected invoice.
 * @return Recognizer result.
 */
- (nullable SBSDKInvoiceRecognizerResult *)fetchInformationFromImage:(nonnull UIImage *)image;

/**
 * Acquire all available invoice information from sample buffer reference
 * @param sampleBufferRef The sample buffer reference containing detected invoice.
 * @return Recognizer result.
 */
- (nullable SBSDKInvoiceRecognizerResult *)fetchInformationFromSampleBuffer:(nonnull CMSampleBufferRef)sampleBufferRef
                                                                orientation:(AVCaptureVideoOrientation)videoOrientation;

@end
