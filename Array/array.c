#include <stdio.h>
#define N 5

void main(){
    //int arr[N]= {1,2,3,4,5};

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter the input for index %d: ", i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray elements are: \n");
    for(int i=0; i<N;i++){
        printf("%d",arr[i]);
    }
    
}