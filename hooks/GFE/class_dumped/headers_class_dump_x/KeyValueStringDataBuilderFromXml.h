/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "NSXMLParserDelegate-Protocol.h"

@class KeyValueStringData, NSMutableArray, NSMutableString, NSString;

@interface KeyValueStringDataBuilderFromXml : _ABAddressBookAddRecord <NSXMLParserDelegate>
{
    KeyValueStringData *curKeyValueStringData;
    NSMutableString *curValue;
    NSMutableArray *outArray;
    NSString *containerTag;
    NSString *recordTag;
}

- (void)setCurValue:(id)fp8;
- (id)curValue;
- (void)setRecordTag:(id)fp8;
- (id)recordTag;
- (void)setContainerTag:(id)fp8;
- (id)containerTag;
- (void)setCurKeyValueStringData:(id)fp8;
- (id)curKeyValueStringData;
- (void)dealloc;
- (void)resetCurValue;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (BOOL)buildFromXml:(id)fp8 intoArray:(id)fp12;
- (id)initWithContainerTag:(id)fp8 recordTag:(id)fp12;

@end

