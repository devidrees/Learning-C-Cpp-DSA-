#include <stdio.h>

//create a structure for a list node
struct Node{
    int data; // holds integer data
    struct Node *link; // pointer that stores an address of a struct Node element
};

void main(){

    // create 3 nodes
    struct Node Head; // declaring a structure and allocating memory for this instance
    struct Node Second; // ideally we have to create a pointer that can hold the address of a Node structure. so that memory is dynamically allocated
    struct Node Third;

    
    Head.data=10;
    Head.link=&Second;

    Second.data=22;
    Second.link=&Third;

    Third.data=34;
    Third.link=NULL;


        // Print values
    printf("Head data: %d\n", Head.data);
    printf("Second data: %d\n", Second.data); // gives 22 // second.data can also be written as head.link ->data
    printf("Third data: %d\n", Third.data); // gives 34


}