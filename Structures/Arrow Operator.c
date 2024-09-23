#include <stdio.h>

//initialize a structures
struct student{
    int rollno;
    int marks;
};

typedef struct teacher{ // defined the type of this structure as teacher now // using the typedef keyword here
    char name[10];
    int regno;
} teacher;

void main(){
    // creating structures
    teacher nawaz= {"nawaz",17}; // nawaz is a variable of type 'teacher'
    teacher tanzeel= {"tanzeel",9};

    struct student idrees= {15,48}; // creating a variable idrees of type 'struct student'

    // let's use arrow operator now
    struct student *pidrees=&idrees; // pointer pidrees is pointing to a variable at idrees, which is a variable of type 'struct student'

    printf("\nUsing the pidrees -> rollno and pidrees -> marks\nIdrees Rollno.: %d\nIdrees marks: %d\n",pidrees->rollno,pidrees->marks);// use of pointer points to a part of a structure

    printf("\nUsing the idrees.rollno and idrees.marks\nIdrees Rollno.: %d\nIdrees marks: %d\n",idrees.rollno,idrees.marks);

    printf("\nUsing the &idrees,&idrees.rollno,&idrees.marks\n&idrees.rollno: %p\n&idrees.marks: %p\n",&idrees,&idrees.rollno,&idrees.marks);

    printf("\nSize of idrees %d and size of roll no. %d\n",sizeof(idrees),sizeof(idrees.rollno));
    
    printf("\nSize of nawaz %d and size of name %d\n",sizeof(nawaz),sizeof(nawaz.name));

}