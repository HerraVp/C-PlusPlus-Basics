#include "iostream"

using namespace std;

// Pointers

int main() {
    int age = 19;
    int *pAge = &age;
    double gpa = 2.2;
    double *pGpa = &gpa;
    string name = "Nerd";
    string *pName = &name;

    /*
     cout << "Age: " << &age << endl;
     cout << "Gpa: " << &gpa << endl;
     cout << "Name: " << &name << endl;
     */

    // cout << *pAge; // Actual Value
    // cout << pAge; // Memory Address

    return 0;
}