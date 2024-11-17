#include <iostream>
using namespace std;

class Display1 {
	
	public :
		void display1 () {
			
			cout << "Display 1." << endl;
		}
};

class Display2 : public Display1 {
	
	public :
		void display2 () {
			
			cout << "Display 2." << endl;
		}
};

int main () {
	
	Display2 obj;
	
	obj.display1 ();
	obj.display2 ();
	
	return 0;
}