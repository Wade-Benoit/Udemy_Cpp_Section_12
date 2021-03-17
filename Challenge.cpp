//  *********************************** SECTION 12 CHALLENGE *************************************************






// WRITE THE TWO UNDEFINED FUNCTIONS IN THE MAIN PROGRAM BELOW: THE PRINT AND APPLY-ALL FUNCTIONS




// ORIGINAL SOLUTION BY WADE BENOIT

#include <iostream>
#include <vector>
#include <string>


using namespace std;


void print(const int *const arrayName, size_t size) {

    for (int i = 0; i < size; i++) {
        cout << "\n" << arrayName[i];

    }

    cout << "\n------------------------" << endl << endl;
}





// SPOT ON TO SOLUTION, BESIDES CONST IN PARAMETERS
int *applyAll(const int  *const array1, int size1, const int * const array2, int size2) {

    int newSize = size1 * size2;
    int *newArray = new int[newSize];




    int count = 0;

    for (size_t i = 0; i < size2; i ++) {

        for (size_t j = 0; j < size1; j++) {

            newArray[count] = array2[i] * array1[j];
            count ++;

            }
        }








    return newArray;
}


int main() {

    const size_t array_1_size {5};
    const size_t array_2_size {3};

    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};


    cout << "Array1: ";
    print(array1, array_1_size);

    cout << "Array2: ";
    print(array2, array_2_size);


    int *results = applyAll(array1, array_1_size, array2, array_2_size);
    constexpr size_t resultsSize {array_1_size * array_2_size};


    cout << "Results: ";
    print(results, resultsSize);

    
    delete [] results;              // DONT FORGET TO RELEASE STORAGE ON THE HEAP


    return 0;
}

