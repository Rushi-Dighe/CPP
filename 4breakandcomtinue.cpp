#include<iostream>
using namespace std;

int main()
{     
 int n,i;
 cout<<"Enter the value of n :"<<endl;
 cin>>n;

 for (int i=2; i < n; i++)
 {
     if (n%i==0)
     {
         cout<<"Non prime"<<endl;
         break;
     }
     else
     {
         cout<<"Prime"<<endl;
     }
     
 }
 if (i==n)
 {
     cout<<"Prime"<<endl;
 
 }
 
 
 return 0;     
}