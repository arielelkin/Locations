##Sample code for Apple's Core Data Tutorial 

Apple provides a very tutorial on using Core Data on iOS: [Core Data Tutorial for iOS](http://developer.apple.com/library/ios/#documentation/DataManagement/Conceptual/iPhoneCoreData01/Introduction/Introduction.html)

However, at present (November 2012) the sample code is for iOS 3 and Xcode 3. The sample code doesn't use [ARC](http://developer.apple.com/library/mac/#releasenotes/ObjectiveC/RN-TransitioningToARC/Introduction/Introduction.html) and is missing some amendments to enable the code to run on Xcode 4. 

###To go through Apple's tutorial using Xcode 4: 
1. Create a new project using the Empty Application Template (instead of the Window-Based Application template). 
1. In the Options section, select the switch to use Core Data for storage. 
1. Do not use Storyboards. 
1. Call the project “Locations”.
1. In `AppDelegate.m`, under `application didFinishLaunchingWithOptions:` add the line

```obj-c
self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
```
1. Follow the rest of the tutorial (do not include any lines with `release`)

###Support
Ask questions in this repository's [Issues page](https://github.com/arielelkin/Locations/issues).