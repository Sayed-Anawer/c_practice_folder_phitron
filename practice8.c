#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);
    }
    return 0;
}