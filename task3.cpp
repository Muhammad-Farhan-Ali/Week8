#include<iostream>
using namespace std;

void plant(string seed,double water,double fert,double temp);

double main()
{
    string seed;
    double water,fert,temp;

    cout<<"Enter the Seed:";
    cin>>seed;
    cout<<"Enter water:";
    cin>>water;
    cout<<"Enter fertilizer:";
    cin>>fert;
    cout<<"Enter temperature:";
    cin>>temp;

    plant(seed,water,fert,temp);

    return 0;
}
void plant(string seed,double water,double fert,double temp)
{
    double n=1;
    if(temp>=20 && temp<=30)
    {
        while(n<=water)
        {
            for(double i=1;i<=water;i++)
            {
                cout<<"-";
            }
            for(double j=1;j<=fert;j++)
            {
                cout<<seed;
            }
            n++;
        }
    }
    else
    {
        while(n<=water)
        {
        for(double i=1;i<=water;i++)
            {
                cout<<"-";
            }
        n++;
        }
        
        cout<<seed;
    }
}