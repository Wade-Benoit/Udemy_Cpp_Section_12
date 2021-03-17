//2/20/20
//
//
                           //           RETURNING DYNAMICALLY ALLOCATED MEMORY
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *createArray(int size, int initValue);

void display(const int *const arrayName, size_t size) {

    for (int i = 0; i < size; i++) {
        cout << arrayName[i] << " ";
    }

}

int main() {

    int *myArray {nullptr};
    size_t size;
    int initValue {};


    cout << "How many integers would you like to allocate?" << endl;
    cin >> size;
    cout << "What will their initial value be?" << endl;
    cin >> initValue;


    myArray = createArray(size, initValue);

    cout << "*****************************" << endl;

    display(myArray, size);



    //HERE

    delete [] myArray;
}


int *createArray(int size, int initValue) {  //Creates an array full of zeroes, the initial value

    int *newStorage = new int[size];

    for(int i = 0; i < size; i++) {
        *(newStorage + i) = initValue;    // uses pointer offset notation, could use array notation
    }
    return newStorage; //address of first integer in the array
}

//NEVER RETURN POINTER TO A LOCAL-TO-THE-FUNCTION VARIABLE

//UNDERSTAND ALL OF THE ARRAY VALUES ARE ON THE HEAP**








//2/25/20


// Always Initialize pointers, otherwise it may overwrite other important memory
// Always delete pointers to prevent memory leaks
// Never reference a local pointer outside of that scope



