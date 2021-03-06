//
//  GESlider.h
//  Slider
//
//  Created by Max von Webel on 03/07/14.
//  Copyright (c) 2014 Max von Webel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GELabelWithPadding.h"
#import "GESliderDelegate.h"

struct GERange {
    float lowerValue;
    float upperValue;
};
typedef struct GERange GERange;
GERange GERangeMake(float lowerValue, float upperValue);


@interface GESlider : UIControl

@property (assign, nonatomic) float minimumValue;
@property (assign, nonatomic) float maximumValue;
@property (assign, nonatomic) float value;
@property (assign, nonatomic) float stepValue;
@property (assign, nonatomic) BOOL stepBumpersHidden;

@property (strong, nonatomic) UIColor *trackTintColor;

@property (strong, nonatomic) UIImage *thumbImage;

@property (strong, readonly) GELabelWithPadding *valueLabel;
@property (assign) BOOL showValueLabelWhilePanning;

@property (assign) id<GESliderDelegate> delegate;

- (void)setValue:(float)value animated:(BOOL)animated;

@end
