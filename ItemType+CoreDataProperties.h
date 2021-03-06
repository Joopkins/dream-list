//
//  ItemType+CoreDataProperties.h
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ItemType.h"

NS_ASSUME_NONNULL_BEGIN

@interface ItemType (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *type;
@property (nullable, nonatomic, retain) Item *toItem;

@end

NS_ASSUME_NONNULL_END
