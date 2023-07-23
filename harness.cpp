#include <iostream>
#include <chrono>

#include "timer.h"
#include "vector_store.h"

int main()
{
    Timer timer;
    
    Vector_store vs;
    
    for(size_t i = 0; i < 10000; i ++)
        vs.insert_at_index(0, i);
    
}