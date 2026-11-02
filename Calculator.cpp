// Create a menu - based program that allows a user to repeatedly choose an arithmetic function to perform.

// The actual functions are not due for this part of the assignment.

// The program should be repeatable and display the name of function chosen.


#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        // Display the menu
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Process the user's choice and display the function name
        switch (choice) {
        case 1:
            cout << "\nYou selected: Addition\n";
            // Actual function logic will go here in Part 2
            break;
        case 2:
            cout << "\nYou selected: Subtraction\n";
            // Actual function logic will go here in Part 2
            break;
        case 3:
            cout << "\nYou selected: Multiplication\n";
            // Actual function logic will go here in Part 2
            break;
        case 4:
            cout << "\nYou selected: Division\n";
            // Actual function logic will go here in Part 2
            break;
        case 5:
            cout << "\nExiting program. Goodbye!\n";
            break;
        default:
            cout << "\nInvalid choice. Please enter a number between 1 and 5.\n";
        }

    } while (choice != 5); // Repeat until the user chooses to exit

    return 0;
}