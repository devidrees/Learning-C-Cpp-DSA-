#include <stdio.h>
#define N 5 // 'this is a macro to store n


void reverseorder();

void main(){
    //int arr[N]= {1,2,3,4,5};

    int arr[N], i;
    for(i=0;i<N;i++){
        printf("Enter the input for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are: \n");
    
    for(i=0; i<N;i++){
        printf("%d", arr[i]);

    }

    // size of an array
    printf("\n\nNumber of array elements is: %d \n",sizeof(arr)/sizeof(arr[0]));

    reverseorder(arr);


    // Multi dimensional arrays
    int multiarr[3][3]={{1,2,3},{3,4,5},{5,6,7}}; //2D array
    //print 2D array
    int ii=3; int jj =3; //dimensions
    for (int i=0; i<ii;i++){ //1st dimension i=3
        for (int j = 0; j < jj; j++){ //2nd dimension j=3
            printf("%d",multiarr[i][j]);
        }
        printf("\n");
    }

    // 3 dimensional arrays
    int D3arr[3][2][3]={{{1,2,3},{1,2,3}},{{1,2,3},{1,2,3}},{{1,2,3},{1,2,3}}}; //2D array
    
    //print 3D array
    int ii=3; int jj =2; int kk=3; //dimensions
    
    for(int i=0; i<ii; i++){ //1st dimension i=3
        for (int j = 0; j < jj; j++){ //2nd dimension j=3
            for (int k = 0; k < kk; k++){
                printf("%d",D3arr[i][j][k]);
            }
                    printf("\n");
        }
        printf("\n");
    }


    // sum of rows
    int multiarr[3][3]={{1,2,3},{3,4,5},{5,6,7}}; //2D array
    //print 2D array 
    // 1 2 3 -> 6
    // 3 4 5 -> 12
    // 5 6 7 -> 18
    int sum=0;
    int ii=3; int jj =3; //dimensions
    for (int i=0; i<ii;i++){ //1st dimension i=3
        for (int j = 0; j < jj; j++){ //2nd dimension j=3
            sum+=multiarr[i][j];
        }
        printf("%d\n",sum); // 6, 12, 18
        sum=0;
    }

    


    
}

void reverseorder(int array[]){
    printf("\nArray elements in reverse order are: \n");
    
    for (int i = N-1; i>=0; i--){
        printf("%d", array[i]);
    }
    printf("\n");

}