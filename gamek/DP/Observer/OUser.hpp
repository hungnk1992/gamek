//
//  User.hpp
//  gamek
//
//  Created by bsh on 2020/08/04.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef User_hpp
#define User_hpp
#include "IObserver.h"
#include "AutoMailer.hpp"
#include <string>
#include <iostream>

using namespace std;

class OUser : public IObserver{
private:
    AutoMailer *mailer;
public:
    OUser(AutoMailer *mailer){
        this->mailer = mailer;
        this->mailer->registerObserver(this);
    }
    
    void update (const std::string &message_from_subject){
        cout << " -- obs: " << message_from_subject << endl;
    }
    
    void doSomething (){
        cout << "Do something!" << endl;
    }
};

#endif /* User_hpp */
