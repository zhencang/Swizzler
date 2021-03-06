/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBTableViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface GMAIdentityPinVC : SBTableViewController <UITextFieldDelegate>
{
    struct GMAIdentityPinCallback *_pinCallback;
    int _viewId;
    NSString *_identityName;
}

+ (void)doShowPinAlertView:(id)fp8;
+ (void)showPinAlertViewOnMainThread:(id)fp8;
+ (void)showPinAlertViewWithViewId:(int)fp8 withIdentityName:(id)fp12 withPinCallback:(struct GMAIdentityPinCallback *)fp16;
- (void)setIdentityName:(id)fp8;
- (id)identityName;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)didReceiveMemoryWarning;
- (void)onCancel;
- (void)onDone;
- (void)viewWillAppear:(BOOL)fp8;
- (void)onDismissNotification:(id)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewId:(int)fp8 withIdentityName:(id)fp12 withPinCallback:(struct GMAIdentityPinCallback *)fp16;

@end

