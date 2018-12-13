//
//  TableViewController.h
//  TableViewExample
//
//  Created by Nalan Ulusoy on 12.12.2018.
//  Copyright © 2018 Nalan Ulusoy. All rights reserved.
//


#import <UIKit/UIKit.h>
@interface TableViewController :UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableview;

@property(retain,nonatomic) NSArray *tableData;

@end

