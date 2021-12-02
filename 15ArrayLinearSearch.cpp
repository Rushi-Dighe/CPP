#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
            /* code */
        }    
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }    
    int key;
    cin>>key;
    cout<<linearSearch(arr, n , key);
}