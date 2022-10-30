#include<stdio.h>

int main(){
    int N = 5;
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]); // 1 2 3 6 5 4
    }
    int max = arr[0]; // 1
    int min = arr[0]; // 1
    int secondMax = arr[1]; // 2
    int secondMin = arr[1]; // 2
    for(int i=0; i<N; i++){
        if(arr[i]>max){ // 1 > 1 = false    2 > 1 = true
            max = arr[i];   // max = 2  max = 3 max = 6 max = 5 max = 4 
        }
        if(arr[i]<min){ // 1 < 1 = false    2 < 1 = false
           min = arr[i]; // min = 1 min = 1 min = 1 min = 1 min = 1
        }  
     }
     for(int i=0; i<N; i++){
        if(arr[i]>secondMax && arr[i]<max){ 
            secondMax = arr[i]; // 
        }
        if(arr[i]<secondMin && arr[i]>min){ // 2 < 2 && 2 > 1 = false 
            secondMin = arr[i]; // secondMin = 2
        }

     }
    printf("Largest number is : %d\n", max);
    printf("Second largest number is : %d\n", secondMax);
    printf("Smallest number is : %d\n", min);
    printf("Second smallest number is : %d\n", secondMin);
return 0;
}