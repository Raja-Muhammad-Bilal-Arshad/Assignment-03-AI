#include<iostream>
using namespace std;
int main()
{
	double incm;
	int crdhr,dbt,empyr;
	cout << "Enter Your income:";
	cin >> incm;
	if (incm >= 1500000)
	{
		cout << "Enter your credit hour:";
		cin >> crdhr;
		if (crdhr > 700)
		{
			cout << "Enter your Debt to Income percentage=%";
			cin >> dbt;
			if (dbt <= 35)
			{
				cout << "Enter your Employment Experience in Year";
				cin >> empyr;
				if (empyr >= 2) {
					cout << "Your are Qualify for Loan";
				}
				else
				{
					cout << "You are not qualify Beacause your experience is low";
				}
			}
			else
			{
				cout << "You are not qualify Beacause your debt to income ratio is high";
			}
		}
		else
			cout << "You are not Qualify beacause your credit hour is low";
	}
	else
		cout << "You are not Qualify beacause your income less";
	cout << endl;
	system("pause");
	return 0;
}