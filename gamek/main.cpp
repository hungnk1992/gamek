

#include "Algorithm/Sort.hpp"
#include "Algorithm/Search.cpp"

int main (){
    Search *src = new Search();
    src->testLinearSearch();
    src->testBinarySearch();
//    Sort *sort = new Sort ();
//    sort->testQuickSort();
//    sort->testBubbleSort();
//    sort->testSelectionSort();
    return 0;
}
