//
//  UINavigationController+NavigationBar.h
//  ZWSKit
//
//  Created by LOFT.LIFE.ZHENG on 2018/3/5.
//  Copyright © 2018年 LOFT.ZHENG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (NavigationBar) <UINavigationBarDelegate, UINavigationControllerDelegate>

@property (copy, nonatomic) NSString *cloudox;
- (void)setNeedsNavigationBackground:(CGFloat)alpha;

@end
