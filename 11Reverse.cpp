#include<iostream>
using namespace std;

int main()
{
    int n,lastdigit;
    int reverse = 0;
 
    cout<<"Enter the number : ";
    cin>>n;
 
    while (n>0)
    {
        lastdigit = n%10;
        reverse = reverse *10 + lastdigit;
        n = n/10;  
    }
    cout<<"Reversed of Number is : "+reverse;
    cout<<reverse<<endl;
    return 0;
}