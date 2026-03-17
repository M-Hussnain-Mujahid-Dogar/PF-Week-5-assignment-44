#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"Enter a number ";
    cin>>num;cout<<endl;
    while(num!=0)
    {
       num= num%10;
       num= num/10;
       sum++;


    }

}