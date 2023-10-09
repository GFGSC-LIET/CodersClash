#include<stdio.h>

int main(){
  
    int n;
    scanf("%d",&n);
    long long res=0;
    
    if(n%2==0){
        res=((n/2 +1)*(n));
    }
    else{
        res=n*n-(2*n-1);
    }
    printf("%lld\n",res);
}