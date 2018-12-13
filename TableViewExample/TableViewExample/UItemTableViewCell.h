//
//  UItemTableViewCell.h
//  TableViewExample
//
//  Created by Nalan Ulusoy on 12.12.2018.
//  Copyright © 2018 Nalan Ulusoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UItemTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *img_item;
@property (strong, nonatomic) IBOutlet UITextView *img_text;
- (IBAction)click:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *bt_item;
@property (weak, nonatomic) NSArray* datatable;
-(void)createUI:(NSArray*)datatable;
@end

NS_ASSUME_NONNULL_END
