#include <iostream>
using namespace std;

class Student
{
	protected:
		int rollNo;
	public:
		void setRollNo(int);
		void getRollNo(void);
};

class Exam : public Student
{
	protected:
		int physics;
		int computer;
	public:
		void setMarks(int, int);
		void getMarks(void);
};

class Result : public Exam
{
	protected:
		bool isPass;
	public:
		void processResult(void);
		void getResult(void);
};

void Student :: setRollNo(int r)
{
	rollNo = r;
	return;
}

void Student :: getRollNo(void)
{
	cout << "Roll no of the student is " << rollNo << endl;
	return;
}

void Exam :: setMarks(int m1, int m2)
{
	physics = m1;
	computer = m2;
	return;
}

void Exam :: getMarks(void)
{
	cout << "The marks of the student in physics are " << physics << endl;
	cout << "The marks of the student in computer are " << computer << endl;
	return;
}

void Result :: processResult(void)
{
	if ((physics > 49) && (computer > 49))
	{
		isPass = true;
	}
	else
	{
		isPass = false;
	}
}

void Result :: getResult(void)
{
	if (isPass)
	{
		cout << "You have passed" << endl;
	}
	else
	{
		cout << "You have failed" << endl;
	}
	return;
}

int main()
{
	Result hamza;
	hamza.setRollNo(609877);
	hamza.setMarks(81,75);
	hamza.processResult();
	hamza.getRollNo();
	hamza.getMarks();
	hamza.getResult();
	return 0;
}
