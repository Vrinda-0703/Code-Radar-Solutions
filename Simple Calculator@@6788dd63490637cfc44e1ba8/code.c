#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c",&c);
    switch (c){
    case '+':
        int s=a+b;
        printf("%d",s);
        break;
    case '-':
        int m=a-b;
        printf("%d",m);
        break;
    case '*':
        int y=a*b;
        printf("%d",y);
        break;
    case '/':
        int z=a/b;
        printf("%d",z);
        break;
    default:
        printf("Error");
    return 0;}
}