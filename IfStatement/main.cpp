#include "iostream"

using namespace std;

int main() {

    // If Statements

    isNerd = false;
    auto isVirgin = true;

    if(isNerd && isVirgin){
        cout << "You are a N E R D... And you are a virgin. Yikes.";

    } else if (isNerd && !isVirgin){
        cout << "You are not a nerd but you are a virgin.";
    } else {
        cout << "You are a nerd.";
    }

    return 0;
}