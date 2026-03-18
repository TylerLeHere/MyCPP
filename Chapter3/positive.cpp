//
// Created by Tyler Le on 2026-02-24.
//

#include<iostream>
#include<string>
using namespace std;

int main() {
    // Write a program that reads 10 integers from the user. After all the numbers have been entered, the user mayask
    // to display the count of positive numbers or count the negative numbers
    int number;
    int positiveCount = 0;
    int negativeCount = 0;
    for (int i = 0; i < 10; i++) {
        cin >> number;
        if (number > 0) {
            positiveCount++;
        }
        if (number < 0) {
            negativeCount++;
        }
    }

    char response;
    cout << "Do you want(p)ositive or (n)egative number" << endl;
    cin >> response;

    if (response == 'p') {
        cout << "Positive count is " << positiveCount << endl;
    }else {
        cout << "Negative count is " << negativeCount << endl;
    }
}