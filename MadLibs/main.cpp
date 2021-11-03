#include "iostream"

using namespace std;

int main() {

    // Mad Libs
    string color, pluralNoun, thing;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a thing: ";
    getline(cin, thing);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << thing << endl;
}