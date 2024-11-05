#include<iostream>
using namespace std;

bool doesBrickFit(double a,double b,double c,double w,double h);

double main()
{
    double a,b,c,w,h;

    cout<<"Enter height of brick:";
    cin>>a;
    cout<<"Enter width of brick:";
    cin>>b;
    cout<<"Enter depth of brick:";
    cin>>c;
    cout<<"Enter width of hole:";
    cin>>w;
    cout<<"Enter height of hole:";
    cin>>h;
    cout<<doesBrickFit(a,b,c,w,h);

    return 0;
}
bool doesBrickFit(double a,double b,double c,double w,double h)
{
    if((a*b==w*h) || (a*c==w*h) || (b*c==w*h))
    {
        return true;
    }
    else
    {
        return false;
    }
}