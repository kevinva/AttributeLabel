//
//  HzLabelBuilder.m
//  FastcompanyiPhone
//
//  Created by Zander Harrison on 15/3/6.
//  Copyright (c) 2015年 kevin. All rights reserved.
//

#import "HzLabelBuilder.h"
#import "HzLabel.h"

@implementation HzLabelBuilder

#pragma mark - Public Interfaces

- (HzLabel *)build{
    NSAssert(_text, @"label should have content text!");
    
    if (!_textColor) {
        self.textColor = [UIColor darkTextColor];
    }
    if (!_font) {
        self.font = [UIFont systemFontOfSize:21.0f];
    }
    
    HzLabel *label = [[HzLabel alloc] initWithFrame:_contentRect];
    label.textColor = _textColor;
    label.text = _text;
    label.font = _font;
    label.lineSpace = _lineSpace;
    
    return label;
}

@end
