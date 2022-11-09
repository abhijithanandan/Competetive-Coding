#include <iostream>
#include <vector>
#include <string>

using namespace std;

int print_int_vector();

int main() {
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
    print_int_vector();
    
}