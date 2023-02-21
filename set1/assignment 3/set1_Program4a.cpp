#include<iostream>
using namespace std;
class Try{
public:
Try(){
		
}
~Try(){
	
}
void func(){
cout<<"in function"<<endl;
}
};
int main(){
Try *try1=new Try();
try1->func();
Try try2;
try2.func();
}
