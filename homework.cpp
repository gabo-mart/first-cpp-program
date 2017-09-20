//
// Created by Gabriel Martinez on 9/19/17.
//

#include <iostream>
#include "homework.h"

using namespace std;

void Homework::initialize_array(int* arr, int size) {// set odd indexes to 1 and evens to 0
    for(int i = 0; i < size; i++)
        arr[i] = i % 2;                             // here's one way to access array elements
}

void Homework::print_array(int *arr, int size) {    // print all elements in the array method
    for(int i = 0; i < size-1 ; i++)
        cout << *(arr + i) << ", ";                 // here's a different syntax to access array elements
    cout << *(arr + size - 1)<< endl;               // print the last array element appending newline rather than comma
}

void Homework::selection_sort(int * arr, int size) {// selection sort method
    int max, temp;                                  // define placeholders for index with the maximum element
                                                    // temp holds the value of the element to be switched out later
    for(int i = 0; i < size - 1; i++) {             // iterate through each element
        max = i;                                    // set default max to current element being scanned
        for(int j = i + 1; j < size; j++) {         // iterate through every element after the current element
            if(arr[j] > arr[max])                   // check if current scanned element, j, is smaller than current max
                max = j;                            // if max is smaller, insert the new max arr[j]
        }

        temp = arr[i];                              // hold value of value that was being checked upon
        arr[i] = arr[max];                          // set new value to be the max we found after that value, at i
        arr[max] = temp;                            // set that new value's now old position to the element we were scanning against
    }
}

int Homework::factorial(int n) {
    if(n > 1)                                   // check that we are not yet at the base case
        return n * factorial(n-1);              // call recursive function
    else
        return 1;                               // base case: return 1
}