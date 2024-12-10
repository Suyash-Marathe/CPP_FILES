#include <iostream>
using namespace std;

class Display1 {

    public:
    virtual void show1 () {

        cout <<  "First Display 1" << endl;
    }
};

class Display2 : public Display1 {

    public:
    void show1 () {

        cout <<  "Overrided Display 2" << endl;
    }
};

int main () {

    Display2 obj;

    obj.show1();
    obj.show1();

    return 0;
}