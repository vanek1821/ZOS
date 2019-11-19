//
//  mft_item.cpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#include "Header.h"

MftItem::MftItem(int uid, bool isDirectory, string name, long item_size, int parentID, bool isSymlink, int linkedUID){
    
    this->uid = uid;
    this->isDirectory = isDirectory;
    strcpy(this->item_name, name.c_str());
    this->item_order = 1;
    this->item_order_total = 1;
    this->item_size = item_size;
    this->parentID = parentID;
    this->isSymlink = isSymlink;
    this->linkedUID = linkedUID;
    for (int i = 0; i < MFT_FRAGMENTS_COUNT; i++) {
        this->fragments[i] = new MftFragment(0, 0, 0);
        //this->fragments[i]->fragment_count = 0;
        //this->fragments[i]->fragment_start_address = 0;
    }
    
    
}
