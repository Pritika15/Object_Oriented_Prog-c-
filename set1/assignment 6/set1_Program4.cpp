//pure virtual func
#include<iostream>
using namespace std;
class base{
	public:
		virtual void display()= 0;
		
};
class derived: public base{
	public:
		void display()
		{
			cout<<"In derived class!!!!!!!"<<endl;
		}
};
int main()
{
	base *base_pointer;
	derived obj_derived;
	base_pointer=&obj_derived;
	base_pointer->display();
}
