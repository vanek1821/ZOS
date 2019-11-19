//
//  boot_record.cpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#include "Header.h"

BootRecord::BootRecord(long diskSize){
    strcpy(signature, "Vanek");
    strcpy(volume_descriptor, "Jsem deskriptor");
    
    this->diskSize = diskSize;
    this->clusterSize = CLUSTER_SIZE;
    this->clusterCount = diskSize/clusterSize;
    this->mftStartAddress = sizeof(BootRecord);
    this->bitmapStartAddress = mftStartAddress + sizeof(MFT) + 0.1 * diskSize;
    this->dataStartAddress = bitmapStartAddress + sizeof(bool)*clusterCount;
    this->mftMaxFragmentCount = MFT_FRAGMENTS_COUNT;
}
