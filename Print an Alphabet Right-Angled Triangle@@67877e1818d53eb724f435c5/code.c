#include<stdio.h>
int main(){
    char ch;
    int a,b,N;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        ch='A';
        for(b=1;b<=a;b++){
            printf("%c",ch);
            printf(" ");
            ch++;
        }
    printf("\n");
    }
}