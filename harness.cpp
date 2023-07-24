#include <iostream>
#include <chrono>

#include "timer.h"
#include "vector_store.h"
#include "list_store.h"

template<typename T>
void do_test(T& store)
{
    
    // Prepack data store with some data
    for(size_t i = 0; i < 1000; i ++)
        store.insert_at_index(0, i);
    
    // Start timer
    Timer *timer = new Timer;
    
    // Insert data
    for(size_t i = 0; i < 500; i ++)
        store.insert_at_index(100, i);
    
    delete timer;
}

int main()
{
    
    Vector_store vs;
    List_store ls;
    
    do_test(vs);
    do_test(ls);
    
    std::cout << "vecsize " << vs.get_size() <<"\n"; 
    std::cout << "listsize " << ls.get_size() <<"\n"; 
    
    std::vector<int>* vsvec = vs.get_data_as_vector();
    std::vector<int>* lsvec = ls.get_data_as_vector();
    
    size_t errcnt = 0;
    
    
    // Validate the data
    for(int i = 0; i < vs.get_size(); i++)
        if ((*vsvec)[i] != (*lsvec)[i])
        {
            std::cout << "vectors not same for index " << i << "\n";
            std::cout << "vs: " << (*vsvec)[i] << "   ls: " << (*lsvec)[i] << "\n";
            
            errcnt++;
            
            // Don't want thousands of lines of errors
            if (errcnt > 110)
                return 1;
        }
    std::cout << "done\n";
}