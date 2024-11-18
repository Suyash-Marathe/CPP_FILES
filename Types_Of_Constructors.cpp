#include <iostream>
using namespace std;

class MyClass {

    private :
    int value;

    public :

    // Defualt construct do not have any parameters.
    MyClass () {

        int value = 0;
        cout << "Default Constructor Value = " << value << endl;
    }

    // Parameterized Constructor have parameters.
    MyClass (int v) {

        value = v;
        cout << "Parameterized Constructor Value = " << value << endl;
    }

    //Copy Constructor is created using an existing constructor.
    MyClass (const MyClass &obj) {

        cout << "Copy Constructor Value = " << value << endl;
    }
};

int main () {

    MyClass obj1;
    MyClass obj2(20);
    MyClass obj3 = obj2;

    return 0;
}