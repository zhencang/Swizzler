//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"

@class GCDAsyncSocket, GTContainerDH, NSData, NSMutableArray, NSString;

@interface GTICCConnection : NSObject <GCDAsyncSocketDelegate>
{
    basic_string_075b6133 m_pendingData;
    basic_string_075b6133 m_command;
    basic_string_075b6133 m_currentAttachName;
    basic_string_075b6133 m_currentMessageTimestamp;
    NSString *m_currentAttachmentName;
    int m_activeFD;
    int m_readState;
    int m_commandLen;
    int m_numAttach;
    int m_attachNameLen;
    int m_currentAttachLength;
    int m_writtenToFile;
    int m_currentAttachNumber;
    BOOL m_initiating;
    BOOL m_socketIntendsToconnect;
    BOOL m_socketIsConnected;
    BOOL m_secure;
    BOOL m_authorize;
    int m_enterpriseId;
    int m_requestID;
    short m_port;
    BOOL m_enterpriseMatch;
    long long m_lastPairTime;
    NSData *m_clientCert;
    NSData *m_serverCert;
    NSString *m_applicationId;
    NSMutableArray *m_attachments;
    GTContainerDH *m_dhContainer;
    GCDAsyncSocket *m_socket;
    GCDAsyncSocket *m_connectedSocket;
    BOOL m_wasClient;
}

@property(nonatomic) BOOL m_wasClient; // @synthesize m_wasClient;
@property(nonatomic) NSString *m_currentAttachmentName; // @synthesize m_currentAttachmentName;
@property(nonatomic) BOOL m_initiating; // @synthesize m_initiating;
@property(retain, nonatomic) GTContainerDH *m_dhContainer; // @synthesize m_dhContainer;
@property(nonatomic) int m_requestID; // @synthesize m_requestID;
@property(retain, nonatomic) NSMutableArray *m_attachments; // @synthesize m_attachments;
@property(retain) GCDAsyncSocket *m_connectedSocket; // @synthesize m_connectedSocket;
@property(retain) GCDAsyncSocket *m_socket; // @synthesize m_socket;
@property(nonatomic) BOOL m_secure; // @synthesize m_secure;
@property(nonatomic) long long m_lastPairTime; // @synthesize m_lastPairTime;
@property(nonatomic) short m_port; // @synthesize m_port;
@property(retain, nonatomic) NSString *m_applicationId; // @synthesize m_applicationId;
@property(retain, nonatomic) NSData *m_serverCert; // @synthesize m_serverCert;
@property(retain, nonatomic) NSData *m_clientCert; // @synthesize m_clientCert;
@property(nonatomic) BOOL m_enterpriseMatch; // @synthesize m_enterpriseMatch;
@property(nonatomic) int m_enterpriseId; // @synthesize m_enterpriseId;
@property(nonatomic) BOOL m_authorize; // @synthesize m_authorize;
@property(nonatomic) BOOL m_socketIsConnected; // @synthesize m_socketIsConnected;
@property(nonatomic) BOOL m_socketIntendsToconnect; // @synthesize m_socketIntendsToconnect;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)readData:(id)arg1;
- (void)processMessage;
- (void)clearReadParameters;
- (BOOL)writeData:(id)arg1 tag:(int)arg2;
- (BOOL)validateCert;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (basic_string_075b6133)getCommand;
- (void)resetDHContainer;
- (void)shutdown;
- (void)dealloc;
- (int)nextRequestId;
- (id)init;

@end
