//
//  MFT.hpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#ifndef MFT_hpp
#define MFT_hpp

#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include "mft_item.hpp"

using namespace std;


class MFT{

public:
    MFT();
    bool isInMFT(string);
    vector<MftItem*> mftItems;
    int32_t size;
    
};

#endif /* MFT_hpp */
