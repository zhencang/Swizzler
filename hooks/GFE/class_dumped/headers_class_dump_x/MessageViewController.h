/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, UILabel;

@interface MessageViewController : _ABAddressBookAddRecord
{
    UILabel *label;
    NSString *message;
}

- (void)setMessage:(id)fp8;
- (id)message;
- (void)setLabel:(id)fp8;
- (id)label;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithMessage:(id)fp8 NibName:(id)fp12 bundle:(id)fp16;

@end

