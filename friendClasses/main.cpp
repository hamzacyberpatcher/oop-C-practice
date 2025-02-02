#include <iostream>
using namespace std;

class Complex;

class Calculator
{
	public:
		Complex addComplex(Complex, Complex);
		int addReal(Complex, Complex);
		int addImaginary(Complex, Complex);
};

class Complex
{
	int a, b;
	friend class Calculator;
	public:
		void setNum(int n1, int n2)
		{
			a = n1;
			b = n2;
			return;
		}
		void getNum(void)
		{
			cout << a << " + " << b << "i" << endl;
			return;
		}
};

Complex Calculator::addComplex(Complex a, Complex b)
{
	Complex c;
	c.a = a.a + b.a;
	c.b = a.b + b.b;
	return c;
}

int Calculator::addReal(Complex a, Complex b)
{
	return  (a.a + b.a);
}

int Calculator::addImaginary(Complex a, Complex b)
{
	return (a.b + b.b);
}

int main()
{
	Calculator calc;
	Complex a, b, c;
	a.setNum(1,4);
	b.setNum(2,2);
	c = calc.addComplex(a , b);
	a.getNum();
	b.getNum();
	c.getNum();
	cout << calc.addReal(a, b) << endl << calc.addImaginary(a, b) << endl;
	return 0;
}
