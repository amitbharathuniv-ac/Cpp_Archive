#include<iostream>
using namespace std;
int main()
{
    float pie=3.14,r,area;
    cout<<"pie value is already known pie=3.14"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"please enter the value of radius:  ";
    cin>>r;

    area= pie * (r * r);
    cout<<endl<<"----------------------------------------"<<endl;
    cout<<"the area is:"<<area<<endl;
    

   return 0; 
}