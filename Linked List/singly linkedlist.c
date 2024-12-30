#include <stdio.h>
#include <stdlib.h>

//create a structure for a list node
struct Node{
    int data; // holds integer data
    struct Node *link; // pointer that stores an address of a struct Node element
};

void main(){

// create pointers to the nodes
struct Node *head;
struct Node *second;
struct Node *third;

// Allocate memory dynamically to pointer locations
head =(struct Node*)malloc(sizeof(struct Node));
second =(struct Node*)malloc(sizeof(struct Node));
third =(struct Node*)malloc(sizeof(struct Node));

// Pass data through pointers using arrow operator
head->data= 5;
head->link= second;

second->data= 10;
second->link= third;

third->data= 15;
third->link= NULL;


// print the linked list
printf("%d      %d      %d\n%p      %p      %p\n",head->data,head->link->data,second->link->data,head->link,second->link,third->link);
//printf("%d      %d      %d\n",head->data,head->link->data,second->link->data);

}