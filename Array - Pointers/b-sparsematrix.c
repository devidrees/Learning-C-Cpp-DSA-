#include <stdio.h>

int main(){

//create a 2d sparse matrix
int sparse[4][4]={0,0,0,1,0,0,3,0,4,0,0,3,6,0,0,0};
// 0001
// 0030
// 4003
// 6000

int size=0; // initialize size at zero

// print this matrix
for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
	printf("%d",sparse[i][j]);
// count non zeros and set size to that number
  if(sparse[i][j]!=0){
    size++;
    }
  }
  printf("\n");
}


// create information matrix, which will always just be a 3 column matrix with, row, column and value numbers
 int infomat[size][3];

 int k=0;

 for(int i=0;i<4;i++){
 	for(int j=0;j<4;j++){
        // where ever element in the matrix is not equal to zero, create the elements of information matrix	
        if(sparse[i][j]!=0){
        infomat[k][0]=i; // sets the row number, for first iteration, this will be 0
        infomat[k][1]=j; // sets the column number, for first iteration, this will be 3
        infomat[k][2]=sparse[i][j]; // sets the value which will be 1 for the first iteration, so (0,3) -> 1
        k++; //keep increasing the row number of the information matrix
        }   
    }
}

// print the information matrix
printf("\n");
for(int i=0;i<size;i++){
  for(int j=0;j<3;j++){
	printf("%d",infomat[i][j]);
  }
  printf("\n");
}

}