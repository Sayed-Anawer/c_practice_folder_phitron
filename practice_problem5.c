#include<stdio.h>
int main(){
    int i=1,n,sum=0,w;
    printf("Enter the number of person: ");
    scanf("%d", &n);
    while(i<=n){
    printf("Enter the person %d weight: ", i);
    scanf("%d", &w);
    sum+=w;
    i++;
    }
    printf("Total weight: %d", sum);
        return 0;
    }