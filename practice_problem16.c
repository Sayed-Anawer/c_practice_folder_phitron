
#include <stdio.h>
int main(){
    int N,ln,sn;
    int arr[N];    
    int temp = 0;
    printf("Number of array size: ");
    scanf("%d", &N);
    printf("nth largest number: "
    );
    scanf("%d", &ln);
    printf("nth smallest number: "
    );
    scanf("%d", &sn);

    for(int i = 0; i<N; i+=1){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]= arr[j];
                    arr[j]=temp;
                }
            }
    }
    
    printf("%d - largest number is: %d\n",ln,arr[N-(ln)]);
    printf("%d - smallest number is: %d\n",sn,arr[sn-1]);
    return 0;
}