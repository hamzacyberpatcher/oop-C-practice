#include <iostream>
using namespace std;

class Employee{
	int id;
	public:
		void setId(void)
		{
			cout << "Id of the Employee is : " ;
			cin >> id;
		}
		void getId(void)
		{
			cout << "Id of the Employee is " << id << endl;
		}
};

int main()
{
	Employee emp[4];

	for(int i = 0; i < 4; i++)
	{
		emp[i].setId();
		emp[i].getId();
	}
	return 0;
}
