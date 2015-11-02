//
//  ViewController.m
//  LCHUD
//
//  Created by mac1 on 15/8/28.
//  Copyright (c) 2015年 BNDK. All rights reserved.
//

#import "ViewController.h"
#import "BNBlackHUD.h"

@interface ViewController ()



@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}
- (IBAction)buttonClick:(id)sender
{
    [BNBlackHUD showMessage:@"我的天，好无聊啊~~~~" toView:self.view];
}
- (IBAction)openButtonClick:(id)sender
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"liuchuntest://"]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
