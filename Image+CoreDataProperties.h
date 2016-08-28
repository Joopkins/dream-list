//
//  Image+CoreDataProperties.h
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Image.h"

NS_ASSUME_NONNULL_BEGIN

@interface Image (CoreDataProperties)

@property (nullable, nonatomic, retain) id image;
@property (nullable, nonatomic, retain) Item *toItem;
@property (nullable, nonatomic, retain) NSSet<Store *> *toStore;

@end

@interface Image (CoreDataGeneratedAccessors)

- (void)addToStoreObject:(Store *)value;
- (void)removeToStoreObject:(Store *)value;
- (void)addToStore:(NSSet<Store *> *)values;
- (void)removeToStore:(NSSet<Store *> *)values;

@end

NS_ASSUME_NONNULL_END
