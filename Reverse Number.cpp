#include <iostream>
using namespace std;

int main ()
{
    int i, n, r, sum = 0;
    
    cout << "Enter the Number : ";
    cin >> n;
    
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    
    cout << sum;
    
    return 0;
}