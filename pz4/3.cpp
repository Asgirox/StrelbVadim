#include <iostream>
#include <cmath> 

using namespace std;

const float epsilon = 0.000001;

int main() {
    int int1, int2;
    float result1, result2;
    
    cout << "Enter two integer values: " << endl;
    cin >> int1 >> int2;

   
    result1 = 1.0f / int1;
    result2 = 1.0f / int2;

    if (fabs(result1 - result2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}