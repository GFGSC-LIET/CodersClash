#include<stdio.h>
#include<stdlib.h>

int comp(const void *a,const void *b){
  return ( *(int*)a>*(int*)b );
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    long long smallestSum=1;

    qsort(arr,n,4,comp); // you can use any sorting algorithm

    for(int i=0;i<n;i++){
        if(arr[i]<=smallestSum){
           smallestSum+=arr[i];
        }
        else break;
    }
    printf("%lld\n",smallestSum);
}