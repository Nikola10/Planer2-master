//
//  SecondViewController.h
//  Planer2
//
//  Created by Nikola Cvetanovic on 7/7/16.
//  Copyright © 2016 Nikola Cvetanovic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController

@property IBOutlet UITextField* naziv;
@property IBOutlet UITextField* opis;
@property IBOutlet UIDatePicker* datum;
@property IBOutlet UIButton* back;
@property IBOutlet UIButton* add;

@end
