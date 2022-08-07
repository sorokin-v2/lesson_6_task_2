#include <iostream>
#include "counter.h"

void Counter::increment() { ++count; }
void Counter::decrement() { --count; }
void Counter::print_count() { std::cout << count << std::endl; }
Counter::Counter(int start_val) { count = start_val; }
Counter::Counter() { count = 1; }


