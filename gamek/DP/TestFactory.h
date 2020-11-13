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
#include "Observer/TestObserver.hpp"
#include "Singleton/TestSingleton.hpp"
#include "Decorator/TestDecorator.hpp"
#include "ITest.h"

enum TestType {
    TEST_ADAPTER,
    TEST_OBSERVER,
    TEST_SINGLETON,
    TEST_DECORATOR,
};

class TestFactory {
public:
    ITest *createTestByType (TestType type) {
        if (type == TEST_ADAPTER){
            return new TestAdapter();
        } else if (type == TEST_OBSERVER){
            return new TestObserver();
        } else if (type == TEST_SINGLETON){
            return new TestSingleton();
        } else if (type == TEST_DECORATOR){
            cout << "Test Decorator" << endl;
            return new TestDecorator();
        }
        
        return nullptr;
    }
};

#endif /* TestFactory_h */
