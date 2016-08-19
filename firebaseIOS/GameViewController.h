//
//  GameViewController.h
//  firebaseIOS
//

//  Copyright (c) 2016 Tin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SceneKit/SceneKit.h>
@import Firebase;


@interface GameViewController : UIViewController

@property (strong, nonatomic) FIRDatabase* ptrDatabase;


@end
