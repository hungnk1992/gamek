//
//  TestAdapter.hpp
//  gamek
//
//  Created by bsh on 2020/08/02.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef TestAdapter_hpp
#define TestAdapter_hpp

#include <iostream>
#include <string>
#include "ITest.h"
#include "User.hpp"
#include "UserAdapter.hpp"

using namespace std;

class TestAdapter: public ITest {
public:
    void test (){
        User *userMgr = new User("Hung", "Nguyen", 12);
        UserAdapter *user = new UserAdapter(userMgr);
        cout << "Factory Test" << endl;
        cout << user->getName() << " --- " << user->getAge() << endl;
    }
    
    ~TestAdapter(){
        cout << "TestAdapter destructor" << endl;
    }
};

#endif /* TestAdapter_hpp */
