#include<stdio.h>
int main(){
    int a,b,n;
    scnaf("%d", &n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
    }
return 0;
}