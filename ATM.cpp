#include<iostream>
using namespace std;
int main()
{
    const int pin=4321;
    bool pass=false;
    int pin2;
    for(int i=0;i<3;i++)
    {
     cout<<"Please enter ATM pin :";cin>>pin2;cout<<endl;
      if(pin==pin2)
       {cout<<"Login Successful"<<endl;
        pass=true;break;}
      else
        cout<<"Wrong pin enter again "<<3-(i+1)<<" chances are remaining ! "<<endl;
    }
    if(pass)
    {
       int balance=0;
       int quit=0;
       while(quit!=4)
       {
        cout<<endl;
        cout<<"1.Check Balance "<<endl;
        cout<<"2.Deposit Money "<<endl;
        cout<<"3.Withdraw Money "<<endl;
        cout<<"4.Exit"<<endl;
        int choice;
        cout<<"Enter your choice : ";cin>>choice;cout<<endl;
        if(choice==1)
        {
            cout<<"Current balance :"<<balance;
        }
        else if(choice==2)
        {
            int add;
            cout<<"Enter amount you want to deposit :";cin>>add;cout<<endl;
            balance=balance+add;
            cout<<"Money deposited successfully";

        }
        else if(choice==3)
        {
            int wd;
            cout<<"Enter amount you want to withdraw :";cin>>wd;cout<<endl;
            if(balance>wd)
             {
                 cout<<"Collect your cash ";
                balance=balance-wd;
             }
        }
        else if(choice==4)
        {
            quit=4;
        }

       }

       
     }
}