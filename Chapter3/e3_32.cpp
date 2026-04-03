//
// Created by Tyler Le on 2026-03-29.
//

#include <iostream>
#include <vector>
using namespace std;

// Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

int main() {
    // array
    constexpr int N = 10;
    int array1[N];
    int array2[N];

    for (int i = 0; i < N; ++i) {
        array1[i] = i;
    }

    for (int i = 0; i < N; ++i) {
        array2[i] = array1[i];
    }

    // vector
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < N; ++i) {
        v1.push_back(array1[i]);
    }
    v2 = v1;

    for (auto &d: v2) {
        cout << d << " ";
    }
    cout << '\n';
}