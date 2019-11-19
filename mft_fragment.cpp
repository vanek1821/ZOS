//
//  mft_fragment.cpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#include "Header.h"

MftFragment::MftFragment(int bitmapStartID, int32_t start_address, int32_t count){
    this->bitmapStartID = bitmapStartID;
    this->fragment_start_address = start_address;
    this->fragment_count = count;
}
