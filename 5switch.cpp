#include<iostream>
using namespace std;

int main()
{
   int n1,n2;
   cout<<"Enter value of N1 and N2"<<endl;
   cin>>n1>>n2;

   char op;
   cout<< "Input an operator";
   cin>>op;

   switch (op)
   {
    case '+':
       cout<< n1 + n2<<endl;
       break;
    case '-':
       cout<< n1 - n2<<endl;
       break;
    case '*':
       cout<< n1 * n2<<endl;
       break;
    case '/':                                                            
       cout<< n1 / n2<<endl;
       break;      
   

    default:
    cout<<"Enter proper operator...."<<endl;
       break;
   }

    return 0;    
}
