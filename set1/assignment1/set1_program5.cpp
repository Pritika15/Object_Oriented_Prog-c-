#include<iostream>
using namespace std;
struct Student{
private:
char name[20];
int roll;
float marks;
public:
void setStudentData(){
cout<<"Enter name:"<<endl;
cin>>name;
cout<<"Enter roll:"<<endl;
cin>>roll;
cout<<"Enter marks:"<<endl;
cin>>marks;
}
void getStudentData(){
cout<<"Name:"<<name<<endl;
cout<<"Roll number :"<<roll<<endl;
cout<<"Marks:"<<marks<<endl;
}
};
int main(){
int i,n=3;
Student s[3];
for(i=0;i<3;i++){
s[i].setStudentData();
}
for(i=0;i<3;i++){
cout<<"Details of student "<<i+1<<endl;
s[i].getStudentData();
}
}
