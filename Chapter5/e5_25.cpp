//
// Created by Tyler Le on 2026-04-05.
//Revise your program from the previous exercise to use a try block to catch the exception.
//The catch clause should print a message to the user and ask them to supply a new number
//and repeat the code inside the try.

#include <iostream>
#include <stdexcept>


using namespace std;
int main() {
    int a, b;

    cin >> a >> b;
    try {
        if (b == 0) throw runtime_error("Division by zero");

        cout << a / b << endl;
    } catch (const std::runtime_error &e) {
        std::cout << e.what() << "\nTry again? [y/n]" << '\n';
        char c;
        std::cin >> c;
        if (!std::cin || c == 'n') {
            return 0;
        }

    }

    return 0;
}

