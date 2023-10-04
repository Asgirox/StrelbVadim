#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    
    cout << "Enter four numbers (between 1 and 255) to create an IP address:" << endl;
    
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 >= 1 && num1 <= 255 &&
        num2 >= 1 && num2 <= 255 &&
        num3 >= 1 && num3 <= 255 &&
        num4 >= 1 && num4 <= 255) {
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    } else {
        cout << "One or more numbers are not in the valid IP range (1-255)." << endl;
    }

    return 0;
}