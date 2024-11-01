#include<iostream>
using namespace std;
int main() 
{
	int userid,userid_org=1923, pswrd_org = 373, otp_org = 2335,otp,pswrd,lgatmp=1;
	if (!lgatmp == 0) 
	{
		cout << "Enter User Id:";
		cin >> userid;
		cout << "Enter Password:";
		cin >> pswrd;
		cout << "Enter your Otp:";
		cin >> otp;
		if (userid == userid_org && pswrd == pswrd_org && otp == otp_org) {
			cout << "Login SucessFully";
		}
		else {
			cout << "Atemmpted Failed";
			lgatmp ++;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}