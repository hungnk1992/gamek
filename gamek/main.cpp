

#include "Algorithm/Sort.hpp"
#include "Algorithm/Search.cpp"
#include "DP/TestFactory.h"
#include "DP/ITest.h"

void testDesignPattern (){
    TestFactory *factory = new TestFactory ();
//    ITest *test = factory->createTestByType(TEST_OBSERVER);
    ITest *test = factory->createTestByType(TEST_SINGLETON);
    test->test();
}

void testAlgorithm (){
    Search *src = new Search();
    src->testLinearSearch();
    src->testBinarySearch();
    Sort *sort = new Sort ();
    sort->testQuickSort();
    sort->testBubbleSort();
    sort->testSelectionSort();
}
union date {
    double day;
    int month;
};

int main (){
//    testDesignPattern();
//    date dt;
//    cout << sizeof(dt) << endl;
//
//    dt.day = 4;
//    dt.month = 8;
//
//    cout << sizeof(dt) << endl;
//
//    cout << dt.day << " -- " << dt.month << endl;
    int x = 5;
    
    [&] {
        cout << x;
    }();
//    cout << rt << endl;
    return 0;
}
