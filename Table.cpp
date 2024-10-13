#include <iostream>
using namespace std;

int main ()
{
    int i, n;
    
    cout << "Enter the Number : ";
    cin >> n;
    
    cout << endl;
    
    for (i = 1; i <= 10; i++)
    {
        cout << i * n << endl;
    }
    
    return 0;
}