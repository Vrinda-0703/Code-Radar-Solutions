#include<stdio.h>
int main(){
    int a,n,sum=0;
    scanf("%d", &n);
    for(a=1;a<=n;a++){
        printf("%d", sum);
    }
    sum=sum+a;
}