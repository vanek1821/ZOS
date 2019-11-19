//
//  boot_record.hpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#ifndef boot_record_hpp
#define boot_record_hpp

#include <stdio.h>
#include <string>
using namespace std;

//const int32_t MFT_FRAGMENTS_COUNT = 32;

class BootRecord{
public:
    BootRecord(long);
    void initBootRecord(long);
    long getClusterCount() { return this->clusterCount;};
    char signature[9];              //login autora FS
    char volume_descriptor[251];    //popis vygenerovaného FS
    long diskSize;              //celkova velikost VFS
    long clusterSize;           //velikost clusteru
    long clusterCount;          //pocet clusteru
    long mftStartAddress;      //adresa pocatku mft
    long bitmapStartAddress;   //adresa pocatku bitmapy
    long dataStartAddress;     //adresa pocatku datovych bloku
    long mftMaxFragmentCount; //maximalni pocet fragmentu v jednom zaznamu v mft (pozor, ne souboru)
    // stejne jako   MFT_FRAGMENTS_COUNT
};

#endif /* boot_record_hpp */
