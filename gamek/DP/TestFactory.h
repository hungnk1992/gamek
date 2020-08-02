//
//  TestFactory.h
//  gamek
//
//  Created by bsh on 2020/08/02.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef TestFactory_h
#define TestFactory_h

#include "Adapter/TestAdapter.hpp"
#include "ITest.h"

enum TestType {
    TEST_ADAPTER,
};

class TestFactory {
public:
    ITest *createTestByType (TestType type) {
//        if (type == TEST_ADAPTER){
            return new TestAdapter ();
//        }
    }
};

#endif /* TestFactory_h */
