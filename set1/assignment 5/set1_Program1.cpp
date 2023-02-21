//base class, then a derived class
#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		float salary;
		Employee(int inid)
		{
			id=inid;
			salary=34.0;
		}
		Employee(){
		}
};
class programmer:public Employee{
	public:
		programmer(int inid)
		{ id=inid;
		}
		int languagecode=9;
		void getData()
		{ cout<<id<<endl;
		}
};
int main()
{
	Employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer skillF(10);
	cout<<skillF.languagecode<<endl;
	return 0;
}
