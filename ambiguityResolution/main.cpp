#include <iostream>
using namespace std;

class Base1
{
	public:
		void greet(void)
		{
			cout << "Hello" << endl; return;
		}
		void say(void)
		{
			cout << "How are you" << endl; return;
		}
};

class Base2
{
	public:
		void greet(void)
		{
			cout << "Hi" << endl; return;
		}
		void say(void)
		{
			cout << "How are you doing" << endl; return;
		}
};

class Derived : public Base1, public Base2
{
	public:
		void greet(void)
		{
			Base1::greet();
			return;
		}
		void say(void)
		{
			cout << "Howdy" << endl; return;
		}
};

int main()
{
	Derived d;
	d.greet();
	d.say();
	return 0;
}
