#include<stdio.h>
int main(){
    int a,n,count=0;
    scanf("%d", &n);
    for(a=1;a<=n;a++){
        if(n%a==0){
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