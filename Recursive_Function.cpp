#include <iostream>
using namespace std;

int fact (int n) {

    if (n <= 1) {

        return 1;
    }
    else {

        return n * fact(n - 1);
    }
}

int main () {

    int num = 4;

    cout << "Factorial of " << num << " is " << fact(num) << endl;

    return 0;
}