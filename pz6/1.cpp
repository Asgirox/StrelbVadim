#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть натуральне число: ";
    cin >> N;

    if (N <= 0) {
        cout << "Число повинно бути натуральним!" << endl;
        return 1;
    }

    int product = 1;
    while (N > 0) {
        int digit = N % 10;
        if (digit != 7) {
            product *= digit;
        }
        N /= 10;
    }

    cout << "Добуток цифр, які не дорівнюють 7: " << product << endl;

    return 0;
}
