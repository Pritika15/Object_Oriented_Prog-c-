// static data member and the member function
#include<iostream>
using namespace std;
class student {
	static int totalstudents;
	public:
		int rollNumber;
		int age;
		student()
		{ totalstudents++;
		}
		int getrollNumber()
		{
			return rollNumber;
		}
		static int gettotalstudents;
};
int student::totalstudents=0;

int main()
{
	student s1,s2,s3,s4,s5;
	cout<<student:: gettotalstudents()<<endl;
}

