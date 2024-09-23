#include <stdio.h>
void main(){

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