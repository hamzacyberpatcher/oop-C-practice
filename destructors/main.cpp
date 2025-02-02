#include <iostream>
using namespace std;

class num
{
	static int count;
	public:
		num()
		{
			count++;
			cout << "The constructor is called for object " << count << endl;
		}
		~num()
		{
			cout << "The destructor is called for object " << count << endl;
			count--;
		}
};

int num::count = 0;

int main()
{
	cout << "In the main function" << endl;
	cout << "Creating object 1" << endl;
	num n1;
	{
		cout << "Entering the block" << endl;
		cout << "Creatung object 2" << endl;
		num n2;
		cout << "Exiting the block" << endl;
	}
	cout << "Ending the program" << endl;
	return 0;
}
