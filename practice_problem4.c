#include<stdio.h>

int main(){
    int n;

    printf("Input a number: ");
    scanf("%d", &n);
    while(n>1){
        if(n%2 == 0) n /= 2;
        else n=3 * n+1;
        printf("==> %d\n", n);
        
    }

    // printf("==> %d\n", n);
    return 0;
}