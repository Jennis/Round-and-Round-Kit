////////////////////////////////////////////////////////////////////////////////
//
//  Jasper Blues
//  Copyright 2012 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#define SWIZZLE_BACK    true

@interface UINavigationController (PushPopRotated)

- (void) pushViewController:(UIViewController*)controller rotated:(BOOL)rotated;

- (void) popViewControllerRotated:(BOOL)rotated;


@end