#include <iostream>
using namespace std;

int main() {
    int number1;
    int number2;
    char operation;
    int result;

    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> operation;

    if (operation == '+') {
        result = number1 + number2;
        cout << "Result: " << result << endl;
    } else if (operation == '-') {
        result = number1 - number2;
        cout << "Result: " << result << endl;
    } else if (operation == '*') {
        result = number1 * number2;
        cout << "Result: " << result << endl;
    } else if (operation == '/') {
        if (number2 != 0) {
            result = number1 / number2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    } else if (operation == '%') {
        if (number2 != 0) {
            result = number1 % number2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    } else {
        cout << "Invalid operation" << endl;
    }

    return 0;
}
