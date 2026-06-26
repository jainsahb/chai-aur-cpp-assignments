#include <iostream>
#include <string>

using namespace std;

int main() {
    int userInput;

    const int GREEN_TEA = 1;
    const int BLACK_TEA = 2;
    const int OOLONG_TEA = 4;
    
    int totalStock = 3;

    cout << "Available Tea Stocks\n";
    cout << "1 -> Green Tea\n";
    cout << "2 -> Black Tea\n";
    cout << "4 -> Oolong Tea\n";

    cout << "Please Enter Tea Type in number\n";
    cin >> userInput;

    if(userInput & totalStock) {
        cout << "Great! this tea is in stock.\n";
    } else {
        cout << "Sorry, this tea is out of stock.\n";
    }

    // switch(teaType){
    //     case 1:
    //         cout << "Green Tea is Available.";
    //         break;
    //     case 2:
    //         cout << "Black Tea is Available";
    //         break;
    //     case 4:
    //         cout << "Oolong Tea is NOT Available";
    //         break;
    //     default:
    //         cout << "Invalid Input! No such type of tea is in stock";
    // }

    return 0;
}