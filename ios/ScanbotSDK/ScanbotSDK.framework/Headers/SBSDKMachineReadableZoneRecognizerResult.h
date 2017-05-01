//
//  SBSDKMRZRecognizerResult.h
//  ScanbotSDK
//
//  Created by Andrew Petrus on 28.09.16.
//  Copyright © 2016 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SBSDKMachineReadableZoneRecognizerResultDocumentType) {
    SBSDKMachineReadableZoneRecognizerResultDocumentTypePassport = 0,
    SBSDKMachineReadableZoneRecognizerResultDocumentTypeVisa = 1,
    SBSDKMachineReadableZoneRecognizerResultDocumentTypeTravelDocument = 2
};

/**
 * @class SBSDKMachineReadableZoneRecognizerResult
 * Incapsulates machine readable zones recognition results
 */
@interface SBSDKMachineReadableZoneRecognizerResult : NSObject

@property (nonatomic) BOOL recognitionSuccessfull;
@property (nonatomic) SBSDKMachineReadableZoneRecognizerResultDocumentType documentType;
@property (nonatomic, strong, nonnull) NSString *documentCode;
@property (nonatomic, strong, nonnull) NSString *issuingStateOrOrganization;
@property (nonatomic, strong, nonnull) NSString *firstName;
@property (nonatomic, strong, nonnull) NSString *lastName;
@property (nonatomic, strong, nonnull) NSString *nationality;
@property (nonatomic, strong, nonnull) NSString *dateOfBirth;
@property (nonatomic, strong, nonnull) NSString *gender;
@property (nonatomic, strong, nonnull) NSString *dateOfExpiry;
@property (nonatomic, strong, nonnull) NSString *personalNumber;
@property (nonatomic, strong, nonnull) NSString *travelDocType;
@property (nonatomic, strong, nonnull) NSString *optional1;
@property (nonatomic, strong, nonnull) NSString *optional2;
@property (nonatomic, strong, nonnull) NSString *discreetIssuingStateOrOrganization;

/**
 * Returns string representation of the whole fields array
 * @return string representation.
 */
- (nonnull NSString *)stringRepresentation;

@end
