#include<stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

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
    printf("%d\n",maxOnesRow);
}