#include "iostream"

using namespace std;

int main() {

    // Strings
    string phrase = "Larpers inc";
    string phrasesub;

    cout << phrase.find("inc", 0);

    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;

    return 0;
}

