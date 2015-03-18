//
//  FileDownloadInfo.m
//  BGTransferDemo
//
//  Created by Jonyzfu on 3/18/15.
//  Copyright (c) 2015 Jonyzfu. All rights reserved.
//

#import "FileDownloadInfo.h"

@implementation FileDownloadInfo

- (id)initWithFileTitle:(NSString *)title andDownloadSource:(NSString *)source
{
    if (self == [super init]) {
        self.fileTitle = title;
        self.downloadSource = source;
        self.downloadProgress = 0.0;
        self.isDownloading = NO;
        self.downloadComplete = NO;
        self.taskIdentifier = -1;
    }
    
    return self;
}

@end
