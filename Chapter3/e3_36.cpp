#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::cin;
using std::vector;
using std::begin;
using std::end;

int main() {
    // array
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int *s1 = begin(arr1), *e1 = end(arr1), *s2 = begin(arr2), *e2 = end(arr2);
    bool issame = true;

    // check size
    if ((e1 - s1) != (e2 - s2)) {
        issame = false;
    }

    // check elements
    for (int *p1 = s1, *p2 = s2; p1 != e1 && p2 != e2; ++p1, ++p2) {
        if (*p1 != *p2) {
            issame = false;
            break;
        }
    }

    std::cout << (issame ? "Same\n" : "Diff\n");
    // vector
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {1,2,4,5,5};
    std::cout << ((vec1 == vec2) ? "Same" : "Diff") << '\n';

    return 0;
}