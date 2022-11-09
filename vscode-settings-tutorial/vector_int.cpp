#include <iostream>
#include <string>
#include <vector>

using namespace std;

int print_int_vector() {
    vector<int> num {1, 2, 3, 4, 5};

    for (const int& n : num)
    {
        cout << n << " ";
    }

    return 0;
}
