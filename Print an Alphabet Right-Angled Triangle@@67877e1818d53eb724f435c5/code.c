#include<stdio.h>
int main(){
    char a,b,ch;
    int N;
    scanf("%d", &N);
    for(a=1;a<=N;a++){
        ch='a';
        for(b=1;b<=a;b++){
            printf(ch);
            ch++;
        }
    printf("\n");
    }
}