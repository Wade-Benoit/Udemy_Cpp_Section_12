//                                Uses sentinel value with array and pointer with incrementation
#include <iostream>
using namespace std;

int main() {

    int scores[] {100, 96, 89, 55, 44, -1};

    int *scorePtr {scores};

    while(*scorePtr != -1) {
        cout << *scorePtr++ << endl;
    }



    return 0;
}

