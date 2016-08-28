//
//  Item.swift
//  DreamLister
//
//  Created by Richard Bryant on 8/27/16.
//  Copyright © 2016 Joopkins. All rights reserved.
//

import Foundation
import CoreData

@objc(Item)
class Item: NSManagedObject {

// Insert code here to add functionality to your managed object subclass
    override func awakeFromInsert() {
        super.awakeFromInsert()
        
        self.created = NSDate()
    }
}
