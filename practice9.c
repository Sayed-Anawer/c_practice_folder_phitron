#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
   if(a<0){
        printf("%d is negative\n", a);
    }
    else if(a>0){
        printf("%d is positive\n", a);
    }
    else{
        printf("%d is zero\n", a);
    }
    return 0;
   }
   