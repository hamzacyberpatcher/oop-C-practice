#include <iostream>
using namespace std;

class Point
{
	int x, y;
	public:
		Point(int a, int b = 1)
		{
			x = a;
			y = b;
		}
		void displayPoint(void)
		{
			cout << "(" << x << ", " << y << ")" << endl;
			return;
		}
};

int main()
{
	Point a(1);
	a.displayPoint();
	return 0;
}
