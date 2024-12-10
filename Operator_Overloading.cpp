#include <iostream>
using namespace std;

class Class1;
class Class2;

class Class1 {

public:
    int a = 20;

    friend void function(Class1, Class2);
};

class Class2 {

public:
    int b = 40;

    friend void function(Class1, Class2);
};

void function(Class1 c1, Class2 c2) {

    int add = c1.a + c2.b;
    cout << "Addition of a and b = " << add;
}

int main() {
    Class1 obj1;
    Class2 obj2;

    function(obj1, obj2);

    return 0;
}
