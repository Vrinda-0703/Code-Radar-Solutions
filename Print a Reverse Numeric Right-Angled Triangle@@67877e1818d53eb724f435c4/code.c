#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d", &n);
    for(a=n;a>=1;a--){
        for(b=1;b<=a;b++){
            printf("%d", b);
        }
    printf("\n");
    }
}