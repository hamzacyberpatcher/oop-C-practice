#include <iostream>
using namespace std;

class Base
{
	int data1;
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};

class Derived : Base
{
	int data3;
	public:
		void process();
		void display();
};

void Base :: setdata(void)
{
	data1 = 10;
	data2 = 20;
	return;
}

int Base :: getdata1(void)
{
	return data1;
}

int Base :: getdata2(void)
{
	return data2;
}

void Derived :: process(void)
{
	setdata();
	data3 = getdata1() * 3;
	return;
}

void Derived :: display(void)
{
	cout << getdata1() << endl;
	cout << data2 << endl;
	cout << data3 << endl;
}

int main()
{
	Derived dr;
	dr.process();
	dr.display();
	return 0;
}
