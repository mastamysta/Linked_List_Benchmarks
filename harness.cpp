#include <iostream>
#include <chrono>

#include "timer.h"
#include "vector_store.h"
#include "list_store.h"

void test_vector_store()
{
    Timer timer;
    
    Vector_store vs;
    
    for(size_t i = 0; i < 10000; i ++)
        vs.insert_at_index(0, i);
}

void test_list_store()
{
    Timer timer;
    
    List_store ls;
    
    for(size_t i = 0; i < 10000; i ++)
        ls.insert_at_index(0, i);
}

int main()
{
    
    test_vector_store();
    test_list_store();
    
}