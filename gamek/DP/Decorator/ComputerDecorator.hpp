//
//  ComputerDecorator.hpp
//  gamek
//
//  Created by bsh on 2020/11/13.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef ComputerDecorator_hpp
#define ComputerDecorator_hpp

#include <stdio.h>
#include "Computer.hpp"

class ComputerDecorator : public Computer{
private:
    Computer *decorator;
public:
    ComputerDecorator (Computer *decorator){
        this->decorator = decorator;
    }
    
    Computer *getDecorator (){
        return decorator;
    }
};

#endif /* ComputerDecorator_hpp */
