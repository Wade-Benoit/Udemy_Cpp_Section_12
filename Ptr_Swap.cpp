//                                           PASSING POINTERS TO FUNCTIONS 2, WITH SWAP


#include <iostream>
using namespace std;


void swap(int *a, int *b); //function that accepts two pointers to integers


int main() {

    int x {10};
    int y {20};

    cout << "\nx: " << x << "  and y: " << y << endl;

    swap(&x, &y);

    cout << "After swapping: " << endl;
    cout << "\nx: " << x << "  and y: " << y << endl;

    return 0;
}


void swap(int *a, int *b) {   //Function takes the values of the pointed-to variables and swaps them

    int temp;    //placeholder
    temp = *a;   //dereferencing and changing the pointer values by reference to them
    *a   = *b;
    *b   = temp;
}
