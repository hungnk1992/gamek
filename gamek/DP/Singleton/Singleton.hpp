//
//  Singleton.hpp
//  gamek
//
//  Created by bsh on 2020/08/05.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp
#include <mutex>

using namespace std;

//mutex _m;
class Singleton {
private:
    static Singleton *instance;
    static int instanceCounter;
    static mutex _m;
    
    Singleton(){
        instanceCounter ++;
    }
    
    int xxx = 0;
public:
    static Singleton *getInstance (){
        lock_guard<mutex> myLock (_m);
        if (instance == nullptr){
            
            instance = new Singleton ();
        }
        
        return instance;
    }
    
    static int getInstanceCounter (){
        return instanceCounter;
    }
    
    static void doSomething (){
        Singleton *ton = getInstance();
        ton->xxx = 12;
    }
    
    int getSomething (){
        return xxx;
    }
};


#endif /* Singleton_hpp */
