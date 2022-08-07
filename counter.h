#pragma once

class Counter {
public:
    void increment();
    void decrement();
    void print_count();
    Counter(int);
    Counter();
private:
    int count;
};

