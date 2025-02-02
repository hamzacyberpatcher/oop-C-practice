#include <iostream>
using namespace std;

int main()
{
	float * ptr = new float(4.5);
	cout << "The address is " << ptr << endl;
	cout << "The value at that address is " << *(ptr) << endl;
	delete ptr;
	cout << "The value after deleting is " << *(ptr) << endl;

	int *arr = new int[3];
	arr[0] = 10;
	*(arr+1) = 20;
	arr[2] = 30;

	cout << "The starting address of the array is " << arr << endl;

	for(int i = 0; i < 3; i++)
	{
		cout << "The value of item no " << i << " is " << arr[i] << endl;
	}

	delete[] arr;

	cout << "The values after deleting the array are : " << endl;

	for(int i = 0; i < 3; i++)
	{
		cout << "The value of item no " << i << " is " << arr[i] << endl;
	}

	return 0;
}
