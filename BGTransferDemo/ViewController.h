//
//  ViewController.h
//  BGTransferDemo
//
//  Created by Jonyzfu on 3/18/15.
//  Copyright (c) 2015 Jonyzfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *tblFiles;

- (IBAction)startOrPauseDownloadingSingleFile:(id)sender;

- (IBAction)stopDownloading:(id)sender;

- (IBAction)startAllDownloads:(id)sender;

- (IBAction)stopAllDownloads:(id)sender;

- (IBAction)initializeAll:(id)sender;

@end

