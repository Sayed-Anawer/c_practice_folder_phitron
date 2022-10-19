#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    if(a==b){
        printf("The value of a and b is equal");
    }
    else{
        printf("The value of a and b is not equal");
    }

    return 0;
}