ColumnStyleText
===============

###Purpose

As you know, the standard UIKit component, UILabel, can't not be configured the line space. Through using UITextView with html style text, it's a little hard to use.
With coreText, the view can be used as Label, which can be configured the line space, just by setting a property.

###Requirements

* iOS5+
* No ARC

###Installations

Just drag HzLabel.h, HzLabel.m, HzLabelBuilder.h and HzLabelBuilder.m these four files to you project.

###Demo

* By coding

It's recommendatory to use HzLabelBuilder to create HzLabel:
```objective-c
HzLabel *label = [HzLabel labelWithBuilder:^(HzLabelBuilder *builder) {

  builder.text = @"Test";
  builder.font = [UIFont systemFontOfSize:10.0f];
  builder.lineSpace = 3.0f;
  builder.textColor = [UIColor darkTextColor];
  builder.contentRect = CGRectMake(0, 0, 100, 30);

}];

```

* By Interface Builder

Drag a UIView and then set its class "HzLabel".

With the new feature Xcode6 (IBDesignable and IBInspectable), some properties can be configured at realtime in IB, such as lineSpace, textColor and text:

###test
<img align="center" src="https://raw.githubusercontent.com/kevinva/AttributeLabel/master/Demo/demo1.png" alt="ScreenShot" width="300">
<img align="center" src="https://raw.githubusercontent.com/kevinva/AttributeLabel/master/Demo/demo2.png" alt="ScreenShot" width="300">
