// Simple program to demonstrate the use of Kdance Algorithm

#include <iostream>

using namespace std;

// Function to return sub arrays of a given array


int kdance(int arr[], int n) {

    int maximum = arr[0];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n-i; j++) {

        int sum = 0;

            for (int k = j; k < j + i + 1; k++) {

                sum += arr[k];

            }
            
            if (sum > maximum) {

                maximum = sum;

            }

        }

    }

    return maximum;

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


    int maximum = kdance(arr, n);

    cout << maximum << endl;

    return 0;
}
