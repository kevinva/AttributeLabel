//
//  HzLabel.h
//  HzTest2
//
//  Created by 何 峙 on 13-9-29.
//  Copyright (c) 2013年 何 峙. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HzLabelBuilder;

IB_DESIGNABLE
@interface HzLabel : UIView

@property (nonatomic, assign) IBInspectable CGFloat lineSpace;
@property (nonatomic, retain) IBInspectable NSString *text;
@property (nonatomic, retain) IBInspectable UIColor *textColor;
@property (nonatomic, retain) UIFont *font;

+ (instancetype)labelWithBuilder:(void (^)(HzLabelBuilder *builder))block;
+ (CGFloat)boundingHeightForWidth:(CGFloat)w string:(NSString *)text font:(UIFont *)font lineSpace:(CGFloat)space;
- (void)refresh;

@end
