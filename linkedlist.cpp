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
