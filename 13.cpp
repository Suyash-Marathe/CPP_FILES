#include <iostream>
using namespace std;

int main ()
{
    char k;
    
    cout << "Enter any Key : ";
    cin >> k;
    
    if (isalpha(k))
    {
        cout << "You entered a Character.";
    }
    else if (isdigit(k))
    {
        cout << "You entered a Digit.";
    }
    else
    {
        cout << "You entered a Special Character.";
    }
    
    return 0;
}