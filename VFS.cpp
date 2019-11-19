//
//  VFS.cpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#include "Header.h"

VFS::VFS(FILE* file, long diskSize){
    this->file = file;
    this->bootRecord = new BootRecord(diskSize);
    this->mft = new MFT();
    this->bitmap = new bool[bootRecord->getClusterCount()];
    for (int i = 0; i<this->bootRecord->getClusterCount(); i++) {
        this->bitmap[i] = false;
    }
    //this->currentPath.push_back(mft->mftItems[0]);
    /*MftItem* mftItem = new MftItem(0, true, "root", 1, -1);
    this->mft->UIDcounter++;
    this->currentPath.push_back(mftItem);
    
    if(Functions::isBitmapWritable(this, this->currentPath[0]->item_size)){
        Functions::writeToDataBlock(this, this->currentPath[0]);
    }
    */
}


void VFS::printCurrentPath(VFS *vfs){
    cout<< ROOT_CHAR;
    for (int i = 0; i<vfs->currentPath.size(); i++) {
        cout << vfs->currentPath[i]->item_name << "/";
    }
}
