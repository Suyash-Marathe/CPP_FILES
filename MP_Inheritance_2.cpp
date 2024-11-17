#include <iostream>
using namespace std;

class Add {

    public :
    int a = 10;
};

class Add2 {

    public :
    int b = 20;
};

class Sum : public Add, public Add2 {

    public :
    void addition () {

        int add = a + b;

        cout << "Addition of A and B is " << add << endl;
    }
};

int main () {

    Sum s;
    s.addition ();
    
    return 0;
}