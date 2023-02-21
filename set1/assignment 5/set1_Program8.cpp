//abstract class
#include<iostream>
using namespace std;
class animal{
	public:
		virtual void sound()=0;
		void sleeping()
		{ cout<<"Sleeping!!!"<<endl;
		}
};
class dog: public animal{
	public:
		void sound()
		{ cout<<"WOOOFFF!!!"<<endl;
		}
};
int main(){
	dog obj;
	obj.sound();
	obj.sleeping();
}
