//
//  SBSDKMRZRecognizer.h
//  ScanbotSDK
//
//  Created by Andrew Petrus on 28.09.16.
//  Copyright © 2016 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import "SBSDKMachineReadableZoneRecognizerResult.h"

/**
 * @class SBSDKMachineReadableZoneRecognizer
 * Wrapper class for machine readable zones recognition. Recognition is performed on still UIImage 
 * or SampleBufferRef, result is incapsulated in SBSDKMRZRecognizerResult instance.
 * NOTE: In order to operate, this class requires tesseract languages and trained data to be present
 * in application bundle
 */
@interface SBSDKMachineReadableZoneRecognizer : NSObject

/**
 * Acquire all available MRZ information from UIImage instance
 * @param image The image where MRZ is to be detected.
 * @return Recognizer result.
 */
- (nonnull SBSDKMachineReadableZoneRecognizerResult *)recognizePersonalIdentityFromImage:(nonnull UIImage *)image;

/**
 * Acquire all available MRZ information from sample buffer reference
 * @param sampleBufferRef The sample buffer reference containing MRZ.
 * @return Recognizer result.
 */
- (nonnull SBSDKMachineReadableZoneRecognizerResult *)recognizePersonalIdentityFromSampleBuffer:(nonnull CMSampleBufferRef)sampleBufferRef orientation:(AVCaptureVideoOrientation)videoOrientation;


@end
