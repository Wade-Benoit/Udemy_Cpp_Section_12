#include <iostream>
using namespace std;

int main() {



    int scores[] {100, 78, 99};

    // We don't have to use address operator (&) with this because the value of the variable-name of an array is it's address



    cout << "Value of Scores is: " << scores << endl;

    // We don't have to use address operator (&) with this because the value of the variable-name of an array is it's address
    int *scorePtr {scores};

    cout << "Value of scorePtr is " << scorePtr << endl;

    cout << "\nArray Subscript Notation-----------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;


    cout << "\nPointer Subscript Notation----------------" << endl;
    cout << scorePtr[0] << endl;
    cout << scorePtr[1] << endl;
    cout << scorePtr[2] << endl;


    cout << "\nPointer Offset Notation-------------------" <<endl;
    cout << *(scorePtr)     << endl;
    cout << *(scorePtr + 1) << endl;
    cout << *(scorePtr + 2) << endl;

    cout << "\nArray Offset Notation---------------------" << endl;
    cout << *scores         << endl;
    cout << *(scores + 1)   << endl;
    cout << *(scores + 2)   << endl;





    return 0;

}
