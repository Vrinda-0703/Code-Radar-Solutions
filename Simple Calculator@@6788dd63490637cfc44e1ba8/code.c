#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c",&c);
    switch (c);
    case'+':
        int sum=a+b;
        printf(sum);
        break;
    case'-':
        int diff=a-b;
        printf(diff);
        break;
    case'*':
        int c=a*b;
        printf(c);
        break;
    case'/':
        int div=a/b;
        printf(div);
        break;
    default:printf(Error);
}