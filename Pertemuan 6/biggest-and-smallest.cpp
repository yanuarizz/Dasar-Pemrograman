#include <iostream>
using namespace std;

int main(){
    int number = 5;
    int biggest, smallest;
    for(int i = 0; i < number; i++){
        int num;
        cout << "input number " << i + 1 << ": ";
        cin >> num;

        if(i == 0){
            // initialize the biggest and smallest with the first input
            biggest = num;
            smallest = num;
        } else {
            // compare the current number with the biggest and smallest
            if(num > biggest){
                biggest = num;
            }
            if(num < smallest){
                smallest = num;
            }
        }
    }

    cout << "biggest number is: " << biggest << endl;
    cout << "smallest number is: " << smallest << endl;

    return 0;
}