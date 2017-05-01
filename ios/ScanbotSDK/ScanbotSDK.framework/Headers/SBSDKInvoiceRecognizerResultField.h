//
//  SBSDKInvoiceRecognizerResultField.h
//  ScanbotSDK
//
//  Created by Andrew Petrus on 29.06.16.
//  Copyright © 2016 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/**
 * @enum SBSDKInvoiceFieldType
 * An enumeration describing the types of supported invoice fields
 */
typedef NS_ENUM(NSInteger, SBSDKInvoiceFieldType) {
    SBSDKInvoiceFieldTypeUnknown = -1,
    SBSDKInvoiceFieldTypeTotalAmount = 0,
    SBSDKInvoiceFieldTypeTax = 1,
    SBSDKInvoiceFieldTypeInvoiceDate = 2,
    SBSDKInvoiceFieldTypeIBAN = 3
};

/**
 * @class SBSDKInvoiceRecognizerResultField
 * Incapsulates invoice recognition result for one particular field
 */
@interface SBSDKInvoiceRecognizerResultField : NSObject

/** Invoice field type **/
@property (nonatomic, readonly, readonly) SBSDKInvoiceFieldType type;

/** Recognized value for field **/
@property (nonatomic, readonly, readonly, nonnull) id value;

/** Field boundaries **/
@property (nonatomic, readonly, readonly) CGRect bounds;

/*
 * Initializer
 * @param type field type.
 * @param value field value.
 * @param bounds field boundaries
 * @return initialized instance.
 */
- (nonnull instancetype)initWithType:(SBSDKInvoiceFieldType)type value:(nonnull id)value bounds:(CGRect)bounds;

/*
 * Returns string representation of field type
 * @return field type string representation.
 */
- (nonnull NSString *)typeString;

@end
