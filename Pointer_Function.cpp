#include <iostream>
using namespace std;

int add (int a, int b) {

    return a + b;
}

int main () {

    // Function Pointer is a type that can point to the function.

    // Function Pointer pointing to the add function.
    int (*ptrfunc) (int , int) = add;
    int result;
    
    result = ptrfunc (20, 40);

    cout << "Sum = " << result;

    return 0;
}