#include <iostream>
using namespace std;

int main() {
    int opr;
    float a;
    float b;
    float ans;

    cout << "Type: \n" << "1 for '+'\n" << "2 for '-'\n" << "3 for '*'\n" << "4 for '/'\n";
    cin >> opr;
    cout << "Enter First Number: \n";
    cin >> a;
    cout << "Enter Second Number: \n";
    cin >> b;
    if (opr == 1) {
        ans = a + b;
        cout << "Answer: " << ans;
    } else if (opr == 2) {
        ans = a - b;
        cout << "Answer: " << ans;
    } else if (opr == 3) {
        ans = a * b;
        cout << "Answer: " << ans;
    } else if (opr == 4) {
        ans = a / b;
        cout << "Answer: " << ans;
    } else {
        cout << "No such Operation!";
    }
}