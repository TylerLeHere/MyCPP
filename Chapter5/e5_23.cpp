//
// Created by Tyler Le on 2026-04-05.
// Write a program that reads two integers from the standard input and prints the result of dividing
// the first number by the second.

#include <iostream>

using namespace std;
int main() {
    int a, b;
    std::cin >> a >> b;
    int result = a / b;
    std::cout << result << endl;
    return 0;
}
