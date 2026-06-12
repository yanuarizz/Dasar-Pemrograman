#include <iostream>
using namespace std;

struct grade{
    string name;
    int score;
};

typedef struct grade grade; // bisa juga menggunakan typedef untuk mempersingkat penulisan struct
int main(){
    grade student[3];
    for (int i = 0; i < 3; i++){
        cout << "input name: ";
        cin >> student[i].name;
        cout << "input score: ";
        cin >> student[i].score;
    }
    cout << "output name and score: " << endl;
    for (int i = 0; i < 3; i++){
        cout << "name: " << student[i].name << ", score: " << student[i].score << endl;
    }

    return 0;
}