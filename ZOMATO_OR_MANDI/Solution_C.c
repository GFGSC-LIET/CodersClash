#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int zomatoCost,mandiCost;
    scanf("%d%d",&zomatoCost,&mandiCost);

    zomatoCost=(float)0.9*zomatoCost;

    if(zomatoCost<mandiCost){
        printf("%d\nZOMATO",zomatoCost);
    }
    else if(mandiCost<zomatoCost){
        printf("%d\nMANDI",mandiCost);
    }
    else{
        printf("%d\nBOTH",mandiCost);
    }
}