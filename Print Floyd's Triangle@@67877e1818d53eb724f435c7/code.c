#include<stdio.h>
int main(){
    int a,b,N,num;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        num=1;
        for(b=1;b<=a;b++){
            printf("%d", num);
            printf(" ");
        }
    printf("\n");
    }
}