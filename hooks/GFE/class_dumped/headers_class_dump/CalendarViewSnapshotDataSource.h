//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "GTCalendarViewDataSource.h"

@class NSMutableArray;

@interface CalendarViewSnapshotDataSource : NSObject <GTCalendarViewDataSource>
{
    NSMutableArray *_mainCache;
}

@property(copy, nonatomic) NSMutableArray *mainCache; // @synthesize mainCache=_mainCache;
- (void)removeFilteredCache:(id)arg1;
- (id)calendarListFilteredCacheWithStartDate:(id)arg1 endDate:(id)arg2 delegate:(id)arg3;
- (id)allDayFilteredCacheWithStartDate:(id)arg1 endDate:(id)arg2 delegate:(id)arg3;
- (id)filteredCacheForDay:(id)arg1 delegate:(id)arg2;
- (id)compositeFilteredCacheWithStartDate:(id)arg1 endDate:(id)arg2 delegate:(id)arg3;
- (id)filteredCacheWithStartDate:(id)arg1 endDate:(id)arg2 delegate:(id)arg3;
- (id)createSnapshotCacheWithFilter:(id)arg1 delegate:(id)arg2;
- (void)addOccurrence:(id)arg1 replaceIfExists:(BOOL)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)dealloc;

@end

