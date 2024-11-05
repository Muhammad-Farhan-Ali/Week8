#include<iostream>
using namespace std;

double pilesCube(double volume);
double exp(double a,double b);

int main()
{
    double volume;

    cout<<"Enter total volume:";
    cin>>volume; 

    cout<<pilesCube(volume)<<endl;

    return 0;
}
double pilesCube(double volume)
{
    double i=1;

    while(i<=volume)
    {
        double x=exp(((i*(i+1))/2),2);                  //sum of series of power n formula
        if(x == volume)
        {
            return i;
        }
        i++;
    }
    return -1;
}
double exp(double a,double b)
{
    double product=1;
    for(double i=1;i<=b;i++)
    {
        product=product*a;
    }
    return product;
}

