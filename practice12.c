#include<stdio.h>

int main(){

    int a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The first %d natural number is : \n",a);
    for(int i = 1; i<=a; i++){
        printf("%d ",i);
        sum = sum + i;
       
    }
     printf("\nThe sum of Natural number upto %d terms: %d\n",a, sum);
    return 0;
}