#include<stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    case'a':{
        int sum=a+b;
        printf(sum);
        break;
    }
    case'b':{
        int diff=a-b;
        printf(diff);
        break;
    }
    case'c':{
        int c=a*b;
        printf(c);
        break;
    }
    case'd':{
        int div=a/b;
        printf(div);
        break;
    }
    
}