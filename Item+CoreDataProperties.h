//
//  Item+CoreDataProperties.h
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Item.h"

NS_ASSUME_NONNULL_BEGIN

@interface Item (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *created;
@property (nullable, nonatomic, retain) NSString *details;
@property (nullable, nonatomic, retain) NSNumber *price;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSManagedObject *toImage;
@property (nullable, nonatomic, retain) NSManagedObject *toItemType;
@property (nullable, nonatomic, retain) NSManagedObject *toStore;

@end

NS_ASSUME_NONNULL_END
