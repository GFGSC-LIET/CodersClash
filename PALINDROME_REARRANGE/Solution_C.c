#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000000

int main(){
    
    char s[MAX]="";
    scanf("%s",&s);
    int hashh[26]={0};
    
    for(int i=0;i<strlen(s);i++){
      hashh[s[i]-'a']++;
    }
    
    int oddCount=0;
    for(int i=0;i<26;i++){
      if(hashh[i]%2){
        oddCount++;
      }
    }
    
    if(oddCount>1){
        printf("false\n");
    }
    else{
        printf("true\n");
    }

}