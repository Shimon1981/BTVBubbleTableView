//
//  BTVBubbleTableViewDelegate.h
//  BTVBubbleTableViewExample
//
//  Created by Shimon Shvartsbroit on 4/8/13.
//
//

#import <Foundation/Foundation.h>

@class BTVBubbleTableView;

@protocol BTVBubbleTableViewDelegate <NSObject>

@optional
/**
 Called after the user tapped on the bubble
 @param tableView   The BTVBubbleTableView that the method was called from.
 */
-(void)bubbleTableView:(BTVBubbleTableView *)tableView didSelectBubbleAtIndex:(NSUInteger)index;


@end
