//
//  RCFirstViewController.h
//  ruby-china-for-ios
//
//  Created by Jason Lee on 12-12-10.
//  Copyright (c) 2012年 Ruby China. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCViewController.h"

@interface RCTopicsViewController : RCViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *topics;
}


- (void) refresh;

@end