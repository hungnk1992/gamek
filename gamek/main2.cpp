
#include <iostream>
#include <vector>

#include "DP/ITest.h"
#include "DP/TestFactory.h"

using namespace std;

vector<ITest*> testsuit;
void createTests (){
    // create factory test;
    TestFactory *factory = new TestFactory ();
    
    // Test adapter.
    testsuit.push_back(factory->createTestByType(TEST_ADAPTER));
}

void printTests (){
    for (auto iterator = testsuit.begin(); iterator != testsuit.end(); iterator++){
        (*iterator)->test();
    }
}
//int main()
//{
//    createTests();
//    
//    printTests();
//    
//    return 0;
//}
