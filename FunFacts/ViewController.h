//
//  ViewController.h
//  FunFacts
//
//  Created by hannah gaskins on 5/21/16.
//  Copyright © 2016 hannah gaskins. All rights reserved.
//

#import <UIKit/UIKit.h>

@class factBook;
@class ColorWheel;

@interface ViewController : UIViewController


//IBOutlet here is a type qualifier
@property (weak, nonatomic) IBOutlet UILabel *funFact;
@property (strong, nonatomic) factBook *factBooks;
@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;


@end

