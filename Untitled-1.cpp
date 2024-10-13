#include <iostream>
using namespace std;

int main ()
{
	int a, r, t;
	
	cout << "Enter the amount :";
	cin >> a;
	
	cout << "Enter the rate of interest :";
	cin >> r;
	
	cout << "Enter the time period in days :";
	cin >> t;
	
	int interest = (a * r * t) / 100;
	cout << "The interest will be " << interest;
	
	return 0;
}