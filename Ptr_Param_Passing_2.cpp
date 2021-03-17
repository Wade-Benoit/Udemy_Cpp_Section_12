//                              PASSING POINTERS TO FUNCTIONS 3:


#include <iostream>
#include <vector>
#include <string>


using namespace std;

void display(const vector<string> *ptr);

void display(int *array, int sentinel);

int *largestInt(int *a, int *b);

int main () {

    vector<string> stooges {"Larry", "Moe", "Curly"};

    int arrayList[] {10, 20, 59, 496, 45, 23, 7, -1, 6};

    int *arrayPtr {arrayList};



    display(&stooges);

    display(arrayPtr, -1);

    int a = 20;
    int b = 40;

    int *theLargest {nullptr};

    theLargest = largestInt(&a, &b);

    cout << "The largest of the two ints " << a << " and " << b << " is " << *theLargest << endl;

    return 0;
}


void display(const vector<string> *ptr) {
//    (*ptr).at(0) = "funny"; // changes the first element to "Funny" if it WASN'T CONST IN BOTH FUNCTION AND HEADER
    for(auto str: *ptr) {   // range-based for loop to output the contents of ptr, a vector of strings
        cout << str;
        cout << " ";
    }
    cout << endl;
}







//*****VERY USEFUL, INCREMENTING THROUGH AN ARRAY USING A POINTER TO THAT ARRAY**************//

void display(int *array, int sentinel) {  // Displays the array with array pointer by reference and stops at sentinel
    while(*array != sentinel) {
        cout << *array++ << " ";  // 1) dereferences pointer, 2) displays, 3) increments the pointer to next array item
    }
    cout << endl;
}






int *largestInt(int *a, int *b) {

    if (*a > *b) {
        return a;
    }
    else
        return b;
}



