#include <iostream>
#include <string>
using namespace std;

class car {
public:
    string model;
    string brand;
    int year;
};

int main() {
    car carobj1;

    carobj1.model = "model V";
    carobj1.brand = "brand S";
    carobj1.year = 2005;

    car carobj2;
    carobj2.model = "model O";
    carobj2.brand = "brand H";
    carobj2.year = 2006;

    cout << carobj1.model << " " << carobj1.brand << " " << carobj1.year << endl;
    cout << carobj2.model << " " << carobj2.brand << " " << carobj2.year << endl;

    return 0;
}
