//
//  UItemTableViewCell.m
//  TableViewExample
//
//  Created by Nalan Ulusoy on 12.12.2018.
//  Copyright © 2018 Nalan Ulusoy. All rights reserved.
//

#import "UItemTableViewCell.h"

@implementation UItemTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void) createUI:(NSString*)tabledata{
    self.img_text.text = tabledata;
[self.img_item setImage:[UIImage imageNamed:@"download"]];
}
- (IBAction)click:(id)sender {
}
@end
