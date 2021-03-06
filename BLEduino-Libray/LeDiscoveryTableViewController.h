//
//  LeDiscoveryTableViewController.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 10/3/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BDLeManager.h"
#import "BleduinoController.h"

/****************************************************************************/
/*						Service & Characteristics							*/
/****************************************************************************/
extern NSString * const kUARTServiceUUIDString;            //8C6BDA7A-A312-681D-025B-0032C0D16A2D  UART Service
extern NSString * const kRxCharacteristicUUIDString;       //8C6BABCD-A312-681D-025B-0032C0D16A2D  Read(Rx) Message Characteristic
extern NSString * const kTxCharacteristicUUIDString;       //8C6B1010-A312-681D-025B-0032C0D16A2D  Write(Tx) Message Characteristic


@interface LeDiscoveryTableViewController : UITableViewController
<
LeManagerDelegate,
BleduinoControllerDelegate,
UIAlertViewDelegate
>
@property (strong, nonatomic) NSMutableOrderedSet *connectedBleduinos;
@property (strong, nonatomic) NSMutableOrderedSet *foundBleduinos;
- (IBAction)showMenu;
- (void)showStatusBar;
@end
