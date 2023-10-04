#include <iostream>
#include <cmath> 

int main() {
    double sum = 0.0; 

    for (int i = 10; i <= 20; i++) {
        sum += sqrt(i);
    }

    
    std::cout << "Сума коренів чисел від 10 до 20 дорівнює: " << sum << std::endl;

    return 0;
}
