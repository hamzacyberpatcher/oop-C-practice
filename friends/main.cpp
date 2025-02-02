#include <iostream>
using namespace std;

class Complex
{
	int a, b;
	friend Complex addComplex(Complex a, Complex b);
	public:
		void setNum(int real, int img)
		{
			a = real;
			b = img;
			return;
		}
		void displayNum(void)
		{
			cout << a << " + " << b << "i" << endl;
			return;
		}
};

Complex addComplex(Complex a, Complex b)
{
	Complex c;
	c.a = a.a + b.a;
	c.b = a.b + b.b;
	return c;
}

int main()
{
	Complex a, b, c;
	a.setNum(1,2);
	a.displayNum();
	b.setNum(3,4);
	b.displayNum();
	c = addComplex(a, b);
	c.displayNum();
	return 0;
}
