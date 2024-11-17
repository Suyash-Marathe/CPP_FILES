#include <iostream>
using namespace std;

class Encap {
	
	public :
		void print (int a, string b) {
			
			int id = a;
			string name = b;
			
			cout << "ID = " << id << endl;
			cout << "Name = " << name << endl;
		}
};

int main () {
	
	Encap obj;
	obj.print(1, "Manish");

	return 0;
}