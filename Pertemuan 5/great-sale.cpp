#include <iostream>
using namespace std;

int main(){

    int itemQuantity;
    double discount, price=500, totalPrice;

    cout << "Enter the quantity of items: ";
    cin >> itemQuantity;


    if(itemQuantity >= 3 && itemQuantity <= 5){
        discount = 0.02; // 2% discount
        cout << "You get a 2% discount." << endl;
    }
    else if(itemQuantity > 5 && itemQuantity <= 10){
        discount = 0.05; // 5% discount
        cout << "You get a 5% discount." << endl;
    }
    else if (itemQuantity > 10 && itemQuantity <= 17) {
        discount = 0.1; // 10% discount
        cout << "You get a 10% discount." << endl;
    }
    else if (itemQuantity > 17) {
        discount = 0.2; // 20% discount
        cout << "You get a 20% discount." << endl;
    }
    else {
        discount = 0; // No discount
        cout << "No discount applied." << endl;
    }
    totalPrice = itemQuantity * price;
    cout << "Price before discount: $" << totalPrice << endl;
    totalPrice = itemQuantity * price * (1 - discount);
    cout << "Total price after discount: $" << totalPrice << endl;

    return 0;
}