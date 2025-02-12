#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c",&c);
    switch (c){
    case '+':
        s=a+b;
        printf("%d",s);
        break;
    case '-':
        m=a-b;
        printf("%d",m);
        break;
    case '*':
        y=a*b;
        printf("%d",y);
        break;
    case '/':
        z=a/b;
        printf("%",z);
        break;
    default:
        printf("Error");
    return 0;}
}