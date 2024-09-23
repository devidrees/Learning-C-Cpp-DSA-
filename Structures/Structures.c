#include <stdio.h>

//initialize a structures
struct car{
    char name[10];
    char engine[10];
    int seats;
    float mileage;
};

void main(){

    struct car students[4]; // array of cars of 4 students

    //create umaid's detail
    struct car umaid= {"bullcart","taurus",1,50};
    // print the structure of idrees
    printf("\nEnter details for Umaid\n");
    printf("\nUmaid:\nName: %s\nEngine: %s\nseats: %d\nmileage: %f\n",umaid.name,umaid.engine,umaid.seats,umaid.mileage);


    // initializing two structures of type struct car
    struct car idrees,faizan; //two structures
    

    //enter details from user
        printf("\nEnter details for Idrees\n");
        
        printf("Enter car name: ");
        scanf("%s", idrees.name);

        printf("Enter engine: ");
        scanf("%s", idrees.engine);

        printf("Enter seats: ");
        scanf("%d", &idrees.seats);

        printf("Enter mileage: ");
        scanf("%f", &idrees.mileage);

        // print the structure of idrees
        printf("\nIdrees:\nName: %s\nEngine: %s\nseats: %d\nmileage: %f\n",idrees.name,idrees.engine,idrees.seats,idrees.mileage);

    //enter details for other user
        printf("\nEnter details for Faizan\n");
        
        printf("Enter car name: ");
        scanf("%s", faizan.name);

        printf("Enter engine: ");
        scanf("%s", faizan.engine);

        printf("Enter seats: ");
        scanf("%d", &faizan.seats);

        printf("Enter mileage: ");
        scanf("%f", &faizan.mileage);

        // print the structure of idrees
        printf("\nIdrees:\nName: %s\nEngine: %s\nseats: %d\nmileage: %f\n",faizan.name,faizan.engine,faizan.seats,faizan.mileage);




}