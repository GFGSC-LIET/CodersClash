#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string s;
    cin>>s;
    
    unordered_map<char,int>hashh;
    for(auto it:s){
        hashh[it]++;
    }
    int oddCount=0;
    for(auto it:hashh){
        if(it.second%2){
            oddCount++;
        }
        if(oddCount>1){
            break;
        }
    }
    
    if(oddCount<=1)cout<<"true\n";
    else cout<<"false\n";
    
}
 
int main(){
     
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    
    solve();
    
}