#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 12;
    int m[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        m[i] = rand() % 100;
    }

    cout << "Вихідний масив:" << endl;
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    
    bubbleSort(m, size);
ю
    cout << "Масив відсортований за зростанням:" << endl;
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (m[j] < m[j + 1]) {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    cout << "Масив відсортований за спаданням:" << endl;
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}