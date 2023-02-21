//Access a global variable with same name as a local variable
#include<iostream> 
using namespace std;
   
int x;  // Global x
   
int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;  
  return 0;
}
