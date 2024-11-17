#include <iostream>
using namespace std;

class Myclass {
  
  public :
  Myclass() {
    
    cout << "Object created." << endl;
  }
  
  ~Myclass() {
    
    cout << "Object destroyed." << endl;
  }
};

int main () 
{
  Myclass obj;

  return 0;
}