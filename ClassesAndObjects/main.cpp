#include "iostream"

using namespace std;

// Classes And Objects

class Book {
public:
    string title;
    string author;
    int pages;
};

int main() {

    Book book1;
    book1.title = "Larp Quotes";
    book1.author = "Larpers inc";
    book1.pages = 69;

    Book book2;
    book2.title = "Larp Jokes";
    book2.author = "Larpers inc";
    book2.pages = 46;

    cout << book2.pages;

    return 0;
}