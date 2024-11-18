#include <iostream>
using namespace std;

class A {

    public :
    void show1 () {

        cout << "Class A" << endl;
    }
};

class B : public A {

    public :
    void show2 () {

        cout << "Class B" << endl;
    }
};

class C : public B {

    public :
    void show3 () {

        cout << "Class C" << endl;
    }
};

int main () {

    C obj;
    obj.show1 ();
    obj.show2 ();
    obj.show3 ();

    return 0;
}