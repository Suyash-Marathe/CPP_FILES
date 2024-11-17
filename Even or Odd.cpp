#include <iostream>

int main ()
{
	int n;
	
	cout << "Enter the number : ";
	cin >> n;
	
	if (n % 2 == 0)
	{
		cout << "Entered number is even number.";
	}
	else
	{
		cout << "Entered number is odd number.";
	}
	
	return 0;
}