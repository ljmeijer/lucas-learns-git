//
//  GitTest_AppDelegate.h
//  GitTest
//
//  Created by Pieter de Bie on 13-06-08.
//  Copyright __MyCompanyName__ 2008 . All rights reserved.
//  Lucas also did some stuff
//  Add another small feature
//
// add something on a different branch

#import <Cocoa/Cocoa.h>
#import "PBGitRepository.h"

@class PBCLIProxy;

@interface ApplicationController : NSObject
{
	IBOutlet NSWindow *window;
	IBOutlet id firstResponder;
	//work on the main branch
	NSPersistentStoreCoordinator *persistentStoreCoordinator;
	NSManagedObjectModel *managedObjectModel;
	NSManagedObjectContext *managedObjectContext;

	PBCLIProxy *cliProxy;
}
@property (retain) PBCLIProxy* cliProxy;

- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;

- (IBAction)openPreferencesWindow:(id)sender;
- (IBAction)showAboutPanel:(id)sender;

- (IBAction)installCliTool:(id)sender;

- (IBAction)saveAction:sender;
- (IBAction) showHelp:(id) sender;

@end
