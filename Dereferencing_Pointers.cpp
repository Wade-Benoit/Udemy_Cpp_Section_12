//          DEREFERENCING A POINTER


#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int score {100};
    
    int *scorePtr {&score};  //ScorePtr now points to the int value of score
    
    cout << scorePtr << endl;  // Not de-referenced, returns the address of score
    cout << &score   << endl << endl;  //Same as scorePtr value, address of score
    
    cout << *scorePtr << endl; // Dereferenced, returns the value of score
    
    
    cout << "\n\n\n";
    *scorePtr = 200;    //changing value of score by dereferencing scorePtr
    
    cout << score << endl;  // Value of variable
    cout << *scorePtr << endl; //Value of variable pointed to by dereferencing pointer variable
    
    
    
    
    cout << "\n\n\n";
    
    // ANOTHER EXAMPLE OF DEREFERENCING  //
    
    string name {};
    
    string *stringPtr {&name};
    
    name = "Frank";
    
    cout << name << endl;
    cout << *stringPtr << endl;
    
    cout << endl;
    
    name = "Susie";
    
    cout << *stringPtr << endl;
    
    
    
    
    cout << "\n\n\n";
     // ANOTHER EXAMPLE OF DEREFERENCING, with a VECTOR  //
    
    vector <string> stooges {"Larry", "Moe", "Curly"};
    
    vector <string> *vecPtr {&stooges};
    
    cout << "The first stooge in the vector is " << (*vecPtr).at(0) << endl;   // This is how to print just element 0 of vec with pointer
    
    
    for (auto i : *vecPtr) {     //Using pointer to point to vec array in range-based for loop
        cout << i << " ";
        
    }
    cout << endl;
    
    
    return 0;
}
