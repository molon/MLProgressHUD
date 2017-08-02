//
//  MLProgressHUD.h
//  XQ_SDB
//
//  Created by molon on 16/8/18.
//  Copyright © 2016年 molon. All rights reserved.
//

#import <MBProgressHUD/MBProgressHUD.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLProgressHUD : MBProgressHUD

/**
 Show message or customView conveniently
 
 @param view                   view
 @param message                message
 @param detailMessage          detailMessage
 @param customView             customView
 @param userInteractionEnabled userInteractionEnabled
 @param yOffset                yOffset
 @param hideDelay              hideDelay
 
 @return instance
 */
+ (instancetype)showOnView:(UIView*)view message:(nullable NSString*)message detailMessage:(nullable NSString*)detailMessage customView:(nullable UIView*)customView userInteractionEnabled:(BOOL)userInteractionEnabled yOffset:(CGFloat)yOffset hideDelay:(NSTimeInterval)hideDelay;

/**
 Show indeterminate hud on view conveniently
 @warning it will not add a new one if there is a indeterminate hud exist
 
 @param view          view
 @param message       message
 @param detailMessage detailMessage
 @param yOffset       yOffset
 
 @return instance
 */
+ (instancetype)showIndeterminateHUDOnView:(UIView*)view message:(nullable NSString*)message detailMessage:(nullable NSString*)detailMessage yOffset:(CGFloat)yOffset;

/*!
 Returns the first indeterminate hud on view
 
 @param view view
 
 @return instance
 */
+ (MBProgressHUD *)indeterminateHUDForView:(UIView *)view;

/**
 Hide all indeterminate huds conveniently
 
 @param view view
 
 @return count hided
 */
+ (NSInteger)hideIndeterminateHUDsOnView:(UIView*)view;

@end

NS_ASSUME_NONNULL_END
