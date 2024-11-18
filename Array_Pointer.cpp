#include <iostream>
using namespace std;

int main () {

    // An Array itself is a pointer.

    int ptr[20] = { 2, 4, 6, 8};

    for (int i=0; i<4; i++) {

        cout << ptr[i] << endl;
    }

    return 0;

}