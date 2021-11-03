#include "iostream"

using namespace std;

int main() {

    // Calculator
    int num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;
    int result;

    if(op == '+') {
        result = num1 + num2;

    } else if(op == '-') {
        return num1 - num2;

    } else if(op == '/') {
        return num1 / num2;

    } else if(op == '*') {
        return num1 * num2;

    } else {
        cout << "Invalid operator!";
    }

    cout << result;

    return 0;
}
