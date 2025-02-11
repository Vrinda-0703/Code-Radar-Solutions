#include <stdio.h>
int main() {
    int a;
    if(a>0){
        printf("Positive %d", a);
    }
    else if(a<0){
        printf("Negative %d", a);
    }
    else if(a==0){
        printf("Zero %d", a);
    }
    return 0;
}