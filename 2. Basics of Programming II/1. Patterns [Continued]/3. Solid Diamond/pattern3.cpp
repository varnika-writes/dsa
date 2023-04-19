//
// Created by Varun Chawla on 17/02/23.
//

#include <iostream>
using namespace std;

void pattern3() {
    int n;

    cin >> n;

    // Upper half
    for (int row = 0; row < n; ++row) {
        // Spaces
        for (int col = 0; col < (n - (row + 1)); ++col) {
            cout << " ";
        }

        // Stars
        for (int col = 0; col < (row + 1); ++col) {
            cout << "*";

            //Spaces in-between stars
            if (col != row) {
                cout << " ";
            }
        }

        // New row
        if (row != (n - 1)) {
            cout << endl;
        }
    }

    // Bottom half
    for (int row = 0; row < n; ++row) {
        // Spaces
        for (int col = 0; col < row; ++col) {
            cout << " ";
        }

        //Stars
        for (int col = 0; col < (n - (row + 1)); ++col) {
            cout << "*";

            //Spaces in-between
            if (col != (n - row)) {
                cout << " ";
            }
        }

        // New line
        if ()
    }
}
