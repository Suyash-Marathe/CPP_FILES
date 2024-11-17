#include <iostream>
using namespace std;

int main ()
{
    int i, n = 0;

    for (i = 1; i <= 5; i++)
    {
    	n = i * i;
    	
    	cout << i << " = " << n << endl;
    }

    return 0;
}