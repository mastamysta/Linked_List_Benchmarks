#include <iostream>
#include <chrono>

#include "timer.h"

int main()
{
    Timer timer;
    
    for(int i = 0; i < 10000; i ++)
        std::cout << "hurdurr\n";
    
}