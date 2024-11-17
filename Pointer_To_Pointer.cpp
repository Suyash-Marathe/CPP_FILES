#include <iostream>
using namespace std;

int main () {

    int var = 40;
    int *p;
    int **pp;

    p = &var;
    pp = &p;

    cout << "Variable = " << var << endl;
    cout << "Pointer = " << *p << endl;
    cout << "Pointer To Pointer = " << **pp << endl;

    return 0;
}