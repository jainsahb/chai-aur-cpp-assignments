#include <iostream>
#include <string>

using namespace std;

int main() {
    int teaBagsQty;
    double teaPackPrice, totalPrice, taxAmt, taxedPrice;

    cout << "Please enter the no. of tea bags: ";
    cin >> teaBagsQty;
    
    if(teaBagsQty < 20) {
        teaBagsQty += 10;
        cout << "Your Updated Total Tea Bags are: " << teaBagsQty << endl;
    } else{
        cout << "Your Total Tea Bags are: " << teaBagsQty;
    }
    

    return 0;
}