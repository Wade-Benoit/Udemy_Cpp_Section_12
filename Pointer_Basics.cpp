//
//  main.cpp
//  Section12_Pointer_Basics
//
//  Created by Wade Benoit on 8/28/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {

    int *p;    //Incorrect way, should ALWAYS INITIALIZE POINTER

    cout << "The value of point p is " << p << endl;      // Will give us garbage until it is initialized

    cout << "The address of pointer p using & is " << &p << endl;

    cout << "The size of pointer p in memory is " << sizeof(p) << " bytes" << endl;


    p = nullptr;

    cout << "After initializing p the value is " << p << endl;
    cout << "The address of pointer p is now " << &p << endl;

    int *intPtr {nullptr};


    return 0;
}
