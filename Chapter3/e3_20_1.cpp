//
// Created by Tyler Le on 2026-02-26.
//

//Read a set of integers into a vector. Print the sum of each pair of adjacent elements.2

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int x;
    std::vector<int> num;

    while (std::cin >> x) {
        num.push_back(x);
    }

    for (int i = 0; i < num.size() - 1; i++) {
        cout << num[i] + num[i+1] << endl;
    }


}
