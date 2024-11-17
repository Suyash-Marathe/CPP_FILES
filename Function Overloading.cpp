#include <iostream>
using namespace std;

class Demo {
	
	public :
		void sum (int x, int y) {
		
			int add = x + y;
		
			cout << "Addition = " << add << endl;
		}
	
		void sum (int a, int b , int c) {
		
			int add = a + b + c;
		
			cout << "Addition = " << add << endl;
		}
};

int main () {
	
	Demo obj;
	
	obj.sum (20, 40);
	obj.sum (20, 40, 60);
	
	return 0;	
}