#include <iostream>
using namespace std;

class Employee
{
	public:
		int id;
		Employee() {}
		Employee(int ID)
		{
			id = ID;
			return;
		}
};

class Programmer : public Employee
{
	int langCode;
	public:
		Programmer(int ID, int LangCode)
		{
			id = ID;
			langCode = LangCode;
			return;
		}
		void getLangCode(void)
		{
			cout << "LangCode : " << langCode << endl;
			return;
		}
};

int main()
{
	Programmer hamza(1,2);
	cout << "Id : " << hamza.id << endl;
	hamza.getLangCode();
	return 0;

}
