//
//  TestDecorator.hpp
//  gamek
//
//  Created by bsh on 2020/11/13.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef TestDecorator_hpp
#define TestDecorator_hpp

#include <iostream>
#include "ITest.h"
#include "Computer.hpp"
#include "Disk.hpp"
#include "Mouse.hpp"

class TestDecorator : public ITest{
public:
    void test (){
        Computer *computer = new Computer();
        computer = new Disk(computer);
        computer = new Mouse(computer);
        std::cout << computer->getDescription() << endl;
    }
};

#endif /* TestDecorator_hpp */
