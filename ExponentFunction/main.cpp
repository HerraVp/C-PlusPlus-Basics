#include "iostream"

using namespace std;

// Exponent Function

int power(int baseNum, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; ++i) {
        result = result * baseNum;
    }

    return result;
}

int main() {

    int num1;
    int num2;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    cout << power(num1, num2);

    return 0;
}