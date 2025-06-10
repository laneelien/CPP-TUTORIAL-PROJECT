#include <iostream>
#include <string>
#include <limits>
#include "include/utils.h"

using namespace std;

// Local version of isPrime if not using utils.h
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    string intro;

    cout << "Please write an introductory sentence about yourself:\n";
    getline(cin, intro);

    if (!intro.empty()) {
        int number;
        cout << "\nThank you! Now, enter an integer between 0 and 100: ";

        while (true) {
            cin >> number;
            if (cin.fail() || number < 0 || number > 100) {
                cout << "Invalid input. Please enter an integer between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        // Even or Odd
        if (number % 2 == 0) {
            cout << number << " is even.\n";
        } else {
            cout << number << " is odd.\n";
        }

        // Prime check
        if (isPrime(number)) {
            cout << number << " is a prime number.\n";
        } else {
            cout << number << " is not a prime number.\n";
        }

    } else {
        cout << "No introduction provided. Program exiting.\n";
    }

    return 0;
}
