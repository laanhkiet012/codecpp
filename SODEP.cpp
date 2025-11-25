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
bool ct(ll n){
    ll t=tn(n);
    if(t%10==9){
        return true;
    }
    return false;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    ll n;
    cin>>n;
    if(ct(n)){
        cout<<"1";
    }
    else
        cout<<"0";
    return 0;
}

