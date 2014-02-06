//
//  RecipeCollectionViewController.h
//  RecipePhoto
//
//  Created by Intuzion on 05/02/14.
//  Copyright (c) 2014 Intuzion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RecipeViewCell.h"
#import "RecipeCollectionHeaderView.h"
#import "RecipeViewController.h"

@interface RecipeCollectionViewController : UICollectionViewController
{
    NSArray *recipePhotos;
}
@property (weak, nonatomic) IBOutlet UIBarButtonItem *shareButton;
- (IBAction)shareButtonTouched:(id)sender;

@end
