#include<iostream>
using namespace std;
int main() 
{
	int age=0, cnd=0;
	float insu_amt=0, cnd_chr=0, smk_chr=0, ttl=0;
	char smk;
	cout << "Enter your age:" ;
	cin >> age;
	cout << "Enter your pre-existing condition(0,1,2....) ";
	cin >> cnd;
	cout << "Enter y if your are smoker AND n for not ";
	cin >> smk;
	if (age>0&&age < 18)
	{
		insu_amt = 2000;
	}
	else if (age >= 18&&age<=30) 
	{
		insu_amt = 3500;

	}
	else if (age >= 31 && age <=50 )
	{
		insu_amt = 5000;
	}
	else if (age >50)
	{
		insu_amt = 8000;
	}
	else {
		cout << "Invalid Age ";
		exit;
	}
	if (cnd == 0) 
	{
	}
	if (cnd == 1) {
		insu_amt = insu_amt + (insu_amt * 0.25);
	}
	else if (cnd > 1) {
		insu_amt = insu_amt + (insu_amt * 0.50);
	}
	else {
		cout << "Invalid condition";
		exit;
	}
	if (smk = 'y') 
	{
		insu_amt = insu_amt + (insu_amt * 0.20);
	}
	else if (smk = 'n') 
	{
	}
	else
	{
		cout << "Invalid Smooker";
	}
	
	cout << "Total Premium = " << insu_amt<<endl;
	system("pause");
	return 0;
}