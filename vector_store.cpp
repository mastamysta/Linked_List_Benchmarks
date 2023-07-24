#include <iostream>

#include "vector_store.h"

void Vector_store::append(int value)
{
    store.push_back(value);
}

void Vector_store::insert_at_index(size_t index, int value)
{
    std::vector<int>::iterator it = store.begin() + index;
    store.insert(it, value);
}

size_t Vector_store::linear_search(int value)
{
    for (size_t i = 0; i < store.size(); i++)
        if (store[i] == value)
            return i;
        
    return -1;
}

size_t Vector_store::get_size()
{
    return store.size();
}

std::vector<int>* Vector_store::get_data_as_vector()
{
    return &store;
}
    