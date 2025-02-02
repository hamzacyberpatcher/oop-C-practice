#include <iostream>
using namespace std;

class b;

class a
{
	int val;
	friend void swap(a &, b &);
	public:
		void setVal(int value)
		{
			val = value;
			return;
		}
		void getVal(void)
		{
			cout << val << endl;
			return;
		}
};

class b {
	int val;
	friend void swap(a &, b &);
	public:
		void setVal(int value)
		{
			val = value;
			return;
		}
		void getVal(void)
		{
			cout << val << endl;
			return;
		}
};

void swap(a &x, b &y)
{
	int tmp;
	tmp = x.val;
	x.val = y.val;
	y.val = tmp;
	return;
}

int main()
{
	a X;
	b Y;
	X.setVal(78);
	Y.setVal(80);
	swap(X, Y);
	X.getVal();
	Y.getVal();
	return 0;
}
