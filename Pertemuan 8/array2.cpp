#include <iostream>
using namespace std;

int main(){
    int n, biggest, smallest, sum = 0;
    float average;
    cout << "input n for array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "input number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "the numbers in the array are: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(i == 0){
            biggest = arr[i];
            smallest = arr[i];
        } else {
            if(arr[i] > biggest){
                biggest = arr[i];
            }
            if(arr[i] < smallest){
                smallest = arr[i];
            }
        }
    }
    average = (float)sum / n;
    cout << "biggest number is: " << biggest << endl;
    cout << "smallest number is: " << smallest << endl;
    cout << "sum of the numbers is: " << sum << endl;
    cout << "average of the numbers is: " << average << endl;
    return 0;
}