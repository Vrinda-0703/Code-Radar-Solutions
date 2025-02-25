#include<stdio.h>
int main(){
    int a,n,count;
    for(a=1;a<=n;a++){
        if(a%n==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}