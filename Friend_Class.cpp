// Friend class can access private members of another class.

#include <iostream>
using namespace std;

class One {

    int a = 20;
    friend class Two;
};

class Two {

    public :
    void show (One r) {

        cout << r.a;
    }
};

int main () {

    One obj1;
    Two obj2;

    obj2.show(obj1);

    return 0;
}