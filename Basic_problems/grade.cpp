#include<iostream>
using namespace std;
int main()
{
    int m;
   cout<<"enter the marks"<<endl;
   cin>>m;
   if(m>=90)
    {
        cout<<"your grade is O";
    }
    else if(m>=80 && m<90)
    {
        cout<<"your grade is E";
    }
    else if(m>=70 && m<80)
    {
        cout<<"your grade is A";
    }
    else if(m>=60 && m<70)
    {
        cout<<"your grade is B";
    }
    else if(m>=50 && m<60)
    {
        cout<<"your grade is C";
    }
    else if(m>=40 && m<50)
    {
        cout<<"your grade is D";
    }
    else
    
    {
        cout<<"your grade is F";
    }
    return 0;
}