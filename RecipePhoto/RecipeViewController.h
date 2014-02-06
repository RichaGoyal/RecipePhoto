//
//  RecipeViewController.h
//  RecipePhoto
//
//  Created by Intuzion on 05/02/14.
//  Copyright (c) 2014 Intuzion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController
@property (weak, nonatomic) NSString *recipeImageName;
@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;
- (IBAction)close:(id)sender;

@end
