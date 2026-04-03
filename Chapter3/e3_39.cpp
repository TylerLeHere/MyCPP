//
// Created by Tyler Le on 2026-04-02.
//  Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::string s1 = "Hello World";
    std::string s2 = "Hello World";

    if (s1 == s2) {
        cout << "Equal" << endl;
    }else if (s1 < s2) {
        cout << "Less" << endl;
    }else {
        cout << "Greater" << endl;
    }
}

