#include <iostream>
using namespace std;

class Animal
{
	public:
		void eat ()
		{
			cout << "Animal can eat." << endl;
		}
};

class Dog : public Animal
{
	public:
		void bark ()
		{
			cout << "Animal can bark." << endl;
		}
};

int main ()
{
	Dog mydog;
	
	mydog.eat();
	mydog.bark();
	
}