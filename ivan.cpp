#include<iostream>
using namespace std;
int main()
{
    int age=18;
    int end;
    int m;
    int money,a;
    cout<<"Please enter money in inheritance"<<endl;
    cin>>m;
    if(a>1 && a<1000000)
       money=m;
    cout<<"Please enter the age to live "<<endl;
    cin>>a;
    if(a>1800 && a<1900)
      end=a;
    for(int i=1800;i<=end;i++)
    {
        if(i%2==0)
          money=money-12000;
        else
          money=money-(12000+(50*age));
        age++;
    }
    if(money>=0)
    { cout<<"Yes he can survive"<<endl;
      cout<<"he has remaining :"<<money<<"dollars"<<endl;}
    else
     {
        cout<<"No! he cannot survive "<<endl;
        cout<<"he needs  -----"<<money<<"--- to survive :"<<endl;
     }

      
}