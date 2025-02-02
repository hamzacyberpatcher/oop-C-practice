#include <iostream>
using namespace std;

class Point
{
	int x, y;
	public:
		Point()
		{
			x = 0;
			y = 0;
		}
		Point(int a, int b)
		{
			x = a;
			y = b;
		}
		Point(int a)
		{
			x = a;
			y = 0;
		}
		void displayPoint(void)
		{
			cout << "(" << x << ", " << y << ")" << endl;
		}
};

int main()
{
	Point a(1,1);
	Point b;
	Point c(2);
	a.displayPoint();
	b.displayPoint();
	c.displayPoint();

	return 0;
}
