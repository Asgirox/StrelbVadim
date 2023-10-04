#include <iostream>
#include <iomanip> 

using namespace std;

int main(void) {
    float a, b, c, d, e;
    
    cout << "Enter five float values: " << endl;
    cin >> a >> b >> c >> d >> e;
    
    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    cout << c << endl;
    cout << setprecision(2) << d << endl;
    cout << setprecision(0) << e << endl; 
    
    return 0;
}