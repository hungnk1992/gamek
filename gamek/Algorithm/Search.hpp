//
//  Search.hpp
//  gamek
//
//  Created by bsh on 2020/08/03.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef Search_hpp
#define Search_hpp

#include <iostream>
#include "Sort.hpp"

using namespace std;

class Search {
    
public:
    
    void print (int arr[], int length){
        for (int i = 0; i < length; i ++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void testLinearSearch (){
        int arr[] = {11, 10, 80, 30, 90, 40, 50, 70, 3, 9, 29, 42, 94, 100, 201};
        int length = sizeof(arr)/sizeof(arr[0]);
        int index = -1;
        int searchElement = 30;
        cout << linearSearch(arr, length, searchElement, index) << " --- " << index << endl;
    }
    
    void testBinarySearch () {
        int arr[] = {11, 10, 80, 30, 90, 40, 50, 70, 3, 9, 29, 42, 94, 100, 201};
        int length = sizeof(arr)/sizeof(arr[0]);
        
        // sort before;
        Sort *sort = new Sort ();
        sort->bubbleSortAlgorithm(arr, length);
        print(arr, length);
        
        int index = -1;
        int searchElement = 100;
        cout << binarySearch(arr, length, searchElement, index) << " --- " << index << endl;
    }
    
    bool linearSearch (int arr[], int length, int x, int &index){
        int i = 0;
        while (++i<length && arr[i] != x){}
        
        if (i != length){
            index = i;
            return true;
        }
        return false;
    }
    
    // Apply only for sorted array
    bool binarySearch (int arr[], int length, int x, int &index){
        
        int left = 0;
        int right = length-1;
        int mid;
        while (left <= right) {
            mid = (left+right) / 2;
            if (arr[mid] == x){
                index = mid;
                return true;
            } else if (arr[mid] > x){
                right = mid;
            } else if (arr[mid] < x) {
                left = mid;
            }
        }
        
        return false;
    }
};

#endif /* Search_hpp */
