//
//  UserMgr.hpp
//  gamek
//
//  Created by bsh on 2020/08/02.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef UserMgr_hpp
#define UserMgr_hpp

#include <stdio.h>
#include <string>

using namespace std;

class UserMgr {
private:
    string firstName;
    string lastName;
    int age;
public:
    UserMgr (string firstName, string lastName, int age){
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
    
    string getFirstName (){
        return this->firstName;
    }
    
    string getLastName (){
        return this->lastName;
    }
    
    int getAge (){
        return this->age;
    }
};

#endif /* UserMgr_hpp */
