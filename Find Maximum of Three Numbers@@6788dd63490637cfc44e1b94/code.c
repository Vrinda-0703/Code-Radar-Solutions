#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf(max);
return 0;
}