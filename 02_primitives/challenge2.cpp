#include <iostream>
#include <string>


using namespace std;

int main() {
    string teaType;
    float pricePerKG = 20.0;
    int teaQuantity;
    char rating = 'A';

    cout << "Good Morning, What Tea(Chai) type would you like to have?" << endl;
    getline(cin, teaType);


    cout << "Please enter tea quantity: " << endl;
    cin >> teaQuantity;

    cout << "Attention Please, " << teaQuantity << " " << teaType << " is ready!\n" ;
    cout << "-----Chai Garam Garam Bhai lelo abhi Garam Garam------" << endl;

    return 0;
}