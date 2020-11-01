//
//  TestSingleton.hpp
//  gamek
//
//  Created by bsh on 2020/08/05.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef TestSingleton_hpp
#define TestSingleton_hpp
#include <iostream>
#include "ITest.h"
#include "Singleton.hpp"

using namespace std;

class TestSingleton : public ITest {
public:
    void test (){
        Singleton *sg1 = Singleton::getInstance();
        Singleton *sg2 = Singleton::getInstance();
        Singleton *sg3 = Singleton::getInstance();
        Singleton *sg4 = Singleton::getInstance();
        Singleton *sg5 = Singleton::getInstance();
        Singleton::doSomething();
        
        cout << Singleton::getInstanceCounter() << " -- " << sg1->getSomething() << endl;
    }
};

#endif /* TestSingleton_hpp */
