#include<iostream>
using namespace std;
int main()
{
    string um="admin123";
    int pw=1234;
    string u;
    int p;
    string name;
    int age;
    cout<<"Enter username "<<endl;
    cin>>u;
    cout<<"Enter password "<<endl;
    cin>>p;
    if(u==um && p==pw)
     {
        for(int i=0;i<3;i++){
        cout<<endl;
        cout<<"-------University Management System --------"<<endl;
        cout<<"1. Add Student "<<endl;
        cout<<"2. View Student "<<endl;
        cout<<"3. Add Course "<<endl;
        cout<<"4. Exit "<<endl;
        int choice;
        cout<<"Enter choice : ";
        cin>>choice; cout<<endl;
        if(choice==1)
        {
            cout<<"Enter student name :";
        

            cin>>name;cout<<endl;
            cout<<"Enter age :";cin>>age;cout<<endl;
            
        }
        else if(choice==2)
        {
            cout<<"THe name of student is :"<<name<<endl;
            cout<<"The age is :"<<age;
        }
        else if(choice==3)
        {
            string course;
            cout<<"ENter course :";cin>>course;

        }
        else if(choice==4)
        {
            cout<<"Program ends ";
            break;}
        else 
         cout<<"Invalid choice ";
        }
            
        

     }

}