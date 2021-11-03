#include "iostream"

using namespace std;

// Constructor Functions

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main() {

    Book book1("Larp Quotes", "Larpers inc", 69);

    Book book2("Larp Jokes", "Larpers inc", 46);

    cout << book1.title;

    return 0;
}