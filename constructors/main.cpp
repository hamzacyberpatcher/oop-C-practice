#include <iostream>
using namespace std;

class Complex
{
	int a, b;
	public:
		Complex(void);
		void printVal(void)
		{
			cout << a << " + " << b << "i" << endl;
			return;
		}
};

Complex::Complex(void)
{
	a = 0;
	b = 0;
	return;
}

int main()
{
	Complex a;
	a.printVal();
	return 0;
}
