#include<stdio.h>
int main(){
    int a,b,sum=0,mul=1,sub=0;
    scanf("%d %d", &a,&b);
    sum=a+b;
    mul=a*b;
    sub=a-b;
    printf("%d %d %d", sum,sub,mul);
    
    return 0;

}