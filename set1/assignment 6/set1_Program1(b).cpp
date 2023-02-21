//Rum time polymorphism
#include<iostream>
using namespace std;
class base{
	public:
		int base_var;
	virtual	void display()
		{
			cout<<"Displaying base class base_var"<<base_var<<endl;
		}
};
class derived:public base{
	public:
		int derived_var;
		void display()
		{
			cout<<"Displaying base class base_var"<<base_var<<endl;
			cout<<"Dispalying derived class derived_var"<<derived_var<<endl;
		}
};
int main()
{
	base *base_class_pointer;
	base obj_base;
	derived obj_derived;
	base_class_pointer=&obj_derived;
	base_class_pointer->base_var=34; 
	base_class_pointer-> display();

}
