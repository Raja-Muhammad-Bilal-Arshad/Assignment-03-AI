#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float anual_income,result,tax;
    string choice1,choice2;
    cout<<fixed<<setprecision(2)<<"Enter your annual income :";
    cin>>anual_income;
    cout<<"Are you a salaried individual(yes or no)  :";
    cin>>choice1;
    cout<<"Are you a teacher in a non-profit organization(yes or no):  ";
    cin>>choice2;
    if(anual_income>600000)
    {
    if(choice1=="yes" || choice2=="no")
    {
        if(anual_income>600000 && anual_income<=1200000)
             tax=0.025*(anual_income-600000);
        else
        {
            if(anual_income>1200000 && anual_income<=2400000)
                  tax=15000+(0.125*(anual_income-1200000));
            else
            {
                if(anual_income>2400000 && anual_income<=3600000)
                tax=165000+(0.20*(anual_income-2400000));
            else
              {
                if(anual_income>3600000 && anual_income<=6000000)
                tax=405000+(0.25*(anual_income-3600000));
            else
            tax=1005000+0.325*(anual_income-6000000);
            }}}}
    else
 {
      {  if((choice1=="no" || choice2=="yes"))
        if(anual_income>600000 && anual_income<=1200000)
             tax=0.05*(anual_income-600000);
        else
           { if(anual_income>1200000 && anual_income<=2400000)
                  tax=30000+(0.125*(anual_income-1200000));
            else
            {
                if(anual_income>2400000 && anual_income<=3600000)
                tax=180000+(0.17*(anual_income-2400000));
            else
              {
                if(anual_income>3600000 && anual_income<=6000000)
                tax=390000+(0.225*(anual_income-3600000));
            else
            tax=975000+0.30*(anual_income-6000000);
            }}}}}}
else
cout<<"No tax is deducted..."<<endl;
if(choice2=="yes")
tax=tax-0.25 *(tax);
cout<<"Annual income tax is "<<tax<<endl;
cout<<"Monthly deduction after subtracting tax is "<<(anual_income-tax)/12;
}