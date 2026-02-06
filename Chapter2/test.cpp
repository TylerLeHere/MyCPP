//
// Created by Tyler Le on 2026-01-24.
//
#include <iostream>
int main() {
    // WRONG: u can never be less than 0; the condition will always succeed
    for(unsigned u = 10; u >= 0; --u)
        std::cout << u << std::endl;
}