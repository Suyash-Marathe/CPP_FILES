#include <iostream>
using namespace std;

class SuperClass {

    public :
    void super_print () {

        cout << "This is from SuperClass." << endl;
    }
};

class SubClass1 : public SuperClass {

    public :
    void sub_print1 () {

        cout << "This is from Sub Class 1." << endl;
    }
};

class SubClass2 : public SuperClass {

    public :
    void sub_print2 () {

        cout << "This is from Sub Class 2." << endl;
    }
};

int main () {

    SubClass1 obj1;
    SubClass2 obj2;

    obj1.sub_print1();
    obj1.super_print();

    obj2.sub_print2();
    obj2.super_print();

    return 0;
}