//
//  YMFormTitleTableViewCell.h
//  YMOCCodeStandard
//
//  Created by iOS on 2018/11/26.
//  Copyright © 2018 iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class YMDemoFormModel;
@interface YMFormTitleTableViewCell : UITableViewCell

/** 标题 */
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

/** 当前索引 */
@property (nonatomic, strong) NSIndexPath *indexPath;

/** 数据源 */
@property (nonatomic, strong) YMDemoFormModel *model;

@end

NS_ASSUME_NONNULL_END
