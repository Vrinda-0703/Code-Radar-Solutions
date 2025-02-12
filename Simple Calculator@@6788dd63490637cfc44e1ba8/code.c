#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c",&c);
    switch (c){
    case '+':
        c=a+b;
        printf("%d",c);
        break;
    case '-':
        c=a-b;
        printf("%d",c);
        break;
    case '*':
        c=a*b;
        printf("%d",c);
        break;
    case '/':
        c=a/b;
        printf("%",c);
        break;
    default:
        printf("Error");
    return 0;}
}