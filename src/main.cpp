#include <iostream>
#include "average.h"

int main() {
    int a [8];
    input(a);
    std::cout << average(a)<<std::endl;

    double b [8];
    input (b);
    std::cout << average(b)<<std::endl;

    float c [8];
    input (c);
    std::cout << average (c);

}
