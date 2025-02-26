#include<stdio.h>
int main(){
    int a,b,N,num=1;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        for(b=1;b<=a;b++){
            printf("%d", num);
            printf(" ");
        }
    a++;
    printf("\n");
    }
}