//
//  RSSTableViewController.h
//  WildJunket
//
//  Created by David García Fernández on 04/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSSTableViewController : UITableViewController{
    NSMutableArray *_allEntries;
}

@property (retain) NSMutableArray *allEntries;

@end
