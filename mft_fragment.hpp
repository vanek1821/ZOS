//
//  mft_fragment.hpp
//  FileSystem
//
//  Created by Jakub  Vaněk on 26/01/2019.
//  Copyright © 2019 Jakub  Vaněk. All rights reserved.
//

#ifndef mft_fragment_hpp
#define mft_fragment_hpp

#include <stdio.h>

class MftFragment {
public:
    MftFragment(int, int32_t, int32_t);
    int32_t fragment_start_address;     //start adresa
    int32_t fragment_count;             //pocet clusteru ve fragmentu
    int bitmapStartID;
};

#endif /* mft_fragment_hpp */
