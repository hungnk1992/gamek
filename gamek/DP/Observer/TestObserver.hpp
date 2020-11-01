//
//  TestObserver.hpp
//  gamek
//
//  Created by bsh on 2020/08/04.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef TestObserver_hpp
#define TestObserver_hpp

#include <iostream>
#include <string>
#include "ITest.h"
#include "OUser.hpp"

using namespace std;

class TestObserver: public ITest {
public:
    void test (){
        AutoMailer *mailer = new AutoMailer();
        OUser *user = new OUser (mailer);
        OUser *user2 = new OUser (mailer);
        user->doSomething();
        user2->doSomething();
        mailer->notify();
    }
    
    ~TestObserver(){
        cout << "TestAdapter destructor" << endl;
    }
};


#endif /* TestObserver_hpp */
