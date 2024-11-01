#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int S,a;

    cout<<"Enter your 5 letters string: ";
    cin>>s;
    if(s.length()>5)
    {
        cout<<"You entered more than required string...";
        return 1;
    }
    if(s[0]>=65 && s[0]<=90)
    S=1;
    else if(s[0]>=97 && s[0]<=172)
    S=2;
    switch(S)
    {
        case 1:
        {
            // Minus 3 form all the Indexes
            s[0]=s[0]-3;
            s[1]=s[1]-3;
            s[2]=s[2]-3;
            s[3]=s[3]-3;
            s[4]=s[4]-3;  
            // Now reverse the new string 
            s[4]=s[0];
            s[3]=s[1];
            s[0]=s[4];
            s[1]=s[3];
            cout<<s;
            break;
        }
        case 2:
        {
            if(s[0]=='a'||)

        }
    }
}