//
// Created by Tyler Le on 2026-03-28.
//Write a program to create a vector with ten int elements. Using an iterator,
//assign each element a value that is twice its current value.
//Test your program by printing the vector.

#include<iostream>
#include<string>
using namespace std;

int main() {
    // Create a vector with ten int elements
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it = *it * 2;
        cout << *it <<" ";
    }
}


