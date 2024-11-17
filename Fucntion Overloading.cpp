#include <iostream>
using namespace std;

class addition {
	
	public :
		int add (int a, int b)
		{
			int sum = a + b;
			cout << "Addition of A and B is " << sum << endl;
		}
};

int main () {
	
	addition obj;
	obj.add(20, 40);
	
	return 0;
}