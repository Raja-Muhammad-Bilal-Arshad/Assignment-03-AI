#include<iostream>
using namespace std;
int main()
{
    int a,b,c,num,rem,result;
    cout<<"Enter your selection number(1 for binary digit and 2 for octal digit): ";
    cin>>num;
    switch(num)
    {
        case 1:
        {
            cout<<"Enter your number: ";
            cin>>a;
            if(a!=0 && a!=1)
            {
                if(a/10==0)
                {
                    cout<<"Invalid Input";
                    return 1;
                }
                else if(a/100==0)
                {
                    cout<<"Invalid Input";
                    return 1;
                }
                else if(a/1000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2);
                     rem=a%10;
                     result=result+(rem*2*2);
                }
                else if(a/10000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2*2);
                     rem=a%10;
                     result=result+(rem*2*2*2);                   
                }
                else if(a/100000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2*2);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*2*2*2);
                     rem=a%10;
                     result=result+(rem*2*2*2*2);
                }
                else
                {
                    cout<<"INVALID DIGIT INPUT ";
                    return 1;
                    }

                }
                else
                {
                    cout<<"INVALID INPUT";
                    return 1;
                }
                break;

        }
        
        case 2:
        {
            cout<<"Enter your number: ";
            cin>>a;
            if(a<8 || a>=0)
            {
                if(a/10==0)
                {
                    cout<<"Invalid Input";
                    return 1;
                }
                else if(a/100==0)
                {
                    cout<<"Invalid Input";
                    return 1;
                }
                else if(a/1000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8);
                     rem=a%10;
                     result=result+(rem*8*8);
                }
                else if(a/10000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8*8);
                     rem=a%10;
                     result=result+(rem*8*8*8);                   
                }
                else if(a/100000==0)
                {
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*1);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8*8);
                     rem=a%10;
                     a=a/10;
                     result=result+(rem*8*8*8);
                     rem=a%10;
                     result=result+(rem*8*8*8*8);
                }
                else
                {
                    cout<<"INVALID DIGIT INPUT ";
                    return 1;
                    }

                }
                else
                {
                    cout<<"INVALID INPUT";
                    return 1;
                }
                break;

        }
        
        default:
        {
            cout<<"INVALID INPUT";
            return 1;
        }
    }


    cout<<result<<endl;
    system("pause");
    return 0;

}

