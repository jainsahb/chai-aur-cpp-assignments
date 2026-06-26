#include <iostream>
#include <string>

using namespace std;

int main() {
    int teaPacksQty;
    double teaPackPrice, totalPrice, taxAmt, taxedPrice;

    cout << "Please enter the no. of tea packs: ";
    cin >> teaPacksQty;
    
    cout << "Please enter the price per tea pack: ";
    cin >> teaPackPrice;

    totalPrice = teaPackPrice * (double)teaPacksQty;
    taxAmt = (teaPackPrice * (double)teaPacksQty) * 0.1;
    taxedPrice = totalPrice + taxAmt;

    cout << "Your Total bill including Tax\n";
    cout << "Total Price: " << totalPrice << endl;
    cout << "Final Amount with 10% Tax: " << taxedPrice << endl;

    return 0;
}