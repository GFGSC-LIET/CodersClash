#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int zomatoCost,mandiCost;
    cin>>zomatoCost>>mandiCost;

    zomatoCost=(float)0.9*zomatoCost;

    if(zomatoCost<mandiCost){
        cout<<zomatoCost<<endl;
        cout<<"ZOMATO\n";
    }
    else if(mandiCost<zomatoCost){
        cout<<mandiCost<<endl;
        cout<<"MANDI\n";
    }
    else{
        cout<<mandiCost<<endl;
        cout<<"BOTH\n";
    }
    
}
 
int main(){
     
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    
    solve();
    
}