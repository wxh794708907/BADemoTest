//
//  YRHomeIncomeBlockView.h
//  demoTest
//
//  Created by 博爱 on 16/3/15.
//  Copyright © 2016年 博爱之家. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^selectRowBlock)(UITableView *tableView, NSIndexPath *indexPath, NSArray *dataArray);

@interface YRHomeIncomeBlockView : UIView

- (instancetype)initWithFrame:(CGRect)frame withSelectRowBlock:(selectRowBlock)selectRowBlock;


@end
