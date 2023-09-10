// Example program
#include <iostream>
#include <string>



int main() {
    double a = 2.0;
    double b = 11.05;
    double result = 0;
    
    double Sin = sin(a/b * M_PI);
    double Cos = cos(a/b * M_PI);
    double value = 0.1 * log(exp(3.0) * Sin * Sin + Cos * Cos);
    result = cbrt(value);  
    
    std::cout << result;
    return 0;
}