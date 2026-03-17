#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num,hcf,lcm;
    cout<<"Enter num 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    if(num1<num2)
      num=num1;
    else
      num=num2;
    
        for(int i=num;i>=1;i--)
         {
            if(num1%i==0 && num2%i==0)
             {
                hcf=i;
                break;
             }

         }
    
         lcm=(num1*num2)/hcf;
        
         cout<<"HCF of "<<num1<<" and "<<num2<<" is :"<<hcf<<endl;
         cout<<"LCM of "<<num1<<" and "<<num2<<" is : "<<lcm;



    
    
}