#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2;
    cout<<"enter the cofficient of x "<<endl<<"for example 5x^2+2x+4=0 then "<<endl<<"the value of a=5 b=2 c=4"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"a= :";
    cin>>a;
    cout<<"b= :";
     cin>>b;
    cout<<"c= :";
     cin>>c;
    if(a!=0)
        {
            d=((b*b)-4*a*c);
            if (d==0)
                {
                    r1=-b/(2*a);
                    r2=-b/(2*a);
                }
            else if(d>1)
                {
                    r1=(-b-sqrt(d))/2*a;
                    r2=(-b+sqrt(d))/2*a;
                }
            else
                {
                    r1=-b/(2*a);
                    r2=(-b+sqrt(d))/2*a;
                }
        }
    cout<<"the roots are"<<endl<<"------------------------------------------------"<<endl<<"root 1="<<r1<<endl<<"root 2 ="<<r2<<endl;    
   return 0; 
}