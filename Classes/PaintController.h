//
//  PaintController.h
//  feelings
//
//  Created by Androidicus Maximus on 8/2/09.
//  Copyright 2009 Stone Design Corp. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PaintingView;

@interface PaintController : UIViewController {
	PaintingView *drawingView;
	CFTimeInterval		lastTime;
	
}

@end
