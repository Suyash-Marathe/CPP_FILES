#include <iostream>
using namespace std;

int main ()
{
    char c;

    cout << "Enter a Character : ";
    cin >> c;

    switch (c)
    {
        case 'a':
        cout << "This is Vowel.";
        break;

        case 'e':
        cout << "This is Vowel.";
        break;

        case 'i':
        cout << "This is Vowel.";
        break;

        case 'o':
        cout << "This is Vowel.";
        break;

        case 'u':
        cout << "This is Vowel.";
        break;

        default :
        cout << "This is Constant.";
        break;
    }

    return 0;
}