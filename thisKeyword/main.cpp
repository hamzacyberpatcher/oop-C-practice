#include <iostream>
using namespace std;

class Person
{
	int age;
	public:
		void setAge(int age)
		{
			this->age = age;
			return;
		}
		void displayAge(void)
		{
			cout << "The age is " << age << endl;
			return;
		}
};

int main()
{
	Person hamza;
	hamza.setAge(17);
	hamza.displayAge();
	return 0;
}
