#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &c);
    switch (c){
    case '+':
    {
        int s=a+b;
        printf("%d",s);
        break;
    }
    case '-':
    {
        int m=a-b;
        printf("%d",m);
        break;
    }
    case '*':
    {
        int y=a*b;
        printf("%d",y);
        break;
    }
    case '/':
    {
        if(b!=0){
        int z=a/b;
        printf("%d",z);
        }
        else{
            printf("Division not possible");
        }
        break;
    }
    default:
        printf("Error");
    }
}
