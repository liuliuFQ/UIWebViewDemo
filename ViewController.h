//
//  ViewController.h
//  UIWebViewDemo
//
//  Created by jhl on 14-8-5.
//  Copyright (c) 2014年 深联智达(北京). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)doBackButton:(id)sender;
- (IBAction)doComeButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@end
