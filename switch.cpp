#include <iostream>
using namespace std;
int main() {
    const int a = 9;
    const int b = 6;
    switch (a + b) {
        case 15:
            cout << "Result is 15." << endl;
            break;
        case 20:
            cout << "Result is 20." << endl;
            break;
        default:
            cout << "no value" << endl;
    }

    return 0;
}