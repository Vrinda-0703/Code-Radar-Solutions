#include <stdio.h>
int main() {
    float area,radius,pi=3.14;
    scanf("%f", &radius);
    area=pi*radius*radius;
    printf("Area: %.2f", area);
    return 0;
}