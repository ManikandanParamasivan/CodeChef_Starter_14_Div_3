#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int g = 0;
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
        g = __gcd(g,arr[i]);
    }
    int op = 0;
    while(g%2 == 0){
        g = g/2;
        op++;
    }
    cout<<op<<endl;
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}