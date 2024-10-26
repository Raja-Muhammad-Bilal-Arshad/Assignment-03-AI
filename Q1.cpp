#include<iostream>
using namespace std;
int main()
{
    int D1,D2,D3,D4,D5,S,a,n,result=0;
    cout<<"Enter your selection number(1 for binary digit and 2 for octal digit): ";
    cin>>S;
     cout<<"Enter your number: ";
            cin>>a;
            n=a;
            D1=a%10; a=a/10;
            D2=a%10; a=a/10;
            D3=a%10; a=a/10;
            D4=a%10; a=a/10;
            if((n>=100 && n<=100000) && (( ((D1==1 || D1==0)&&(D2==1 || D2==0)&&(D3==1 || D3==0)&&(D4==1 || D4==0)&& (D5==1 || D5==0)) &&(S==1)) || ( ((D1>=0 && D1<8)&&(D2>=0 || D2<0)&&(D3>=0 && D3<8)&&(D4>=0 && D4<8)&& (D5>=0 && D5<8)) &&(S==2))))
    switch(S)
    {    case 1: result=D1+D2*(2)+D3*(2*2)+D4*(2*2*2)+D5*(2*2*2*2); break;       
         case 2: result=D1+D2*(8)+D3*(8*8)+D4*(8*8*8)+D5*(8*8*8*8); break;
    }
    else 
    {cout<<"INVALID .............ERROR.............."; return 1;}
   cout<<"The result is: "<< result<<endl;
   system("pause");
   return 0;}