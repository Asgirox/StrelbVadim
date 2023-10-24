#include <iostream>
#include <cmath>

int main() {
    int a = 3;
    double b = 0.521; 
    double result = 0;
    
    
    double lol = b/a;
    double cosV = cos(lol * M_PI);
    double M = 0.127 * exp(lol);
    double N = 1 - cbrt(cosV);  
    result = cbrt(pow(M, 2) / N);  

    
    std::cout << result;

    return 0;
}
