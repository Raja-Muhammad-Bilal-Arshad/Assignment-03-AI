#include<iostream>
using namespace std;
int main(){
int unit,tax;
double bill = 0;
cout << "FESCO Billing Calculator" << endl;
cout << "Enter the unit of Monthly:";
cin >> unit;
if (unit >= 0)
{
	if (unit <= 100)
	{
		bill = unit * 5;
	}
	else
	{
		if (unit > 100 && unit <= 300)
		{
			bill = unit * 7;
		}
		else
		{
			if (unit > 300 && unit <= 400)
			{
				bill = unit * 24.40;
			}

			else
			{
				if (unit > 400 && unit <= 500)

				{
					bill = unit * 24.91;
				}

				else
				{
					if (unit > 500 && unit <= 600)
					{
						bill = unit * 26.15;
					}
					else
					{
						if (unit > 600 && unit <= 700)
						{
							bill = unit * 27.59;
						}
					}
				}
			}
		}
	}
	tax = 0.10 * bill;
	cout << "Your Monthly Bill before tax is :" << bill << endl;
	cout << "Your tax is :" << tax<<endl;
	cout << "Your Bill After Tax is:" << bill + tax << endl;
}		
	else
	{
	cout << "Invalid Input" << endl;

	}
system("pause");
return 0;
}