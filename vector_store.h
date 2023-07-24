#ifndef VECTOR_STORE_H
#define VECTOR_STORE_H

#include "data_interface.h"

class Vector_store: public data_interface
{
public:
    void append(int value);
    void insert_at_index(size_t index, int value);
    size_t linear_search(int value);
    size_t get_size();
    std::vector<int>* get_data_as_vector();
private:
    std::vector<int> store;
};

#endif