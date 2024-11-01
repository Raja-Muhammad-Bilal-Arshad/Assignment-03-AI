#include<iostream>
using namespace std;
int main()
{
	int num;
	int rght_dgt;
	cout << "Enter a 6-digit number ";
	cin >> num;
	if (num > 99999 && num <= 999999)
	{
		//  6 digit
		rght_dgt = num % 10;
		num = num / 10;
		if (rght_dgt % 2 == 0)
		{
			num += 1;

		}
		else
			num -= 1;
		if (num > 99999) {
			num -= 1;
			num -= 2;
		}
		//5 digit
		rght_dgt = num % 10;
		num = num / 10;
		if (rght_dgt % 2 == 0)
		{
			num += 1;

		}
		else
			num -= 1;
		if (num > 9999) {
			num -= 1;
			num -= 2;
		}
		// 4 digit
		rght_dgt = num % 10;
		num = num / 10;
		if (rght_dgt % 2 == 0)
		{
			num += 1;

		}
		else
			num -= 1;
		if (num > 999) {
			num -= 1;
			num -= 2;
		}
		// 3 digit
		rght_dgt = num % 10;
		num = num / 10;
		if (rght_dgt % 2 == 0)
		{
			num += 1;

		}
		else
			num -= 1;
		if (num > 99) {
			num -= 1;
			num -= 2;
		}
		// 2 digit
		rght_dgt = num % 10;
		num = num / 10;
		if (rght_dgt % 2 == 0)
		{
			num += 1;

		}
		else
			num -= 1;
		if (num > 9) {
			//num -= 1;
			num -= 2;
		}
		//1 digit
		cout << "Your Final value is" << num;
	}
	else 
	{
		cout << "Invalid Input";
	}
	cout << endl;
	system("pause");
	return 0;
}