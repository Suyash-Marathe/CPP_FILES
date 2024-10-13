#include <iostream>
using namespace std;

int main ()
{
	int i, a, b;
	
	cout << "Enter the Start Point : ";
	cin >> a;
	
	cout << "Enter the End Point : ";
	cin >> b;
	
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}