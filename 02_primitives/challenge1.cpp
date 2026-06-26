#include <iostream>
#include <string>


using namespace std;

int main() {
    string teaType = "Ginger Tea";
    float pricePerKG;
    char rating = 'A';

    // cout << "Good Morning, What Tea(Chai) type would you like to have?" << endl;

    cout << "Good Morning, Please enter tea base price: " << endl;
    cin >> pricePerKG;
    int newPrice = (int) (pricePerKG + pricePerKG * 0.1);

    cout << "-----Tea Details------" << endl;

    cout << "Tea Type: " << teaType << "\n" ;
    cout << "Price/KG: " << pricePerKG << "\n" ;
    cout << "Tea price increased by 10%: " << newPrice << "\n" ;
    cout << "Rating: " << rating << "\n" ;


    return 0;
}