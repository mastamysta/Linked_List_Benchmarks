#include <iostream>

#include "list_store.h"

class Node
{
public:
    Node(int value)
    {
        node_value = value;
        next = nullptr;
    }
    
    void set_next(Node* n)
    {
        next = n;
    }
    
    Node* get_next()
    {
        return next;
    }
    
private:
    int node_value;
    Node *next;
};

List_store::List_store()
{
    head = nullptr;
}

void List_store::append(int value)
{
    Node *n = new Node(value);
    
    if (head == nullptr)
    {
        head = n;
        return;
    }
    
    Node *curr;
    
    while ((*curr).get_next() != nullptr)
        curr = (*curr).get_next();
    
    (*curr).set_next(n);
}

void List_store::insert_at_index(size_t index, int value)
{   
    Node *n = new Node(value);
    
    if (head == nullptr)
    {
        if (index != 0)
            std::cout << "Index " << index << " out of bounds of empty list store\n";
        else
            head = n;
        
        return;
    }
    
    
    Node *curr = head;
    
    for(int i = 0; i < index; i++)
    {    
        curr = (*curr).get_next();
    }
    
    (*n).set_next((*curr).get_next());
    (*curr).set_next(n);
}

size_t List_store::linear_search(int value)
{
    return 0;
}