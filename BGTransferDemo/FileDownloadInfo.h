//
//  FileDownloadInfo.h
//  BGTransferDemo
//
//  Created by Jonyzfu on 3/18/15.
//  Copyright (c) 2015 Jonyzfu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileDownloadInfo : NSObject

@property (nonatomic, strong) NSString *fileTitle;

@property (nonatomic, strong) NSString *downloadSource;

@property (nonatomic, strong) NSURLSessionDownloadTask *downloadTask;

@property (nonatomic, strong) NSData *taskResumeData;

@property (nonatomic) double downloadProgress;

@property (nonatomic) BOOL isDownloading;

@property (nonatomic) BOOL downloadComplete;

@property (nonatomic) unsigned long taskIdentifier;

- (id)initWithFileTitle:(NSString *)title andDownloadSource:(NSString *)source;

@end
