#ifndef LIST_STORE_H
#define LIST_STORE_H

#include "data_interface.h"

class Node;

class List_store: public data_interface
{
public:
    List_store();
    void append(int value);
    void insert_at_index(size_t index, int value);
    size_t linear_search(int value);
    size_t get_size();
    std::vector<int>* get_data_as_vector();
private:
    Node* head;
};

#endif