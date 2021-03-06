//
//  LCDTableViewController.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 11/22/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BDLeManager.h"
#import "BDUart.h"

@class LCDTableViewController;
@protocol LCDTableViewControllerDelegate <NSObject>
- (void)lcdModuleTableViewControllerDismissed:(LCDTableViewController *)controller;
@end

@interface LCDTableViewController : UITableViewController
<
UITextViewDelegate,
UARTServiceDelegate
>
@property (weak) IBOutlet UITextView *messageView;
@property (weak) IBOutlet UILabel *charCountView;
@property (weak) id <LCDTableViewControllerDelegate> delegate;
- (IBAction)dismissModule;

@end
