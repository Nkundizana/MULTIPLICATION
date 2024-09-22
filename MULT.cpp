
#include <iostream>
using namespace std;

int main() {
    int num, count;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table for " << num << " is:\n";
    for (count = 1; count <= 10; count++) {
        cout << num << " * " << count << " = " << (num * count) << endl;
    }

    return 0;
}

