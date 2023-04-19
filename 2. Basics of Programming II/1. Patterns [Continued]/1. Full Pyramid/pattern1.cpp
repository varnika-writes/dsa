//
// Created by Varnika on 20/04/23.
//

#include "pattern1.h"
#include <iostream>
using namespace std;

void pattern1() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1) {

        // Print empty spaces.
        for (int col = 0; col < (n - (row + 1)); col = col + 1) {
            cout << " ";
        }

        // Print the stars.
        for (int col = 0; col < (row + 1); col = col + 1) {
            cout << "*";

            // Print the gap in-between the stars.
            // This logic means that, "Keep printing the gaps, until you've printed the last star, that is, the column number is now equal to the number of the row."
            if (col != row) {
                cout << " ";
            }
        }

        // Print new line, until the last row is reached.
        if (row != (n - 1))
            cout << endl;
    }
}