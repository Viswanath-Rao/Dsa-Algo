#include <iostream>
using namespace std;

int main() {
    int day = 1;

    switch (day) {
        case 1:
            cout<<"monday."<<endl;
            break;
        case 2:
            cout<<"tuesday."<<endl;
            break;
        case 3:
        cout<<"saturday."<<endl;
            break;
        default:
            cout << "Invalid day." << endl;
    }
    return 0;
}