//
//  MainWindow.h
//  Cog
//
//  Created by Vincent Spader on 2/22/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MainWindow : NSWindow {
	IBOutlet NSView *playlistView;
	IBOutlet NSToolbar *mainToolbar;

	NSImage *hdcdLogo;
}

- (void)showHDCDLogo:(BOOL)show;

@end
