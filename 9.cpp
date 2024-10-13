#include <iostream>
using namespace std;

int main ()
{
    int year;
    
    cout << "Enter the Number : ";
    cin >> year;
    
    if (year % 4 == 0)
    {
        cout << "Year is Leap Year.";
    }
    else
    {
        cout << "Year is Not Leap Year.";
    }
    
    return 0;
}