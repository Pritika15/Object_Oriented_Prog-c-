//Write a program to pass an object as an argument and returning the object from a function
#include <bits/stdc++.h>
using namespace std;
 
class Example {
public:
    int a;
 
    // This function will take
    // an object as an argument
    void add(Example E)
    {
        a = a + E.a;
    }
};
 

int main()
{
 
    
    Example E1, E2;
 
    
    E1.a = 50;
    E2.a = 100;
 
    cout << "Initial Values \n";
    cout << "Value of object 1: " << E1.a
         << "\n& object 2: " << E2.a
         << "\n\n";
 
    // Passing object as an argument
    // to function add()
    E2.add(E1);
 
    // Changed values after passing
    // object as argument
    cout << "New values \n";
    cout << "Value of object 1: " << E1.a
         << "\n& object 2: " << E2.a
         << "\n\n";
 
    return 0;
}

