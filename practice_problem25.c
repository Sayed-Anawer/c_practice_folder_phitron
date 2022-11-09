// Selection Sorting.
#include<stdio.h>
int main(){
int N=8;
int sortedArray[N];
int arr[8]={12,7,9,3,15,2,6,5};
int i,j;
int min,minIndex;
for(j=0;j<N;j++)
{
min=arr[0];
minIndex=0;
for(i=0;i<N;i++){
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;
    }
}
sortedArray[j]=min;
arr[minIndex]=999999;
for(int i=0;i<N;i++){
    printf("%d ", arr[i]);
   
}
 printf("\n");
}

for(int i=0;i<N;i++){
    printf("%d ", sortedArray[i]);
}
    return 0;
}