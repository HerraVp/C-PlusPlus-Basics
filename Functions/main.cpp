#include "iostream"

using namespace std;

void Hi(string name, int age) {
    cout << "Hi, " << name << "!" << " You are a " << age << " years old guy.";
}

int main() {

    // Functions
    cout << "<--------------> ";
    Hi("John", 21);
    cout << " <-------------->";

    return 0;
}