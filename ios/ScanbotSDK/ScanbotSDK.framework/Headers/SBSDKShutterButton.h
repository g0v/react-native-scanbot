//
//  SBSDKShutterButton.h
//  SnapIos
//
//  Created by Sebastian Husche on 09.07.13.
//  Copyright (c) 2014 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKScanbotSDKConstants.h"

/**
 * @class SBSDKShutterButton
 * The button class used in the camera view controller to take a snapshot.
 * Animates itself depending on its status.
 */
@interface SBSDKShutterButton : UIButton

/** 
 * Indicates, whether a still image is currently being taken or not.
 * If YES a UIActivityIndicator is shown in the center.
 */
@property(nonatomic, assign) BOOL takingPhoto;

/**
 * The current status of the receiver. See SBSDKScannerStatus.
 */
@property(nonatomic, assign) SBSDKScannerStatus scannerStatus;

@end
