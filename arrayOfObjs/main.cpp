#include <iostream>
using namespace std;

class item
{
	int id, price;
	public:
		void setdata(int a, int b)
		{
			id = a;
			price = b;
			return;
		}
		void getdata(void)
		{
			cout << "The price of the item with id " << id << " is " << price << endl;
			return;
		}
};

int main()
{
	int size = 3;
	item * groceries = new item[3];

	int p, q;

	for(int i = 0; i < size; i++)
	{
		cout << "Enter the id of the item : ";
		cin >> p;
		cout << "Enter the price of the item : ";
		cin >> q;
		groceries->setdata(p,q);
		groceries++;
	}
	for(int i = 0; i < size; i++)
	{
		groceries--;
	}
	for(int i = 0; i < size; i++)
	{
		groceries->getdata();
		groceries++;
	}
	return 0;
}
