//
//  Singleton.cpp
//  gamek
//
//  Created by bsh on 2020/08/05.
//  Copyright © 2020 bsh. All rights reserved.
//

#include "Singleton.hpp"

int Singleton::instanceCounter = 0;
Singleton *Singleton::instance = nullptr;
mutex Singleton::_m;
