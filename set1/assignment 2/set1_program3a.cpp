class Student{
	static int total Students;
	public:
		int rollNumber;
		int age;
		student()
		{totalStudents++;
		}
		static int gettotalStudent()
		{ return totalStudents;
		}
};
int Student::totalStudents=0;

