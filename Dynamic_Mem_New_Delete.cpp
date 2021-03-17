
//  main.cpp
//  Section_12_Dynamic_Memory_Allocation
//
//  Created by Wade Benoit on 8/30/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//
//
//
//
//
//
//
//
//                          USING POINTERS TO DYNAMICALLY ALLOCATE MEMORY, NEW/DELETE

#include <iostream>
using namespace std;


void offSets();



int main(int argc, const char * argv[]) {
    // All Dynamic Allocation happens in the HEAP, the heap also holds global variables


    int *intPtr {nullptr};
    intPtr = new int;     //Allocates heap memory until deleted
    cout << intPtr << " is the address of the int just allocated" << endl;
    delete intPtr;


    // This below allows user to allocate a number of double variables of temp

    size_t size{0};
    double *tempPtr {nullptr};

    cout << "How many temps do you have? Enter here: ";
    cin >> size;

    tempPtr = new double[size];   //Makes a new array of doubles of the size user entered in



    cout << "Enter the first element of this new array: " << endl;       //Address of only the first double in array
    cin >> tempPtr[0];


    cout << "The element you just entered is the double " << tempPtr[0] << endl;

    delete [] tempPtr;      //IMPORTANT, THIS IS THE SYNTAX FOR DELETING ARRAY OBJECT








    return 0;
}



