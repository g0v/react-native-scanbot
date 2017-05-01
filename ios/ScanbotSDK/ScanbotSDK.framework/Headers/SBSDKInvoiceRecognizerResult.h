//
//  SBSDKInvoiceRecognizerResult.h
//  ScanbotSDK
//
//  Created by Andrew Petrus on 29.06.16.
//  Copyright © 2016 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSDKInvoiceRecognizerResultField.h"

/**
 * @class SBSDKInvoiceRecognizerResult
 * Incapsulates invoice recognition results
 */
@interface SBSDKInvoiceRecognizerResult : NSObject

/** Array of recognized fields **/
@property (nonatomic, readonly, strong, nonnull) NSArray<SBSDKInvoiceRecognizerResultField *> *fields;

/** 
 * Initializer with ready fields array 
 * @param fields recognized fields array.
 * @return initialized instance.
 */
- (nonnull instancetype)initWithFields:(nonnull NSArray<SBSDKInvoiceRecognizerResultField *> *)fields;

/** 
 * Returns string representation of the whole fields array 
 * @return string representation.
 */
- (nonnull NSString *)stringRepresentation;

@end
