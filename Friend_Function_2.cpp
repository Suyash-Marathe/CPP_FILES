#include <iostream>
using namespace std;

class Display2;

class Display1 {

    private :
    string name  = "Display 1";

    public :
    friend class Display2;
};

class Display2 {

    public :
    void print (Display1& r) {

        cout << "Name = " << r.name << endl;
    }
};

int main () {

    Display1 obj;
    Display2 show;
    show.print (obj);

    return 0;
}