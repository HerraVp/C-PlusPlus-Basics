#include "iostream"

using namespace std;

// Constructor Functions

class Book {
private:
    string author;
public:
    string title;
    //string author;
    int pages;

    Book(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        pages = aPages;
        setAuthor(aAuthor);
    }

    void setAuthor(string aAuthor) {
        author = aAuthor;
    }

    string getAuthor() {
        return author;
    }
};

int main() {

    Book book("Larpers", "John", 44);
    book.setAuthor("John");

    cout << book.getAuthor();

    return 0;
}
