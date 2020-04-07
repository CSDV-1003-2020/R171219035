// A complete working C program to demonstrate deletion in singly 
// linked list 
#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
/* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
  
