#include <iostream>

using namespace std;

// Function to print all combination of numbers in a given array

void combination(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++) {

            for (int k = i; k <= j; k++) {

                cout << arr[k] << " ";

            }

            cout << endl;

        }

    }
}


int main() {

    // take input array from user

    cout << "Enter the size of the array: ";

    int n;

    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    combination(arr, n);

    return 0;
}