//
//  Computer.hpp
//  gamek
//
//  Created by bsh on 2020/11/13.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef Computer_hpp
#define Computer_hpp

#include <string>

class Computer{
public:
    virtual std::string getDescription(){
        return "This is computer";
    }
};

#endif /* Computer_hpp */
