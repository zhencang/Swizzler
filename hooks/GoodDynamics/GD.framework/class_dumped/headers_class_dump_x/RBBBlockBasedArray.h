/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface RBBBlockBasedArray : _CATransform3DMakeScale
{
    unsigned int _count;
    id _block;
}

+ (id)arrayWithCount:(unsigned int)fp8 block:(id)fp(null);
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)objectAtIndex:(unsigned int)fp8;
- (unsigned int)count;
- (id)initWithObjects:(const id *)fp8 count:(unsigned int)fp12;
- (id)init;
- (id)initWithCount:(unsigned int)fp8 block:(id)fp(null);

@end
