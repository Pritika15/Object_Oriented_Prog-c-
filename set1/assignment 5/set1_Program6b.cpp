//multilevel inheritance
using namespace std;
class student{
	protected:
		int rollnum;
		public:
			void set_rollnum(int);
			void get_rollnum(void);
};
void student::set_rollnum(int r)
{
	rollnum=r;
}
void student::get_rollnum()
{
	cout<<"The roll number is"<<rollnum<<endl;
}
class Exam: public student{
	protected:
		float maths;
		float physics;
		public:
			void set_marks(float,float);
			void get_marks(void);
};
void Exam::set_marks(float m1,float m2)
{ maths=m1;
physics=m2;
}
void Exam::get_marks()
{
	cout<<"the marks obtained in maths are"<<maths<<endl;
	cout<<"the marks obtained in physics are"<<physics<<endl;
}
class result: public Exam
{
	float percentage;
	public:
		void display_result()
		{
			get_rollnum();
			get_marks();
			cout<<"Your result is"<<(maths+physics)/2<<endl;
		}
};
