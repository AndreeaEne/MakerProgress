//
//  AppDelegate.h
//  MakerProgress
//
//  Created by Andreea-Daniela Ene on 23/02/2017.
//  Copyright © 2017 Andreea-Daniela Ene. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

