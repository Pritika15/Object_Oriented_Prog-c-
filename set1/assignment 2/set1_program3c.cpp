//scope resolution operator : : 
//a-Class functions defined outside the class
#include<iostream> 
using namespace std;
  
class A 
{
public: 
  
   
   void fun();
};
  

void A::fun()
{
   cout << "fun() called";
}
  
int main()
{
   A a;
   a.fun();
   return 0;
}
