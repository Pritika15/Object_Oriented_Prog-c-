//multiple inheritance
#include<iostream>
using namespace std;
class base1 {
	protected:
		int base1 ;
		public:
		void set_base1 (int a)
		{
			base1 =a;
		}
};
class base2{
	protected:
	int base2 ;
	public:
		void set_base2 (int a)
		{
			base2  =a;
		}
};
class Derived: protected base1 ,protected base2 {
	public:
		void show()
		{
			cout<<"the value of base1 is"<<base1 <<endl;
			cout<<"the value of base2 is"<<base2 <<endl;
			cout<<"the sum of these value is"<<base1 +base2 <<endl;
			
		}
};
int main()
{ base1 prisha;

	prisha.set_base1(25);
//	prisha.set_base2(5);
	prisha.show();
	return 0;
}
