#include <iostream>
using namespace std;

class A {

    public:
    void show () {

        cout << "Show";
    }
};

int main () {

    A obj;

    A *ptr = &obj;

    ptr->show();
}