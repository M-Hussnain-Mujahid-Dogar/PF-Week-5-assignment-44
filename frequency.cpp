#include<iostream>
using namespace std;
int main()
{
    int num;
    int count=0;
    int digit;
    cout<<"enter a number "<<endl;
    cin>>num;
    cout<<" enter a digit "<<endl;
    cin>>digit;
    while(num!=0)
    {
        if(num%10==digit)
          count++;
       num= num/10;
    }
    cout<<count;
}