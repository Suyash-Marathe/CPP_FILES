// Friend Function is a special function that can access private and protected members of class.

#include <iostream>
using namespace std;

class Person1;
class Person2;

class Person1 {

    int number = 20;
    friend void Person3 (Person1, Person2);
};

class Person2 {

    int number = 40;
    friend void Person3 (Person1, Person2);
};

void Person3 (Person1 r1, Person2 r2) {

    cout << "Sum = " << r1.number + r2.number << endl;
}

int main () {

    Person1 obj1;
    Person2 obj2;

    Person3 (obj1, obj2);

    return 0;
}
