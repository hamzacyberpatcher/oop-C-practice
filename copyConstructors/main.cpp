#include <iostream>
using namespace std;

class Number
{
	int num;
	public:
		Number(){}
		Number(int a)
		{
			num = a;
			return;
		}
		Number(Number &a)
		{
			cout << "copy constructor is called" << endl;
			num = a.num;
		}
		void show(void)
		{
			cout << "the number is " << num << endl;
			return;
		}
};

int main()
{
	Number x, y, z;
	x = Number(1);
	y = Number(2);
	z = Number(3);
	x.show();
	y.show();
	z.show();

	Number a;

	a = z;
	a.show();

	Number b = x;
	b.show();

	Number c;
	c = Number(y);
	c.show();
	
	return 0;
}
