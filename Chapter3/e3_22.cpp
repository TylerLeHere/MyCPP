// Revise the loop that printed the first paragraph in text to instead
// change the elements in text that correspond to the first paragraph to all uppercase.
// After you’ve updated text, print its contents.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for (auto &c : text) {
        if (isalpha(c)) {
            c = toupper(c);
        }
    }
    cout << endl << text;
}

