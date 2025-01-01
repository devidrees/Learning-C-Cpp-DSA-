#include <stdio.h>

//structure to represent an information matrix
struct informat{
    int row;
    int col;
    int val;
};

void main(){

    // Define a sparse matrix with non zero elements
    int sparseMatrix[4][5] = {{0, 0, 3, 0, 0},
                              {0, 0, 0, 0, 4},
                              {5, 0, 0, 0, 0},
                              {0, 0, 0, 6, 0}
    }; 

// Display the sparse matrix
printf("\nSprase Matrix is:\n");
for (int i = 0; i < 4; i++) {
    for(int j=0;j<5;j++){
        printf("%d  ",sparseMatrix[i][j]);
    }
    printf("\n");
}

// array to store the elements now, information matrix
struct informat sparse[20]; // since there are only 4 elements in the matrix

int k =0; // non zero collector

// Convert 2D array to sparse matrix format
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        if (sparseMatrix[i][j] != 0) {
            sparse[k].row = i;
            sparse[k].col = j;
            sparse[k].val = sparseMatrix[i][j];
            k++;
        }
    }
}

// Display the sparse matrix
printf("\nInformation Matrix is: \n");
printf("Row   Column   Value\n");
for (int i = 0; i < k; i++) {
    printf("%d       %d       %d\n", sparse[i].row, sparse[i].col, sparse[i].val);
}


// Reconstruct a sparse matrix
int resparse[4][5]={0};
for (int i = 0; i < k; i++)
{
    resparse[sparse[i].row][sparse[i].col]=sparse[i].val;
}


// Display the sparse matrix
printf("\nReSprase Matrix is:\n");
for (int i = 0; i < 4; i++) {
    for(int j=0;j<5;j++){
        printf("%d  ",resparse[i][j]);
    }
    printf("\n");
}

}
