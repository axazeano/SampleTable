//
//  SimpleTableCell.h
//  SampleTable
//
//  Created by Владимир Кубанцев on 12.10.15.
//  Copyright © 2015 Владимир Кубанцев. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailImageView;

@end
