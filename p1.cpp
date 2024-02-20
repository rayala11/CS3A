#include <iostream>
using namespace std;

int main() {
    float scores[5];
    // when you decalre an array that value has to be a constant
    for(int index = 0; index<5; index++) {
        cout << "Enter the gpa for student " << index + 1 << ": ";
        cin >> scores[index];

    }

    // output the contents of the array
    cout << "\n\nStudent Grade o=point averages\n";

    for (int ind= 0; ind < 5; ind++) {
        cout << "\nGPA for student " << ind + 1 << ": " << scores[ind];
    }
    return 0;
}