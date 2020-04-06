#include<iostream>
using namespace;
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
void push(Node** head_ref, int new_data)  
{  
    Node* new_node = new Node();  
 
    new_node->data = new_data;  
  
    new_node->next = (*head_ref);  
 
    (*head_ref) = new_node;  
}  
void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
 
    Node* new_node = new Node(); 
 
    new_node->data = new_data;  
  
    
    new_node->next = prev_node->next;  
 
    prev_node->next = new_node;  
}  
/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */
void push(Node** head_ref, int new_data)/*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
