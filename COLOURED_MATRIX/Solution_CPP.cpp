#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    long long res=0;
    if(n%2==0){
        res=((n/2 +1)*(n));
    }
    else{
        res=n*n-(2*n-1);
    }
    cout<<res<<endl;
    
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}