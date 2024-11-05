#include<iostream>
using namespace std;

void howBad(double num);
bool isPrime(double num);

double main()
{
    double num;

    cout<<"Enter number:";
    cin>>num;

    howBad(num);

    return 0;
}
void howBad(double num)
{
    double binarySum;
    while(num!=0)
    {
        binarySum=binarySum+(num%2);
        num=num/2;
    }
    if(binarySum%2==0)
    {
        cout<<"Evil";
        if(isPrime(binarySum))
        {
            cout<<",Pernicious"<<endl;
        }
    }
    else
    {
        cout<<"Oddish";
        if(isPrime(binarySum))
        {
            cout<<",Pernicious"<<endl;
        }
    }
}
bool isPrime(double num)
{
    double check=0;
    for(double i=2;i<num;i++)
    {
        if(num%i==0)
        {
            check++;
            break;
        }
    }
    if(num==2 || check==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
