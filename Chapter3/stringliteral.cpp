//
// Created by Tyler Le on 2026-02-17.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    // read input a line at a time until end-of-file
    while (getline(cin, line))
        cout << line << endl;
    return 0;
}