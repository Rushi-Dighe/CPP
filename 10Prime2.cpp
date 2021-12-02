#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
for(int i =2;i<=sqrt(num);i++)
    {
        if (num%i == 0)
        {
            /* code */
            return false;
        }
        
    }
    return true; 
}

int main(){
    int a,b;
    cin>>a>>b;

    for (int i = a; i < b; i++)
    {
        /* code */
        if (isPrime(i))
        {
            /* code */
            cout<<i<<endl;
        }
        
    }
    return 0;
    

}
