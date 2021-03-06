//
//  UIBarButtonItem+StyledButton.h
//  Meme Storm
//
//  Created by Vinh Nguyen on 1/7/13.
//  Copyright (c) 2013 Vinh Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIBarButtonItem (StyledButton)
+ (UIBarButtonItem *)styledBackBarButtonItemWithTarget:(id)target selector:(SEL)selector;
+ (UIBarButtonItem *)styledBackBarButtonItemWithTarget:(id)target selector:(SEL)selector withTitle:(NSString *) title;
+ (UIBarButtonItem *)styledCancelBarButtonItemWithTarget:(id)target selector:(SEL)selector;
+ (UIBarButtonItem *)styledSubmitBarButtonItemWithTitle:(NSString *)title target:(id)target selector:(SEL)selector;
+ (UIBarButtonItem *)transparentButtonWithImage:(UIImage *)image target:(id)target selector:(SEL)selector;
+ (UIBarButtonItem *)transparentButtonWithImage:(UIImage *)image andBound:(CGRect)bound target:(id)target selector:(SEL)selector;

@end
