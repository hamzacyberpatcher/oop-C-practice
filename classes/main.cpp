#include <iostream>
using namespace std;

class Employee
{
	private:
		int age;
		int salary;
	public:
		void setData(int age1, int salary1);
		void getData()
		{
			std::cout << "The age of the Employee is " << age << endl;
			std::cout << "The salary of the Employee is " << salary << endl;
			return;
		}
};

void Employee::setData(int age1, int salary1)
{
	age = age1;
	salary = salary1;
}

int main()
{
	Employee hamza;
	hamza.setData(17,150);
	hamza.getData();
	return 0;
}
