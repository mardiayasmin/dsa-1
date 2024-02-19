#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sumOfNLargest(int arr[], int n, int k) {
    bubbleSort(arr, n);

    int totalSum = 0;
    for (int i = n - 1; i >= n - k; --i) {
        totalSum += arr[i];
    }

    return totalSum;
}

int main() {
    int arr[] = {4, 1, 2, 7, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int result = sumOfNLargest(arr, n, k);

    std::cout << "Sum of " << k << " largest numbers: " << result << std::endl;

    return 0;
}
