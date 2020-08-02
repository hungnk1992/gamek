//
//  UserAdapter.hpp
//  gamek
//
//  Created by bsh on 2020/08/02.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef UserAdapter_hpp
#define UserAdapter_hpp

#include <stdio.h>
#include <string>
#include "User.hpp"

class UserAdapter{
private:
    User *user;
    string name;
public:
    UserAdapter(User *user){
        this->user = user;
        this->name = user->getFirstName() + user->getLastName();
    }
    
    string getName (){
        return this->name;
    }
    
    int getAge (){
        return this->user->getAge();
    }
    
};
#endif /* UserAdapter_hpp */
