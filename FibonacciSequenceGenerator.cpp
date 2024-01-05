// FibonacciSequenceGenerator
// TITLE: Fibonacci Sequence Generator

#include <iostream>
using namespace std;

int main() {
    // Initialize the first two terms of the Fibonacci sequence
    int term1 = 0, term2 = 1, value, next;

    // Asks for input to determine how many terms the user requires
    cout << "Enter a positive number: ";
    cin >> value;

    if (value > 0) {
        cout << "Fibonacci sequence:";

        // A for loop to go through each term and apply the Fibonacci code
        for (int i = 0; i < value; i++) {
            cout << term1 << ',';
            next = term1 + term2;
            term1 = term2;
            term2 = next;
        }

    } else {
        cout << "Please use a positive number.";
    }

    return 0;
}
