//
//  PlayingCard.h
//  Matchismo
//
//  Created by David Sachdev on 2/6/13.
//  Copyright (c) 2013 Innotac, Inc. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property(strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) validSuits;
+ (NSUInteger) maxRank;

@end
