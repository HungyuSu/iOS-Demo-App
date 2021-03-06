//
//  DetailedViewController.h
//  appTemplate
//
//  Created by Mac on 14/2/18.
//  Copyright (c) 2014年 Gocharm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "LoginViewController.h"
#import "MapListingViewController.h"

@interface DetailedViewController : UIViewController <UIScrollViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
@property (strong, nonatomic) NSDictionary *data;
@property (strong, nonatomic) NSMutableDictionary *dic;
@property (strong, nonatomic) NSString *saleURL;
@property (strong, nonatomic) NSArray *showInfos;
@property (strong, nonatomic) NSString *docURL;
@property int selected;
@property (strong, nonatomic) NSString *detailURL;
@property (strong, nonatomic) NSURLConnection *connection;
@property (strong, nonatomic) IBOutlet UILabel *orgLabel;
@property (strong, nonatomic) IBOutlet UILabel *srcInfoLabel;
@property (strong, nonatomic) IBOutlet UIImageView *descScrollImage;
@property (strong, nonatomic) IBOutlet UIImageView *priceScrollImage;
@property (strong, nonatomic) IBOutlet UITextView *saleText;
@property (strong, nonatomic) IBOutlet UILabel *placeLabel;
@property (strong, nonatomic) IBOutlet UILabel *addrLabel;
@property (strong, nonatomic) IBOutlet UITextView *descText;
@property (strong, nonatomic) IBOutlet UILabel *periodText;
@property (strong, nonatomic) IBOutlet UILabel *showTitle;
@property (strong, nonatomic) IBOutlet UIPickerView *picker;
@property (strong, nonatomic) IBOutlet UIButton *saleImg;
@property (strong, nonatomic) IBOutlet UIView *pickerView;
@property (strong, nonatomic) IBOutlet UIView *dismissPickerView;
@property (strong, nonatomic) IBOutlet UILabel *timeLabel;
@property (strong, nonatomic) IBOutlet UIImageView *freeImg;
- (IBAction)openMapView:(id)sender;
- (IBAction)buyTicket:(id)sender;
- (IBAction)check:(id)sender;
- (IBAction)cancel:(id)sender;

@end
