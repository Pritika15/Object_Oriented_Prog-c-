#include<iostream>
//#include"student2(5).cpp"
using namespace std;
int main()
{
	char name[]="abcd";
	student s1(24,name);
	s1,display();
	name[3]=e;
	student s2(20,name);
	s2.display();
	s1.display();
}
class student{
	int age;
	char *name;
	public:
		student(int age,char *name)
		{
			this->age=age;
			this->name=name;
		}
		void display()
		{ 
		
		cout<<name<<" "<<endl;
		}

