#include <iostream>

using namespace std;

int main ()
{
	string s;
	
	cout << "Enter A String : ";
	getline (cin, s);
	
	cout << "You Entered String Is ";
	cout << s << endl;
	
	s.push_back('!');
	cout << "After Pushing Character : " << s << endl;
	
	s.pop_back();
	cout << "After Removing Character : " << s << endl;
	
	return 0;
}