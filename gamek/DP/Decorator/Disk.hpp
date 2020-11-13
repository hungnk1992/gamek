//
//  Disk.hpp
//  gamek
//
//  Created by bsh on 2020/11/13.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef Disk_hpp
#define Disk_hpp

#include <stdio.h>
#include "Computer.hpp"
#include "ComputerDecorator.hpp"
#include <string>

class Disk : public ComputerDecorator{
public:
    Disk(Computer *computerDecorator) : ComputerDecorator (computerDecorator){
        //
    }
    
    std::string getDescription (){
        return this->getDecorator()->getDescription() + " with disk";
    }
};

#endif /* Disk_hpp */
