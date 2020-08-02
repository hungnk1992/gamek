//
//  ITest.h
//  gamek
//
//  Created by bsh on 2020/08/02.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef ITest_h
#define ITest_h
#include <iostream>

class ITest {
public:
    virtual void test () = 0;
    virtual ~ITest(){};
};

#endif /* ITest_h */
