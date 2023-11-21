#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    int n = 8; 
    vector<int> arr(n);

    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 21 - 10; 
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxIndex = 0;
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Змінений масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}