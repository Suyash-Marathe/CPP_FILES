#include <iostream>
using namespace std;

class Person1;
class Person2;

class Person1 {
	
	private :
		int money = 200;
		
		friend void Person3 (Person1, Person2);
};

class Person2 {
	
	private :
		int money = 400;
		
		friend void Person3 (Person1, Person2);
};

void Person3 (Person1 r1, Person2 r2) {
	
	int sum = r1.money + r2.money;
	cout << "Sum = " << sum << endl;
}

int main () {
	
	Person1 obj1;
	Person2 obj2;
	
	Person3 (obj1, obj2);
	
	return 0;
}
