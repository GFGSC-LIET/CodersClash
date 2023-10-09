#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,m;
    cin>>n>>m;

    int maxOnesCount=0;
    int maxOnesRow=-1;
    
    for(int i=0;i<n;i++){
        int onesCount=0;
        for(int j=0;j<m;j++){
            int x;
            scanf("%d",&x);
            if(x==1){
                onesCount++;
            }
        }
        if(onesCount>maxOnesCount){
           maxOnesCount=onesCount;
            maxOnesRow=i;
        }
    }
    cout<<maxOnesRow<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    solve();
}