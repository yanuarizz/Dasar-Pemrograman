#include <iostream>
using namespace std;

int main(){

    int itemQuantity;
    double discount, price=500, totalPrice;

    cout << "Enter the quantity of items: ";
    cin >> itemQuantity;


    if(itemQuantity >= 3 && itemQuantity <= 5){
        discount = 0.02; // 2% discount
    }
    else if(itemQuantity > 5 && itemQuantity <= 10){
        discount = 0.05; // 5% discount
    }
    else if (itemQuantity > 10 && itemQuantity <= 17) {
        discount = 0.1; // 10% discount
    }
    else if (itemQuantity > 17) {
        discount = 0.2; // 20% discount
    }
    else {
        discount = 0; // No discount
    }

    totalPrice = itemQuantity * price * (1 - discount);

    cout << "Total price: $" << totalPrice << endl;

    return 0;
}