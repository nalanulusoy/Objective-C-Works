//
//  UIIntroController.m
//  TableViewExample
//
//  Created by Nalan Ulusoy on 12.12.2018.
//  Copyright © 2018 Nalan Ulusoy. All rights reserved.
//

#import "UIIntroController.h"
#import "TableViewController.h"
@interface UIIntroController ()

@end

@implementation UIIntroController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.img setImage:[UIImage imageNamed:@"download"]];
 
}

- (IBAction)click:(id)sender {
    TableViewController* tableController = [[TableViewController alloc] initWithNibName:@"TableViewController" bundle:nil];
    [self.navigationController pushViewController:tableController animated:YES];

}
@end
