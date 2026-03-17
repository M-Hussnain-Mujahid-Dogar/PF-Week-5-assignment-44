#include<iostream>
using namespace std;
int main()
{
    int num;
    int count=8;
    while(count!=6)
    {
        cout<<"----Simple Calculator------"<<endl;
        cout<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction "<<endl;
        cout<<"3.Multuplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.clear screen "<<endl;
        cout<<"6.Exit"<<endl;
        cin>>count;
        int num1,num2;
        if(count==1)
          { 
            cout<<"Enter two numbers "<<endl;
            cin>>num1;cin>>num2;
            cout<<"Addition is :"<<num1+num2<<endl;
          }
        else if (count==2)
        {
            cout<<"Enter two numbers "<<endl;
            cin>>num1;cin>>num2;
            cout<<"substraction is "<<num1-num2<<endl;

        }
        else if (count==3)
        {
            cout<<"Enter two numbers "<<endl;
            cin>>num1;cin>>num2;
            cout<<"multiplication is "<<num1*num2<<endl;

        }
        else if(count==4)
        {
            cout<<"enter two numbers "<<endl;
            cin>>num1;cin>>num2;
            cout<<"division is "<<num1/num2<<endl;

        }
        else if (count ==5)
         cout<<"screen cleared "<<endl;
        else if (count==6)
          cout<<"{program ended "<<endl;
        

    }

}