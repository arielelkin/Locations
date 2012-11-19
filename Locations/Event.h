//
//  Event.h
//  Locations
//
//  Created by Ariel Elkin on 19/11/2012.
//  From Apple's Core Data Tutorial for iOS
//  http://developer.apple.com/library/ios/#documentation/DataManagement/Conceptual/iPhoneCoreData01/Introduction/Introduction.html
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic) NSDate * creationDate;
@property (nonatomic) NSNumber * latitude;
@property (nonatomic) NSNumber * longitude;

@end
