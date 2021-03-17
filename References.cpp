//                                      References in C++



#include <iostream>
#include <vector>
#include <string>



using namespace std;


void display(const vector<string> &list) {

    for (auto str: list) {
        cout << str << " ";
    }
}

int main() {


    int num {100};
    int &ref {num};    // Think of references as constant pointers to another variable

    cout << "The value of variable num is " << num << " and the value of reference 'ref' is " << ref << endl;


    num = 200;

    cout << "The value of variable num is now " << num << " and the value of reference 'ref' is now " << ref << endl;





    // Part 2

    vector <string> stooges {"Larry", "Moe", "Curly"};

    for(auto str: stooges) {     // str is a COPY of each element in stooges without the &

        str = "funny";

    }

    cout << "\n\nThe result of using range-based for loop to change a vector without a reference (&) is: " << endl;

    display(stooges);





    for (auto &str: stooges) {   // str now references the actual stooges vector
        str = "funny";
    }

    cout << "\n\nThe result of using range-based for loop to change a vector with a reference (&) is: " << endl;

    display(stooges);




    return 0;
}



