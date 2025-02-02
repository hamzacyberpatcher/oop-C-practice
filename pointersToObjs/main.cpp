#include <iostream>
using namespace std;

class Complex
{
	int a, b;
	public:
		void setData(int r, int i)
		{
			a = r;
			b = i;
			return;
		}
		void displayData(void)
		{
			cout << a << " + " << b << "i" << endl;
			return;
		}
};

int main()
{
	Complex *ptr = new Complex;
	ptr->setData(2,3);
	ptr->displayData();
	return 0;
}
