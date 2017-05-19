//
//  ViewController.m
//  TCJSONKit
//
//  Created by tauCross on 16/4/19.
//  Copyright © 2016年 tauCross. All rights reserved.
//

#import "ViewController.h"

#import "TCJSONKit.h"



@interface ViewController ()

@end


@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSString *string = @"{\"number\":0}";
    NSLog(@"%@", [string tc_JSONObject]);
    
    NSDictionary *dict = @{@"number" : @0};
    NSLog(@"%@", [dict tc_JSONString]);
    
    id array = @[@0];
    NSLog(@"%@", [array tc_JSONString]);
}

@end
