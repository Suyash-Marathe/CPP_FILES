#include <iostream>
using namespace std;

class Market
{
	public:
	string name;
	int price;
	
	Fruits ()
	{
		name = "Apple";
		price = 100;
	}
};

int main ()
{
	Market FruitsObj;
	
	cout << FruitsObj.name << endl;
	cout << FruitsObj.price;
	
	return 0;
}