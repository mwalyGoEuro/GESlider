//
//  GETestViewController.m
//  Slider
//
//  Created by Max von Webel on 03/07/14.
//  Copyright (c) 2014 Max von Webel. All rights reserved.
//

#import "GESlider/GESlider.h"

#import "GETestViewController.h"

@interface GETestViewController ()

@property (weak, nonatomic) IBOutlet GESlider *slider;

@end

@implementation GETestViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.slider.minimumValue = 0.0;
    self.slider.maximumValue = 5.0;
    [self.slider setValue:1.0 animated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end