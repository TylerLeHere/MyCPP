//
// Created by Tyler Le on 2026-01-30.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    const int BUTTER = 1,
          EGG = 2,
          VANILLA = 2,
          FLOUR = 2,
          CHOC_CHIP = 2;
    const double BAKING_SODA = 0.75,
                 SUGAR = 1.5,
                 SALT = 0.25;

    int dozen,
        quantity;
    cout << "Chocolate Chip Cookies - 4 dozen cookies" << endl;

    cout << "\nPreheat oven to 350 F. In a large bowl, mix butter, sugar, eggs, and vanilla\n"
     << "until light and fluffy. In a separate bowl, combine flour, baking soda, and\n"
     << "salt; stir into the butter mixture until well-blended stir in chocolate chips.\n"
     << "Drop by rounded teaspoons onto ungreased cookie sheets. Bake 8-10 minutes until\n"
     << "just set. Cool slightly on cookie sheets before transferring to cooling racks\n"
     << "to cool completely." << endl;

    cout << "\nHow many dozens are you planning to make (Please give a multiple of four)?" << endl;
    cin >> dozen;

    cout << "It is " << dozen << endl;

    quantity = dozen / 4;

    cout << "\n\n\t" << quantity * BUTTER << " cup butter\n"
         << "\t" << quantity * SUGAR << " cups white sugar\n"
         << "\t" << quantity * EGG << " eggs\n"
         << "\t" << quantity * VANILLA << " tsp vanilla extract\n"
         << "\t" << quantity * FLOUR << " cups all-purpose flour\n"
         << "\t" << quantity * BAKING_SODA << " baking soda\n"
         << "\t" << quantity * SALT << " tsp salt\n"
         << "\t" << quantity * CHOC_CHIP << " cups chocolate chips" << endl;

    return 0;



}