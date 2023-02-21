//implement the namespace and use similar variables and functions defined in different code sections
#include <iostream>
using namespace std;
  
// Variable created inside namespace
namespace first
{
    int val = 500;
}
  
// Global variable
int val = 100;
  
int main()
{
    // Local variable
    int val = 200;
  
    
    cout << first::val << '\n'; 
  
    return 0;
}
