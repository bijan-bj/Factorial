#include<iostream>
using namespace std;
int main()
{
	int num, fact = 1;
	cout << "Enter the number: ";
	cin >> num;
	if (num < 0)
	{
		cout << "The number is invalid";
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			fact *= i;
		}
		cout << fact << "  ";
	}
}