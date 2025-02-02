#include <iostream>
using namespace std;

class Bank
{
	int principal;
	int years;
	float intrestRate;
	float returnVal;
	public:
		Bank(){};
		Bank(int p, int y, float r);
		Bank(int p, int y, int r);
		void show(void);
};

Bank :: Bank(int p, int y, float r)
{
	principal = p;
	years = y;
	intrestRate = r;
	returnVal = principal;
	for(int i = 0; i < years; i++)
	{
		returnVal *= (1 + intrestRate);
	}
}

Bank :: Bank(int p, int y, int r)
{
	principal = p;
	years = y;
	intrestRate = float(r) / 100;
	returnVal = principal;
	for(int i = 0; i < years; i++)
	{
		returnVal *= (1 + intrestRate);
	}
}

void Bank :: show(void)
{
	cout << "The principal amount was " << principal << " on which after " << years << " year(s) at a rate of " << intrestRate << " the return value is " << returnVal << endl;
}

int main()
{
	Bank hbl, mcb;
	int r = 3;
	float R = 0.03;
	hbl = Bank(100,1,r);
	mcb = Bank(100,1,R);
	hbl.show();
	mcb.show();
}
