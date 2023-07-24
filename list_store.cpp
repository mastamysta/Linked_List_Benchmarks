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
    
    int get_value()
    {
        return node_value;
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
    
    Node *curr = head;
    
    while ((*curr).get_next() != nullptr)
        curr = (*curr).get_next();
    
    (*curr).set_next(n);
}

void List_store::insert_at_index(size_t index, int value)
{   
    Node *n = new Node(value);
    
    if (head == nullptr && index != 0)
    {
        std::cout << "Index " << index << " out of bounds of empty list store\n";
        
        return;
    }
    
    Node* prev = nullptr;
    Node* curr = head;
    
    for (int i = 0; i < index; i ++)
    {
        prev = curr;
        curr = curr->get_next();
    }
    
    if (prev)
        prev->set_next(n);
    else
        head = n;
    
    n->set_next(curr);
    
    
}

size_t List_store::linear_search(int value)
{
    /* Not impl */
    return 0;
}

size_t List_store::get_size()
{
    size_t cnt = 0;
    
    Node *curr = head;
    
    while (curr != nullptr)
    {
        cnt += 1;
        curr = (*curr).get_next();
    }
    
    return cnt;
}

std::vector<int>* List_store::get_data_as_vector()
{
    std::vector<int>* ret = new std::vector<int>;
    
    Node *curr = head;
    
    while (curr != nullptr)
    {
        
        (*ret).push_back(curr->get_value());
        curr = curr->get_next();
    }
    
    return ret;
}