#include <iostream>
using namespace std;

class Employee
{
	int Id;
	static int count;
	public:
		void setId(void);
		void getId(void);
		static void getcount(void);
};

int Employee::count = 0;

void Employee::setId(void)
{
	cout << "Id of the employee no " << count + 1 << " is ";
	cin >> Id;
	count++;
}

void Employee::getId(void)
{
	cout << "Id of the employee is " << Id << endl;
}

void Employee::getcount(void)
{
	cout << "The total number of employees are " << count << endl;
}

int main()
{
	Employee hamza, hamaad, ibrahim;

	hamza.setId();
	hamza.getId();

	hamaad.setId();
	hamaad.getId();

	ibrahim.setId();
	ibrahim.getId();

	Employee::getcount();

	return 0;
}
