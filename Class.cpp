#include <iostream>
using namespace std;

class Employee
{
	public:
    int id;
    string name;
};

int main ()
{
    Employee e1;
    
    e1.id = 1;
    e1.name = "NItin Jadhav";
    
    cout << "ID = " << e1.id << endl;
    cout << "Name = " << e1.name << endl;
    
    return 9;
}



