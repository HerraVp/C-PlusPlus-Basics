#include "iostream"

using namespace std;

// Object Functions

class Larper {
public:
    string name;
    string rank;
    double iq;
    Larper(string aName, string aRank, double aIq) {
        name = aName;
        rank = aRank;
        iq = aIq;
    }

    bool isNerd() {
        if(iq >= 70){
            return true;
        }
        return false;
    }
};

int main() {
    Larper larper1("John", "King", 40);
    Larper larper2("Michael", "Slave", 120);

    cout << larper2.isNerd();

}