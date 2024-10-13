#include <iostream>
using namespace std;

int main () 
{
    int i = 1;
    int sum = 0;

    while (i <= 5) 
    {
    	cout << "Number : " << i << endl;
    	
    	
        sum += i;
        i++;
    }

    std::cout << endl << "Sum : " << sum << endl;

    return 0;
}