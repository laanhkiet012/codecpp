#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tn(ll n){
    ll s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    ll n;
    cin>>n;
    if(tn(n)%10==9){
        cout<<"1";
    }
    else
        cout<<"0";
    return 0;
}

