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
#include "UserMgr.hpp"
#include "IOldUser.hpp"

class UserAdapter : public IOldUser{
private:
    UserMgr *userMgr;
    string name;
public:
    UserAdapter(UserMgr *userMgr){
        this->userMgr = userMgr;
        this->name = userMgr->getFirstName() + userMgr->getLastName();
    }
    
    string getName (){
        return this->name;
    }
    
    int getAge (){
        return this->userMgr->getAge();
    }
    
};
#endif /* UserAdapter_hpp */
