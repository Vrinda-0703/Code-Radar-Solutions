#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase %c");
    }
    else{
        printf("Lowercase")
    }
    return 0;
}