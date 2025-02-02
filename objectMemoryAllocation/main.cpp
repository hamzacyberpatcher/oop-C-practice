#include <iostream>
using namespace std;

class Shop
{
	int itemID[100];
	int itemPrice[100];
	int counter;
	public:
		void initcounter(void)
		{
			counter = 0;
		}
		void setPrice(void);
		void displayPrice(void);
};

void Shop::setPrice(void)
{
	cout << "Enter the id of the item no " << counter+1 << " : ";
	cin >> itemID[counter];
	cout << "Enter the price of the item no " << counter + 1 << " : ";
	cin >> itemPrice[counter];
	counter++;
}

void Shop::displayPrice(void)
{
	for(int i = 0; i < counter; i++)
	{
		cout << "The price of the item with id " << itemID[i] << " is " << itemPrice[i] << endl;
	}
}

int main()
{
	Shop csd;
	csd.initcounter();
	csd.setPrice();
	csd.setPrice();
	csd.setPrice();
	csd.displayPrice();
	return 0;
}
