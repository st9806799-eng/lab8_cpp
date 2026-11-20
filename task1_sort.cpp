#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int M = 12;
    int arr[M] = {14, -5, 23, 0, 8, -12, 42, 7, 19, -1, 11, 3};

    cout << "Original array: ";
    for (int i = 0; i < M; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int asc[M];
    for (int i = 0; i < M; i++) {
        asc[i] = arr[i];
    }
    sort(asc, asc + M);

    cout << "Ascending order:  ";
    for (int i = 0; i < M; i++) {
        cout << asc[i] << " ";
    }
    cout << endl;

    int desc[M];
    for (int i = 0; i < M; i++) {
        desc[i] = arr[i];
    }
    sort(desc, desc + M, greater<int>());

    cout << "Descending order: ";
    for (int i = 0; i < M; i++) {
        cout << desc[i] << " ";
    }
    cout << endl;

    return 0;
}
