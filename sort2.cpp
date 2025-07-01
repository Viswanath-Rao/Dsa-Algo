#include <iostream>
using namespace std;

void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        
        swap(arr[i], arr[minIndex]);
    }

    cout << "After Selection Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    char arr[] = {'d', 'a', 'c', 'e', 'b'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Selection Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    return 0;
}
