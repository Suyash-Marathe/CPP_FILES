#include <iostream>
using namespace std;

class A {
	
	int n1 = 20, n2 = 40;
	
	public :
		void show () {
			
			cout << "A = " << n1 << endl << "B = " << n2 << endl;
		}
		
		friend class B;
};

class B {
	
	public :
		void add (A r) {
			
			int add = r.n1 + r.n2;
			
			cout << "Sum = " << add << endl;
		}
};

int main () {
	
	A obj1;
	B obj2;
	
	obj1.show();
	obj2.add (obj1);
	
	return 0;
}