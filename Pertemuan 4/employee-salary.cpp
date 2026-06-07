#include <iostream>
using namespace std;

int main(){
    int regularSalary, overPay, totalSalary, hoursWorked, salaryPerHour;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter salary per hour: ";
    cin >> salaryPerHour;

    regularSalary = salaryPerHour * 40; // Regular salary for 40 hours
    if (hoursWorked > 40) {
        overPay = (hoursWorked - 40) * (salaryPerHour * 1.5); // Overtime pay for hours above 40
    } else {
        overPay = 0;
    }
    cout << "Overtime pay: " << overPay << endl;
    totalSalary = regularSalary + overPay;
    cout << "Total salary: " << totalSalary << endl;
    return 0;
}