#include <stdio.h>
int main() {
    int a;
    if(a>0){
        printf("Positive %d");
    }
    else if(a<0){
        printf("Negative %d");
    }
    else if(a==0){
        printf("Zero %d");
    }
    return 0;
}