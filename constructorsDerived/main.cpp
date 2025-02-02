#include <iostream>
using namespace std;

class Base1
{
	int data1;
	public:
		Base1(int a)
		{
			data1 = a;
			cout << "Base 1 constructor is called" << endl;
			return;
		}
		void getdata1(void)
		{
			cout << "The value of data in Base 1 is " << data1 << endl;
			return;
		}
};

class Base2
{
	int data2;
	public:
		Base2(int a)
		{
			data2 = a;
			cout << "Base 2 constructor is called" << endl;
			return;
		}
		void getdata2(void)
		{
			cout << "The value of data in Base 2 is " << data2 << endl;
			return;
		}
};

class Derived : public Base2, public Base1
{
	int data3;
	public:
		Derived(int a, int b, int c) : Base1(a), Base2(b)
		{
		data3 = c;
		cout << "Derived constructor is called" << endl;
		return;
		}
		void getdata3(void)
		{
			cout << "The value of data3 is " << data3 << endl;
			return;
		}
};

int main()
{
	Derived d(1,2,3);
	d.getdata1();
	d.getdata2();
	d.getdata3();
	return 0;
}
