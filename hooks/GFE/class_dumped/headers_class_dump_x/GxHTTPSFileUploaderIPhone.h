/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GxFileUploaderIPhone.h"

@class GxLogStream, NSInputStream, NSMutableURLRequest, NSURLConnection;

@interface GxHTTPSFileUploaderIPhone : GxFileUploaderIPhone
{
    NSInputStream *inputStream;
    GxLogStream *_logStream;
    NSMutableURLRequest *request;
    NSURLConnection *urlConnection;
    BOOL active;
}

- (void)setLogStream:(id)fp8;
- (id)logStream;
- (void)setUrlConnection:(id)fp8;
- (id)urlConnection;
- (void)setRequest:(id)fp8;
- (id)request;
- (void)setInputStream:(id)fp8;
- (id)inputStream;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didSendBodyData:(int)fp12 totalBytesWritten:(int)fp16 totalBytesExpectedToWrite:(int)fp20;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)connection:(id)fp8 didReceiveAuthenticationChallenge:(id)fp12;
- (void)abort;
- (BOOL)isActive;
- (BOOL)createWriteStream:(id)fp8 user:(id)fp12 pwd:(id)fp16 remotePath:(id)fp20 remoteFolderPath:(id)fp24;
- (BOOL)createReadStream:(id)fp8;
- (void)cleanUp;
- (void)dealloc;

@end

