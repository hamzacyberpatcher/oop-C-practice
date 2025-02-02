#include <iostream>
#include <string>
using namespace std;

class binary
{
	public:
		string number;
		void chk_bin();
		void display();
		void ones_complement();
};

void binary::chk_bin()
{
	bool isBinary;
	for(int i = 0; i < number.length(); i++)
	{
		if(number.at(i) != '0' && number.at(i) != '1')
		{
			isBinary = false;
		}
		else
		{
			isBinary = true;
		}
	}
	if(isBinary)
	{
		cout << "It is a binary number" << endl;
	}
	else
	{
		cout << "It is not a binary number" << endl;
	}
	return;
}

void binary::display()
{
	for(int i = 0; i < number.length(); i++)
	{
		cout << number.at(i);
	}
	cout << endl;
}

void binary::ones_complement()
{
	for(int i = 0; i < number.length(); i++)
	{
		if(number.at(i) == '0')
		{
			number.at(i) = '1';
		} else {
			number.at(i) = '0';
		}
	}
}

int main()
{
	binary bin;
	bin.number = "1011011";
	bin.display();
	bin.chk_bin();
	bin.ones_complement();
	bin.display();
}
