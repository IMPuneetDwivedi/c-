#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool found = false; // Flag to track if the value 5 is found

    for (int i = 0; i < 10; i++) {
        if (arr[i] == 11) {
            found = true; // Update the flag if 5 is found
            break; // Exit the loop once 5 is found
        }
    }

    if (found) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}