#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("enter elemts");
   struct Node
   {
    int data;
    struct Node* next;
   };
   struct Node* createNode (int data ){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
   }
   
 
}