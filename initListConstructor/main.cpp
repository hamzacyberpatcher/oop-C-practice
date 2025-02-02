#include <iostream>
using namespace std;

class Meow
{
	int a;
	int b;
	public:
		Meow(int i, int j) : a(i), b(j)
		{
			return;
		}
		void getData(void)
		{
			cout << "The value of a is " << a << endl;
			cout << "The value of b is " << b << endl;
		}
};

int main()
{
	Meow megatron(1,2);
	megatron.getData();
	return 0;
}
