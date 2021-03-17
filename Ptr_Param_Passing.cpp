//                                        Const and Pointers,  Passing pointers to functions


#include <iostream>
using namespace std;


void doubleData(int *int_ptr);



int main() {


    int highScore {50};
    int lowScore  {25};

    const int *constPtr = &highScore;   //becomes a constant pointer, changing the value isn't possible
    int *const scorePtr = &lowScore;    // Pointer itself is a constant, cannot be changed to point somewhere else.

    doubleData(scorePtr);
    cout << "And now the second call: " << endl;
    doubleData(&highScore); //The function accepts an address really, so address operator with any variable works
    return 0;
}


void doubleData(int *int_ptr) {
    *int_ptr *= 2;
    cout << "The value of the pointer is now " << *int_ptr << endl; // Success, this doubles it to 50
}



