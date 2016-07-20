/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSDate;

@interface GTCalendarCacheBucket : _ABAddressBookAddRecord
{
    BOOL _active;
    BOOL _doneLoading;
    NSDate *_startDate;
    NSDate *_inactiveDate;
}

+ (id)dateWithNumberOfBuckets:(int)fp8 sinceDate:(id)fp12;
+ (id)dateTruncatedToBucket:(id)fp8;
+ (id)bucketForDate:(id)fp8;
+ (void)initialize;
- (void)setInactiveDate:(id)fp8;
- (id)inactiveDate;
- (void)setDoneLoading:(BOOL)fp8;
- (BOOL)doneLoading;
- (BOOL)isActive;
- (void)setStartDate:(id)fp8;
- (id)startDate;
- (unsigned int)hash;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (void)setActive:(BOOL)fp8;
- (BOOL)overlapsStartDate:(id)fp8 endDate:(id)fp12;
- (id)endDate;
- (id)dateWithNumberOfBucketsSinceStartDate:(int)fp8;
- (id)initWithDate:(id)fp8;
- (void)dealloc;

@end
