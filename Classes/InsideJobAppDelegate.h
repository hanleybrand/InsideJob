//
//  InsideJobAppDelegate.h
//  InsideJob
//
//  Created by Adam Preble on 10/6/10.
//  Copyright 2010 Adam Preble. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface InsideJobAppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate> {
	NSMutableArray *worlds;
	IBOutlet NSWindow *worldChooserWindow;
	IBOutlet NSTableView *worldChooserTable;
	IBOutlet NSButton *openButton;
}

@end
