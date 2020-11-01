//
//  AutoMailer.hpp
//  gamek
//
//  Created by bsh on 2020/08/04.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef AutoMailer_hpp
#define AutoMailer_hpp

#include <vector>
#include "IObservable.h"
#include "IObserver.h"
#include <list>
#include <iterator>

using namespace std;

class AutoMailer : public IObservable{
private:
    
public:    
    void notify (){
        for (auto it = listObserver().begin(); it != listObserver().end(); it++){
            (*it)->update("message form auto mailer");
        }
    }
};

#endif /* AutoMailer_hpp */
