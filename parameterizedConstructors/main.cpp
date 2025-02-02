#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	int x, y;
	friend float distance(Point, Point);
	public:
		Point(int a, int b)
		{
			x = a;
			y = b;
			return;
		}
		void displayPoint(void)
		{
			cout << "(" << x << " , " << y << ")" << endl;
			return;
		}
};

float distance(Point a, Point b)
{
	return sqrt((pow((a.x-b.x),2)) + pow((a.y-b.y),2));
}

int main()
{
	Point a(0,0);
	Point b(3,4);

	float d = distance(a, b);
	
	a.displayPoint();
	b.displayPoint();

	cout << d << endl;

	return 0;
}
