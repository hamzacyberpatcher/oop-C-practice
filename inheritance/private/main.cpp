#include <iostream>
using namespace std;

class Employee
{
	public:
		int id;
		Employee() {}
		Employee (int Id)
		{
			id = Id;
			return;
		}
};

class Programmer : Employee
{
	int langCode;
	public:
		Programmer(int ID, int LangCode)
		{
			id = ID;
			langCode = LangCode;
			return;
		}
		void getData(void)
		{
			cout << "ID : " << id << endl;
			cout << "Lang Code : " << langCode << endl;
			return;
		}
};

int main()
{
	Programmer hamza(9,9);
	hamza.getData();
	return 0;
}
