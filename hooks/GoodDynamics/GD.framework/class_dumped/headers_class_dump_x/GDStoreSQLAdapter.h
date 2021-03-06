/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSDictionary, NSIncrementalStore, NSMutableDictionary;

@interface GDStoreSQLAdapter : _CATransform3DMakeScale
{
    NSIncrementalStore *m_store;
    NSDictionary *m_entities;
    NSDictionary *m_rootEntities;
    NSMutableDictionary *m_entitiesById;
    id <GDStoreSQLStatementsDescriptor> m_storeDescriptor;
    struct sqlite3 *m_database;
    BOOL m_createIndexes;
    BOOL m_singleTableInheritance;
    NSMutableDictionary *_sqlCache;
}

+ (id)readMetadataFromConnection:(struct sqlite3 *)fp8 version:(int *)fp12;
+ (void)deleteWalJournalTemporaryFilesForDatabase:(id)fp8 isSecure:(BOOL)fp12;
- (id)databaseError;
- (id)executeSqliteStatement:(struct sqlite3_stmt *)fp8 context:(id)fp12 entity:(id)fp16 properties:(id)fp20 cache:(BOOL)fp24 error:(id *)fp28;
- (BOOL)addToManyRelationshipToCache:(id)fp8 entity:(id)fp12 referenceId:(long long)fp16 managedObjectContext:(id)fp24 error:(id *)fp28;
- (BOOL)addToOneRelationshipToCache:(id)fp8 entity:(id)fp12 referenceId:(long long)fp16 managedObjectContext:(id)fp24 error:(id *)fp28;
- (id)newFetchToManyRelationship:(id)fp8 entity:(id)fp12 referenceId:(long long)fp16 managedObjectContext:(id)fp24 error:(id *)fp28;
- (id)newFetchToOneRelationship:(id)fp8 entity:(id)fp12 referenceId:(long long)fp16 managedObjectContext:(id)fp24 error:(id *)fp28;
- (struct sqlite3_stmt *)prepareStatementForFetchRequest:(id)fp8 managedObjectContext:(id)fp12 error:(id *)fp16;
- (id)fetch:(id)fp8 context:(id)fp12 cache:(BOOL)fp16 error:(id *)fp20;
- (id)fetchEntity:(id)fp8 context:(id)fp12 objectID:(id)fp16 error:(id *)fp20;
- (BOOL)saveMetadata:(id)fp8 version:(int)fp12 updating:(BOOL)fp16;
- (BOOL)updatePrimaryKeysInformation;
- (void)attachFunctionsAndCollations;
- (long long)bind:(struct sqlite3_stmt *)fp8 entity:(id)fp12 properties:(id)fp16 object:(id)fp20 updatedValues:(id *)fp24 updating:(BOOL)fp28;
- (id)groupEntities:(id)fp8;
- (BOOL)createRelationship:(id)fp8 entity:(id)fp12 onObject:(id)fp16 withObjects:(id)fp20;
- (BOOL)deleteRelationship:(id)fp8 entity:(id)fp12 onObject:(id)fp16 withObjects:(id)fp20;
- (BOOL)deleteObjects:(id)fp8;
- (BOOL)updateEntityMaximumPrimaryKey:(id)fp8;
- (int)updateRelationship:(id)fp8 forObject:(id)fp12 onEntity:(id)fp16;
- (BOOL)updateObjects:(id)fp8 updatedEntities:(id)fp12;
- (BOOL)createObjects:(id)fp8 updatedEntities:(id)fp12;
- (BOOL)createTables:(id *)fp8;
- (BOOL)createTable:(id)fp8;
- (BOOL)executePragmasWithAnalyseOnOpen:(BOOL)fp8 vacuumOnOpen:(BOOL)fp12 pragmas:(id)fp16;
- (BOOL)rollbackTransaction:(id *)fp8;
- (BOOL)commitTransaction:(id *)fp8;
- (BOOL)startTransaction:(id *)fp8;
- (void)prepare;
- (void)dealloc;
- (id)initWithConnection:(struct sqlite3 *)fp8 storeDescriptor:(id)fp12 store:(id)fp16 entities:(id)fp20 rootEntities:(id)fp24 singleTableInheritance:(BOOL)fp28;
- (BOOL)checkpoint;
- (int)currentJournalMode;

@end

