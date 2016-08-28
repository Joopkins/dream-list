//
//  Store+CoreDataProperties.h
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Store.h"

NS_ASSUME_NONNULL_BEGIN

@interface Store (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSManagedObject *toImage;
@property (nullable, nonatomic, retain) NSSet<Item *> *toItem;

@end

@interface Store (CoreDataGeneratedAccessors)

- (void)addToItemObject:(Item *)value;
- (void)removeToItemObject:(Item *)value;
- (void)addToItem:(NSSet<Item *> *)values;
- (void)removeToItem:(NSSet<Item *> *)values;

@end

NS_ASSUME_NONNULL_END
