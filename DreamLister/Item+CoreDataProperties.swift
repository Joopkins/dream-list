//
//  Item+CoreDataProperties.swift
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

import Foundation
import CoreData

extension Item {

    @NSManaged var created: NSDate?
    @NSManaged var details: String?
    @NSManaged var price: NSNumber?
    @NSManaged var title: String?
    @NSManaged var toImage: Image?
    @NSManaged var toItemType: ItemType?
    @NSManaged var toStore: Store?

}
