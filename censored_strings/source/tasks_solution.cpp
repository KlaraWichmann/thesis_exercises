#define _USE_MATH_DEFINES
#include <iostream>
#include <exception>
#include <cmath>
#include "tasks.hpp"

std::string uncensor(std::string str, std::string vowels) {
    // funktionert noch nicht
    
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str.compare(i, 1, "*") == 0) {
            char temp1 = vowels[count];
            const char *temp2 = &temp1;
            str.replace(i, 1, temp2);
            std::cout << str << std::endl;
            count ++;
        }
    }
    
    return str;
}

