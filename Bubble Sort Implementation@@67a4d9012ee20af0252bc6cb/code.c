#include <stdio.h>
void bubblesort(arr,n);
void printArray(arr,n);
int main(){
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
return 0;
}
bubblesort(arr,n){
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
}
void printArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}