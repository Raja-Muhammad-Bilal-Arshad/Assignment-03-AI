#include<iostream>
using namespace std;
int main()
{
	int wthr,tmp,wind;
	cout << "....................Trip Planner......................... " << endl;
	cout << "Weather Forcast " << endl << "1 for Sunny" << endl << "2 for Rainy" << endl << "3 for snowy" << endl << "4 for foggy" << endl;
	cin >> wthr;
	cout << "Enter Temperature in Degree ";
	cin >> tmp;
	cout << "Enter wind speed in kilimeter per hour(KMH)";
	cin >> wind;
	if (wthr != 1 || (tmp < 10 || tmp>40) || wind > 50)
	{
		cout << "Trip is not Allowed";
	}
	else
		cout << "Trip is allowed";
	cout << endl;
	system("pause");
	return 0;
}