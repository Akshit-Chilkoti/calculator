#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    int op;

    cout << "Type: \n"
         << "1 for '+'\n"
         << "2 for '-'\n"
         << "3 for '*'\n"
         << "4 for '/'\n";
    cin >> op;
    cout << "Type First Number: ";
    cin >> a;
    cout << "Type second Number: ";
    cin>> b;

    switch(op) {
        case 1: 
        cout << "Answer: " << a + b;
        break;

        case 2:
        cout << "Answer: " << a - b;
        break;

        case 3:
        cout << "Answer: " << a * b;
        break;

        case 4:
        cout << "Answer: " << a / b;
        break;
    }
}