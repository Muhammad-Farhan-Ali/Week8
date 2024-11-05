#include<iostream>
using namespace std;

double primeNumbers(double num);

double main()
{
    double n;

    cout<<"Enter an doubleeger:";
    cin>>n;

    cout<<primeNumbers(n)<<endl;

    return 0;
}
double primeNumbers(double num)
{
    double n=2,prime=0;
    while(n<=num)
    {
        double check=0;
        for(double i=2;i<n;i++)
        {
            if(n%i==0)
            {
                check++;
                break;
            }
        }
        if((n==2) || (check==0))
        {
            prime++;
        }
        n++;
    }
    return prime;
}