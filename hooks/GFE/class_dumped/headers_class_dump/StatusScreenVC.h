//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

@class UILabel, UITextView;

@interface StatusScreenVC : UIViewController
{
    UILabel *_lbOwnerName;
    UILabel *_lbOwnerNameLabel;
    UILabel *_lbOwnerEmail;
    UILabel *_lbOwnerEmailLabel;
    UILabel *_lbServerName;
    UILabel *_lbServerNameLabel;
    UILabel *_lbDeviceID;
    UILabel *_lbDeviceIDLabel;
    UILabel *_lbAppId;
    UILabel *_lbAppIdLabel;
    UITextView *_tvNotProvisioned;
}

@property(retain, nonatomic) UITextView *_tvNotProvisioned; // @synthesize _tvNotProvisioned;
@property(retain, nonatomic) UILabel *_lbAppIdLabel; // @synthesize _lbAppIdLabel;
@property(retain, nonatomic) UILabel *_lbDeviceIDLabel; // @synthesize _lbDeviceIDLabel;
@property(retain, nonatomic) UILabel *_lbServerNameLabel; // @synthesize _lbServerNameLabel;
@property(retain, nonatomic) UILabel *_lbOwnerEmailLabel; // @synthesize _lbOwnerEmailLabel;
@property(retain, nonatomic) UILabel *_lbOwnerNameLabel; // @synthesize _lbOwnerNameLabel;
@property(retain, nonatomic) UILabel *_lbAppId; // @synthesize _lbAppId;
@property(retain, nonatomic) UILabel *_lbDeviceID; // @synthesize _lbDeviceID;
@property(retain, nonatomic) UILabel *_lbServerName; // @synthesize _lbServerName;
@property(retain, nonatomic) UILabel *_lbOwnerEmail; // @synthesize _lbOwnerEmail;
@property(retain, nonatomic) UILabel *_lbOwnerName; // @synthesize _lbOwnerName;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)dealloc;

@end

