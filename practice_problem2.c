/**************************************************************** 
 * There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C.You have chosen two cards and picked them up.Find the maximum possible sum of the integers written on the picked cards.
The range of the  A,B,C -> 1-100

******************************************************************/

#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);
    if(a>b && a>c && b>c)
        printf("%d",a+b);
    else if(a>b && a>c && c>b)
        printf("%d",a+c);
    else if(b>a && b>c && a>c)
        printf("%d",b+a);
    else if(b>a && b>c && c>a)
        printf("%d",b+c);
    else if(c>a && c>b && a>b)
        printf("%d",c+a);
    else if(c>a && c>b && b>a)
        printf("%d",c+b);
    else if(a==b && a>c)
        printf("%d",a+b);
    else if(a==c && a>b)
        printf("%d",a+c);
    else if(b==c && b>a)
        printf("%d",b+c);
    else
        printf("%d",a+b);
    
return  0;
}