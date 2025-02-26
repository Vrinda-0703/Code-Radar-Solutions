#include<stdio.h>
int main(){
    int a,b,c,N,num=1;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        for(b=1;b<=N-a;b++){
            printf(" ");
        }
        for(c=1;c<=2*a-1;c++){
            printf("%d",num);
            printf(" ");
            num++;
        }
    printf("\n");
    }
}