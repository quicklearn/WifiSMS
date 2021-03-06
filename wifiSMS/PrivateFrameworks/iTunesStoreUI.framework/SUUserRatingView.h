/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView;



@interface SUUserRatingView : UIView 
{
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(NSInteger)arg3;

- (id)init;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (id)initWithStyle:(NSInteger)arg1;
- (float)heightWithoutReflection;
- (void)setValue:(float)arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_foregroundImageClipBounds;

@end
