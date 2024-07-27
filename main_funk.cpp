#include "header_funk.h"
#include <iostream>

void Counter::set_count(int count) {
    count = count;
}
int Counter::get_count() const {
    return count;
}
void Counter::incrim_count() {
    count++;
}
void Counter::decrim_cout() {
    count--;
}
void Counter::print_dig() const {
    std::cout << count << std::endl;
}