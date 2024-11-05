#include<iostream>
using namespace std;

double calculateDamage(string yourType,string opponentType,double attack,double defense);

double main()
{
    string yourType,opponentType;
    double attack,defense;

    cout<<"Enter your pokemon type:";
    cin>>yourType;
    cout<<"Enter your opponent's pokemon type:";
    cin>>opponentType;
    cout<<"Enter your attack:";
    cin>>attack;
    cout<<"Enter opponent's defense:";
    cin>>defense;

    cout<<calculateDamage(yourType,opponentType,attack,defense)<<endl;

    return 0;
}
double calculateDamage(string yourType,string opponentType,double attack,double defense)
{
    float effectiveness;
    float damage;

    if((yourType=="fire" && opponentType=="grass") || (yourType=="water" && opponentType=="fire") ||(yourType=="grass" && opponentType=="water") || (yourType=="electric" && opponentType=="water"))
    {
        effectiveness=2.0;
    }
    else if((yourType=="grass" && opponentType=="fire") || (yourType=="fire" && opponentType=="water") ||(yourType=="water" && opponentType=="grass") || (yourType=="water" && opponentType=="electric"))
    {
        effectiveness=0.5;
    } 
    else if((yourType=="fire" && opponentType=="electric") || (yourType=="electric" && opponentType=="fire") || (yourType=="grass" && opponentType=="electric") || (yourType=="electric" && opponentType=="grass") || (yourType==opponentType))
    {
        effectiveness=1.0;
    }
    else
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    damage=50*(attack/defense)*effectiveness;
    return damage;
}