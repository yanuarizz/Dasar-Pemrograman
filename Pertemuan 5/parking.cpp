#include <iostream>
using namespace std;

int main(){
    string vehicleType;
    int hoursParked, parkingFee;

    cout << "Enter vehicle type (motorcycle, car, bus): ";
    cin >> vehicleType;
    cout << "Enter hours parked: ";
    cin >> hoursParked;

    if(vehicleType == "motorcycle"){
        parkingFee = 3000;
        cout << "Parking fee for motorcycle: " << parkingFee << endl;
        if (hoursParked > 12){
            parkingFee = 50000;
        }
        parkingFee = hoursParked * 3000;
        cout << "Parking fee after " << hoursParked << " hours for motorcycle: " << parkingFee << endl;
    }
    else if(vehicleType == "car"){
        parkingFee = 5000;
        cout << "Parking fee for car: " << parkingFee << endl;
        if (hoursParked > 12){
            parkingFee = 75000;
        }
        parkingFee = hoursParked * 5000;
        cout << "Parking fee after " << hoursParked << " hours for car: " << parkingFee << endl;
    }
    else if(vehicleType == "bus"){
        parkingFee = 25000;
        cout << "Parking fee for bus: " << parkingFee << endl;
        if (hoursParked > 12){
            parkingFee = 250000;
        }
        parkingFee = hoursParked * 25000;
        cout << "Parking fee after " << hoursParked << " hours for bus: " << parkingFee << endl;
    }
    else{
        cout << "Invalid vehicle type." << endl;
    }

    return 0;
}