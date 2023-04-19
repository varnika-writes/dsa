//
// Created by Varun Chawla on 17/02/23.
//

#include <iostream>
using namespace std;

void pattern2() {
    // n is the number of rows.
    int n;

    cin >> n;

    // Traverse through the rows of our 2-D shape.
    for (int row = 0; row < n; ++row) {

        // Print the spaces.
        for (int col = 0; col < row; ++col) {
            cout << " ";
        }

        // Print the stars.
        for (int col = 0; col < (n - row); ++col) {
            cout << "*";

            // Print the space in between the starts, until the second last star.
            if (col != (n - row - 1)) {
                cout << " ";
            }
        }

        // Create a new line, until the last row of our 2-D shape.
        if(row != (n - 1)) {
            cout << endl;
        }
    }
}
