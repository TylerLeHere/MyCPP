//
// Created by Tyler Le on 2026-01-24.
//
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
int main() {
    // WRONG: u can never be less than 0; the condition will always succeed

    Sales_data data1;
    double price;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cout << "Revenue: " << data1.revenue << std::endl;


    // It is a bad idea to define an object as part of a class definition. It obscures the code by combining the definitions of 2 different units.


}