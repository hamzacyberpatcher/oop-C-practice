#include <iostream>
using namespace std;

class Base
{
	protected:
		int a;
	private:
		int b;
};

class Derived : Base
{
	int c;
	public:
		void setdata(void);
		void display(void);
};

void Derived :: setdata(void)
{
	a = 10;
	c = 20;
	return;
}

void Derived :: display(void)
{
	cout << a << endl << c << endl;
	return;
}

int main()
{
	Derived dr;
	dr.setdata();
	dr.display();
	return 0;
}
