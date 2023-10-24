#include <iostream>

using namespace std;

int main() {
    int c0, steps = 0;

    
    cout << "Введіть додатнє число відмінне від нуля: ";
    
    cin >> c0;
    if (c0 <= 0) {
        cout << "Некоректне число." << endl;
        return 1; 
    }

    
    while (c0 != 1) {
        cout << c0 << endl; 

        if (c0 % 2 == 0) {
            c0 /= 2;
        } else {
            c0 = 3 * c0 + 1;
        }

        steps++; 
    }

 
    cout << c0 << endl;
    cout << "steps = " << steps + 1 << endl; 

    return 0;
}