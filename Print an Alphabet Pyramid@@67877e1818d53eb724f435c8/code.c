#include<stdio.h>
int main(){
    int a,b,N;
    char ch;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        ch='A';
        for(b=1;b<=a;b++){
            printf("%c",ch);
            ch++;
            printf(" ");
        }
    printf("\n");
    }
return 0;
}