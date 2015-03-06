//
//  HzLabelBuilder.h
//  FastcompanyiPhone
//
//  Created by Zander Harrison on 15/3/6.
//  Copyright (c) 2015年 kevin. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@class HzLabel;

@interface HzLabelBuilder : NSObject

@property (nonatomic, assign) CGRect cotnentRect;
@property (nonatomic, assign) CGFloat lineSpace;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIColor *textColor;

- (HzLabel *)build;

@end
