//
//  AGameCell.m
//  Ludotheque
//
//  Created by Babacar-sobel Thiaw on 10/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import "AGameCell.h"

@implementation AGameCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
