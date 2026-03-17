#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch='h';

    while(ch!='n' && ch!='N')
     {
        cout<<"I am happy !"<<endl;
        cout<<"Enter your choice "<<endl;
        cin>>ch;
     }
}