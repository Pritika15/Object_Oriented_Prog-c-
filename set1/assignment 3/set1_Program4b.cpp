#include<iostream>
using namespace std;
class Try{
public:
void func(){
cout<<"in function"<<endl;
}
};
int main(){
Try *try1=new Try[3];
try1->func();
delete []try1;
}
