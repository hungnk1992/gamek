//
//  IObserver.h
//  gamek
//
//  Created by bsh on 2020/08/04.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef IObserver_h
#define IObserver_h
#include <string>

class IObserver{
public:
    virtual ~IObserver(){}
    virtual void update (const std::string &message_from_subject)=0;
};


#endif /* IObserver_h */
