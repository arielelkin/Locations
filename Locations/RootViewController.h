//
//  RootViewController.h
//  Locations
//
//  Created by Ariel Elkin on 19/11/2012.
//  From Apple's Core Data Tutorial for iOS
//  http://developer.apple.com/library/ios/#documentation/DataManagement/Conceptual/iPhoneCoreData01/Introduction/Introduction.html
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface RootViewController : UITableViewController <CLLocationManagerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
