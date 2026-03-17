#include<iostream>
using namespace std;
int main()
{
   int choice=7;
   while(choice!=6)
   {
    cout<<"-------Restaurant Management System------"<<endl;
    cout<<endl;
    cout<<"1.view food menu "<<endl;
    cout<<"2. place order "<<endl;
    cout<<"3.view order status "<<endl;
    cout<<"4.Generate bill"<<endl;
    cout<<"5.contact staff "<<endl;
    cout<<"6.Exit "<<endl;
    cin>>choice;
    if(choice==1)
     cout<<"you selected food menu "<<endl;
    else if(choice==2)
     cout<<"Yoy entered place order "<<endl;
    else if (choice==3)
      cout<<"You entered view order status"<<endl;
    else if (choice==4)
       cout<<"You entered generate bill "<<endl;
    else if (choice==5)
      cout<<"you entered contact staff "<<endl;
    else if(choice==6)
      cout<<"Program ended "<<endl;

   }
}