#include <iostream>
#include <cmath>

int main() {
    int a = 2;
    double b = 11.05;
    double result = 0;
    
    
    double lol = (a/b) * M_PI;
    double cosV = cos(lol);
    double sinV = sin(lol);
    double part1 = (1-cosV) / (1+cosV);
    double expr1 = pow(M_E, 0.1 * pow(log(part1), 3));  
    result = expr1 / (pow(sinV, 2) + pow(cosV, 2));

    
    std::cout << result;

    return 0;
}
