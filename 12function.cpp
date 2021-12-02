#include<iostream>
#include<math.h>
using namespace std;

//Fibonacci Sequence == The term is sum of previous two terms
// void fib(int n){
//     int t1=0;
//     int t2= 1;
//     int nextTerm;

//     for(int i=1;i<=n;i++)
//     {
//         cout<<t1<<endl;
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;    
// }
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }

//Factorial Of Number
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;
    return 0;

}