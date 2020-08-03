//
//  Sort.hpp
//  gamek
//
//  Created by bsh on 2020/08/03.
//  Copyright © 2020 bsh. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp
#include <iostream>

using namespace std;

class Sort {
public:
    void swap (int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    void testQuickSort (){
        int arr[] = {10, 80, 30, 90, 40, 50, 70, 3, 9, 29, 42, 94, 100, 201};
        int right = sizeof(arr)/sizeof(arr[0]);
        quickSortAlgorithm(arr, 0, right-1);
        
        for (int i = 0; i < right; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void testBubbleSort (){
        int arr[] = {11, 10, 80, 30, 90, 40, 50, 70, 3, 9, 29, 42, 94, 100, 201};
        int length = sizeof(arr)/sizeof(arr[0]);
        bubbleSortAlgorithm(arr, length);
        
        for (int i = 0; i < length; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void testSelectionSort (){
        int arr[] = {11, 10, 80, 30, 90, 40, 50, 70, 3, 9, 29, 42, 94, 100, 201};
        int length = sizeof(arr)/sizeof(arr[0]);
        selectionSortAlgorithm(arr, length);
        
        for (int i = 0; i < length; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void selectionSortAlgorithm (int arr[], int length){
        for (int i=0; i<length-1; i++){
            int min_idx = i;
            for (int j=i+1; j<length; j++){
                if (arr[j] < arr[min_idx]){
                    min_idx = j;
                }
            }
            swap(arr[i], arr[min_idx]);
        }
    }
    
    void bubbleSortAlgorithm (int arr[], int length){
        for (int i=0; i<length; i++){
            for (int j=0; j<length-i-1; j++){
                if (arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
    
    void quickSortAlgorithm (int arr[], int left, int right){
        if (left < right){
            // divide by pi
            int pi = quickSortPartition(arr, left, right);
            
            // sort left
            quickSortAlgorithm(arr, left, pi-1);
            
            // sort right
            quickSortAlgorithm(arr, pi+1, right);
        }
    }
    
    int quickSortPartition (int arr[], int left, int right){
        int pivot = right;
        while (true) {
            while (left <= right && arr[left] > arr[pivot]) left ++;
            while (right >= left && arr[right] < arr[pivot]) right--;
            if (left >= right)
                break;
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        swap(arr[left], arr[pivot]);
        
        return left;
    }
};

#endif /* Sort_hpp */
