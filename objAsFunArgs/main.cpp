#include <iostream>
using namespace std;

class Complex
{
	int a;
	int b;
	public:
		void setNum(int a1, int b1)
		{
			a = a1;
			b = b1;
		}
		void setNumBySum(Complex c1, Complex c2)
		{
			a = c1.a + c2.a;
			b = c1.b + c2.b;
		}
		void printNumber(void)
		{
			cout << a << " + " << b << "i" << endl;
		}
};

int main()
{
	Complex c1, c2, c3;
	c1.setNum(1,2);
	c1.printNumber();
	c2.setNum(3,4);
	c2.printNumber();
	c3.setNumBySum(c1,c2);
	c3.printNumber();
	return 0;
}
