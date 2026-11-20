#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    int arr[N] = {-3, 5, -8, 12, -2, 12, -7, 4, -1, 6};

    int maxVal = arr[0];
    int firstMaxIdx = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            firstMaxIdx = i;
        }
    }

    for (int i = 0; i < firstMaxIdx; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "First max element: " << maxVal << " at index " << firstMaxIdx << endl;
    cout << "Resulting array:   ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
