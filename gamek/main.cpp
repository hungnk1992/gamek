

#include "Algorithm/Sort.hpp"
#include "Algorithm/Search.cpp"
#include "DP/TestFactory.h"
#include "DP/ITest.h"

void testDesignPattern (){
    TestFactory *factory = new TestFactory ();
//    ITest *test = factory->createTestByType(TEST_OBSERVER);
//    ITest *test = factory->createTestByType(TEST_SINGLETON);
    ITest *test = factory->createTestByType(TEST_DECORATOR);
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
    testDesignPattern();
    return 0;
}
