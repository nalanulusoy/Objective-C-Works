//
//  UIIntroController.h
//  TableViewExample
//
//  Created by Nalan Ulusoy on 12.12.2018.
//  Copyright © 2018 Nalan Ulusoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIIntroController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *img;
- (IBAction)click:(id)sender;

@property (strong, nonatomic) IBOutlet UIButton *btwelcome;

@end

NS_ASSUME_NONNULL_END
