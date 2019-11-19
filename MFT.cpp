//
//  MFT.cpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#include "Header.h"

MFT::MFT(){
    this->size = 0;
    this->UIDcounter = 0;
    this->mftItems = vector<MftItem*>();
    //MftItem* mftItem = new MftItem(0, true, "root", 1, -1);
    //this->mftItems.push_back(mftItem);
}

bool MFT::isInMFT(string path){
    for (int i = 0; i<mftItems.size(); i++) {
        if(std::strcmp(mftItems[i]->item_name, path.c_str())==0){
            return true;
        }
    }
    return false;
}
