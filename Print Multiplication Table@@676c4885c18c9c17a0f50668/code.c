#include<stdio.h>
int main(){
    int a,c;
    scanf("%d", &c);
    for(a=1;a<=10;a++){
        printf("%d x %d = %d\n",c,a,c*a);
    }
return 0;
}