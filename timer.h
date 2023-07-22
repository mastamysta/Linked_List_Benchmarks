#ifndef TIMER_H
#define TIMER_H

class Timer
{
public:
    Timer();    
    ~Timer();

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_timepoint;
    void start();
    void stop();
};

#endif /* TIMER_H */