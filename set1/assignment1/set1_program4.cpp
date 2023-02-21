#include<iostream>
using namespace std;
struct Student
{
    char name[20];
    int roll;
    float marks;
   void setStudentData(){
cout<<"Enter name:"<<endl;
cin>>name;
cout<<"Enter roll_no:"<<endl;
cin>>roll;
cout<<"Enter marks:"<<endl;
cin>>marks;
}
    void getStudentData(){
          cout<<"name of the student is :"<<name<<endl;
             cout<<"roll number of the student is :"<<roll<<endl;
              cout<<"marks of the student is :"<<marks<<endl;
    }
    
};

int main(){
     Student s[3];
    for(int i=0;i<3;i++){
s[i].setStudentData();
}
for(int i=0;i<3;i++){
s[i].getStudentData();
}

}
