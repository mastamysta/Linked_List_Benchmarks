#ifndef DATA_INTERFACE_H
#define DATA_INTERFACE_H

class data_interface
{
  
public:
    virtual void append(int value) = 0;
    virtual void insert_at_index(size_t index, int value) = 0;
    virtual size_t linear_search(int value) = 0;
  
};

#endif