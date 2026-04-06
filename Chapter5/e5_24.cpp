//
// Created by Tyler Le on 2026-04-05.
//Revise your program to throw an exception if the second number is zero.
//Test your program with a zero input to see what happens on your system if you don’t catch an exception.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    if (b == 0) {
        throw runtime_error("Division by zero");
    }

    cout << a / b << endl;
    return 0;

}

