#include <iostream>
using namespace std;

class Display1 {
	
	public :
		void display1 () {
			
			cout << "Display 1." << endl;
		}
};

class Display2 {
	
	public :
		void display2 () {
			
			cout << "Display 2." << endl;
		}
};

class Display3 : public Display2, public Display1 {
	
	public :
		void display3 () {
			
			cout << "Display 3." << endl;
		}
};

int main () {
	
	Display3 obj;
	
	obj.display1 ();
	obj.display2 ();
	obj.display3 ();
	
	return 0;
}