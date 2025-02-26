#include<stdio.h>
int main(){
    int a,b,c,N;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        for(b=1;b<=N-a;b++){
            printf(" ");
        }
        for(c=1;c<=2*a;c++){
            printf("%d",b);
            b++;
        }
    printf("\n");
    }
}