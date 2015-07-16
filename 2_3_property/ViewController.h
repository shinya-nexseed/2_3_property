//
//  ViewController.h
//  2_3_property
//
//  Created by Shinya Hirai on 2015/07/15.
//  Copyright (c) 2015年 Shinya Hirai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    int number;
    NSString *str;
}

@property (nonatomic,assign) int number;
@property (nonatomic,strong) NSString *str;


@end

