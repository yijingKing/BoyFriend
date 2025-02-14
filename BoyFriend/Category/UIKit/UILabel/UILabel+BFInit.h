/*
  Created by BF on 2021
  Copyright © 2021年 BF. All rights reserved.
*/

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (BFInit)
//MARK: - 构建->文本-颜色-字体
/// @param text 文本
/// @param color 颜色
/// @param font 字体
+ (UILabel *)bf_createWithText:(nullable NSString *)text color:(nullable UIColor *)color font:(nullable UIFont *)font;

//MARK: - 构建->位置-文本-颜色-字体
/// @param frame 位置
/// @param text 文本
/// @param color 颜色
/// @param font 字体
+ (UILabel *)bf_createWithFrame:(CGRect)frame text:(nullable NSString *)text color:(nullable UIColor *)color font:(nullable UIFont *)font;

//MARK: - 构建->位置-文本-颜色-字体-是否自适应
/// @param frame 位置
/// @param text 文本
/// @param color 颜色
/// @param font 字体
/// @param isAdjust 是否自适应
+ (UILabel *)bf_createWithFrame:(CGRect)frame text:(nullable NSString *)text color:(nullable UIColor *)color font:(nullable UIFont *)font adjustText:(BOOL)isAdjust;

@end

NS_ASSUME_NONNULL_END
