#include<bits/stdc++.h>

using namespace std;

int tong(string &n){
	int t=0;
	for(int i=0;i<n.length();i++){
		char c = n[i];
		t=(t+(c-48));
	}
	return t;
}

main(){
	freopen("SODEP.INP", "r", stdin); 
    freopen("SODEP.OUT", "w", stdout);
    string n;
    cin>>n;
	if(tong(n)%10 == 9)
	cout<<1;
	else cout<<0;
}
