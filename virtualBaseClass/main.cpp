#include <iostream>
using namespace std;

class Student
{
	protected:
		int RollNo;
	public:
		void setRollNo(int n)
		{
			RollNo = n;
			return;
		}
};

class Tests : virtual public Student
{
	protected:
		int maths;
		int computer;
	public:
		void setMarks(int a, int b)
		{
			maths = a;
			computer = b;
			return;
		}
};

class Sports : virtual public Student
{
	protected:
		int score;
	public:
		void setScore(int s)
		{
			score = s;
			return;
		}
};

class Result : public Tests, public Sports
{
	protected:
		int total;
	public:
		void displayResult(void)
		{
			total = maths + computer + score;
			cout << "Your roll no is " << RollNo << endl;
			cout << "Maths : " << maths << endl;
			cout << "Computer : " << computer << endl;
			cout << "Sports : " << score << endl;
			cout << "Total : " << total << endl;
			return;
		}
};

int main()
{
	Result hamza;
	hamza.setRollNo(609877);
	hamza.setMarks(94,75);
	hamza.setScore(4);
	hamza.displayResult();
	return 0;
}
