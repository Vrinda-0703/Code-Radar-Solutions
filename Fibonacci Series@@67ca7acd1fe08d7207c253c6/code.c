#include <stdio.h>
int fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d", &n);
    int fibonacciSeries();
    return 0;
}
fibonacciSeries(int n){
    int a,n,t1=0,t2=1,t3;
    printf("Fibonacci Series: ");
    for(int i=1;i<=n;i++){
        printf("%d",t1);
        t3=t2+t1;
        t1=t2;
        t2=t3;
    }
    printf("\n");
}