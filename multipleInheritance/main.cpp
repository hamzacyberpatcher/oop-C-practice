#include <iostream>
using namespace std;

class Base1
{
	protected:
		int Base1Int;
	public:
		void setBase1Int(int);
};

class Base2
{
	protected:
		int Base2Int;
	public:
		void setBase2Int(int);
};

class Derived : public Base1, public Base2
{
	public:
		void display(void);
};

void Base1 :: setBase1Int(int n)
{
	Base1Int =  n;
	return;
}

void Base2 :: setBase2Int(int n)
{
	Base2Int = n;
	return;
}

void Derived ::  display(void)
{
	cout << Base1Int << " + " << Base2Int << " = " << Base1Int + Base2Int << endl;
	return;
}

int main()
{
	Derived d;
	d.setBase1Int(1);
	d.setBase2Int(2);
	d.display();
	return 0;
}
