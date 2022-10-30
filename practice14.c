#include<stdio.h>

int main(){
    int N = 5;
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<N; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
           min = arr[i];
        }
    }
    printf("Largest number is : %d\n", max);
    printf("Smallest number is : %d", min);
    return 0;
}