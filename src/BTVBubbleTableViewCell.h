//
//  UIBubbleTableViewCell.h
//
//  Created by Alex Barinov
//  Project home page: http://alexbarinov.github.com/UIBubbleTableView/
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//

#import <UIKit/UIKit.h>
#import "BTVBubbleData.h"

@interface BTVBubbleTableViewCell : UITableViewCell

@property (nonatomic, strong) BTVBubbleData *data;
@property (nonatomic, strong) UIImageView *avatarImage;
@property (nonatomic, strong) UIImageView *bubbleImage;
@property (nonatomic, strong) UIView *customView;

@property (nonatomic) BOOL showAvatar;

@end
