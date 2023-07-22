#include <iostream>
#include <chrono>

class Timer
{
    
public: 
 
    Timer()
    {
        start();
    }
    
    ~Timer()
    {
        stop();
    }
    
    void start()
    {
        std::cout << "Timer starting\n";
        start_timepoint = std::chrono::high_resolution_clock::now();
    }
    
    void stop()
    {
        auto end_timepoint = std::chrono::high_resolution_clock::now();
       
        /* We do the conversion operations *after* we have finished our 
         * measurement to minimise the performance impact of the timer.
         */
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_timepoint).time_since_epoch().count();
       
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_timepoint).time_since_epoch().count();
        
        auto time = end - start;
       
        std::cout << "Timer stopped after a duration of " << time << "\xE6s\n";
    }
    
private:

    std::chrono::time_point<std::chrono::high_resolution_clock> start_timepoint;
    
};

int main()
{
    Timer timer;
    
    for(int i = 0; i < 10000; i ++)
        std::cout << "hurdurr\n";
    
}