#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void CreateArray(int* arr, int size, int Low, int High) {
    for (int i = 0; i < size; i++) {
        arr[i] = Low + rand() % (High - Low + 1);
    }
}

void PrintArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int FindMaxOddElement(const int* arr, int size) {
    int maxOdd = INT_MIN;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            if (!found || arr[i] > maxOdd) {
                maxOdd = arr[i];
                found = true;
            }
        }
    }

    return found ? maxOdd : -1; 
}

int main() {
    srand((unsigned)time(0));

    const int n = 10;
    int arr[n];

    int Low = 1, High = 50;

    CreateArray(arr, n, Low, High);
    cout << "Initial array: ";
    PrintArray(arr, n);

    int maxOdd = FindMaxOddElement(arr, n);

    if (maxOdd != -1) {
        cout << "The largest odd element: " << maxOdd << endl;
    }
    else {
        cout << "There are no odd elements in the array." << endl;
    }

    return 0;
}
