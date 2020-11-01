//
//  IObservable.h
//  gamek
//
//  Created by bsh on 2020/08/04.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef IObservable_h
#define IObservable_h
#include "IObserver.h"
#include <list>
#include <vector>

using namespace std;

class IObservable {
private:
    vector<IObserver*> observers;
public:
    virtual ~IObservable(){}
    
    void registerObserver (IObserver *observer){
        observers.push_back(observer);
    }
    void unRegisterObserver (IObserver *observer){
//        observers.remove(observer);
    }
    
    vector<IObserver*> listObserver(){
        return this->observers;
    }
    
    virtual void notify() = 0;
};

#endif /* IObservable_h */
