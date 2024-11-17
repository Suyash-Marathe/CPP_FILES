#include <iostream>
using namespace std;

class SubClass1 {

    public :
    void sub_print1 () {

        cout << "This is from Sub Class 1." << endl;
    }
};

class SubClass2 : public SubClass1 {
     
     

    public :
    void sub_print2 () {

        cout << "This is from Sub Class 2." << endl;
    }
};

class SubClass3 : public SubClass2 {

    public :
    void sub_print3 () {

        cout << "This is from Sub Class 3." << endl;
    }
};

int main () {

    SubClass3 obj;

    obj.sub_print1 ();
    obj.sub_print2 ();
    obj.sub_print3 ();

    return 0;
}