#include<iostream>
using namespace std;
class Student{
char name[20];
int roll_no;
float marks;
public:
void setStudentData();
void getStudentData();
};
void Student::setStudentData(){
cout<<"Enter name:"<<endl;
cin>>name;
cout<<"Enter roll_no:"<<endl;
cin>>roll_no;
cout<<"Enter marks:"<<endl;
cin>>marks;
}
void Student::getStudentData(){
cout<<"Name:"<<name<<endl;
cout<<"Roll_no:"<<roll_no<<endl;
cout<<"Marks:"<<marks<<endl;
}
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
