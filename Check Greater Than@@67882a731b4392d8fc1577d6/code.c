#include <stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);
    printf("%d", a);
    scanf("%d", &b);
    printf("%d", b)
    if(a>b)
        printf("True");
    else if(b>a)
        printf("False");
    else
        printf("equal");
    return 0;
}