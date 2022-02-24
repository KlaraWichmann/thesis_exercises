#define _USE_MATH_DEFINES
#include <iostream>
#include <exception>
#include <cmath>
#include "tasks.hpp"

int cars (int wheels, int bodies, int figures) {
    int count = 0;
    
    
    wheels = wheels - 4;
    bodies = bodies - 1;
    figures = figures - 2;
    
    while (wheels >= 0 && bodies >= 0 && figures >= 0) {
        wheels = wheels - 4;
        bodies = bodies - 1;
        figures = figures - 2;
        count ++;
    }
    
    return count;
}

