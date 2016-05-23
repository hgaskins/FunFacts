//
//  factBook.h
//  FunFacts
//
//  Created by hannah gaskins on 5/23/16.
//  Copyright © 2016 hannah gaskins. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface factBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
