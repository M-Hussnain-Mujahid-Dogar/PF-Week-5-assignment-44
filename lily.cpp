#include<iostream>
using namespace std;
int main()
{
    int age,toy;
    int price;
    int money=0,total;
    cout<<"Enter age of lily"<<endl;
    cin>>age;
    cout<<"Now please enter unit price of toys "<<endl;
    cin>>toy;
    cout<<"Enter price of washing machine "<<endl;
    cin>>price;
    int add=10;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {  money+=add;
            money--;
            add+=10;}
        else
           money=money+toy;


        
          
        
    }
    if(money>=price)
    {
    cout<<"YES !"<<endl;
    cout<<"remaining :"<<money-price;
    }
    else
    {
        cout<<"NO !"<<endl;
        cout<<"Needed :"<<price-money;
    }


}