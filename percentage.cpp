#include<iostream>
using namespace std;
int main()
{
    int num;
    int count;
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    cout<<"Enter a number count "<<endl;
    cin>>count;
    for(int i=0;i<count;i++)
    {
    cout<<"Enter a number "<<endl;
    cin>>num;
    if(num<200)
        p1=p1+1;
    else if(num<400)
       p2=p2+1;
    else if(num<600)
       p3=p3+1;
    else if(num<800)
       p4=p4+1;
    else if(num<1000)
       p5=p5+1;}
       float sum=p1+p2+p3+p4+p5;
    float per1=(p1/sum)*100;
    float per2=(p2/sum)*100;
    float per3=(p3/sum)*100;
    float per4=(p4/sum)*100;
    float per5=(p5/sum)*100;
    cout<<per1<<endl;
    cout<<per2<<endl;
    cout<<per3<<endl;
    cout<<per4<<endl;
    cout<<per5<<endl;


}