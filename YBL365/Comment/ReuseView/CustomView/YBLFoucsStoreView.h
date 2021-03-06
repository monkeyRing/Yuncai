//
//  YBLFoucsStoreView.h
//  YBL365
//
//  Created by 乔同新 on 2017/2/16.
//  Copyright © 2017年 乔同新. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^FoucsClickBlock)(void);

@interface YBLFoucsStoreView : UIView

+ (void)showFoucsStoreViewWithFrame:(CGRect)frame
                          addToView:(UIView *)view
                    foucsClickBlock:(FoucsClickBlock)block;

+ (void)dismissFoucsView;

@end
