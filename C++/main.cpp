#include <iostream>
using namespace std;

// 雙輪排序.
void dualPivotQuickSort(int arr[], int low, int high) {
    if (low < high) {
        if (arr[low] > arr[high]) {
            swap(arr[low], arr[high]);
        }

        int pivot1 = arr[low];
        int pivot2 = arr[high];

        int i = low + 1;
        int lt = low + 1;
        int gt = high - 1;

        while (i <= gt) {
            if (arr[i] < pivot1) {
                swap(arr[i], arr[lt]);
                lt++;
                i++;
            } else if (arr[i] > pivot2) {
                swap(arr[i], arr[gt]);
                gt--;
            } else {
                i++;
            }
        }

        swap(arr[low], arr[lt - 1]);
        swap(arr[high], arr[gt + 1]);

        dualPivotQuickSort(arr, low, lt - 2);
        dualPivotQuickSort(arr, lt, gt);
        dualPivotQuickSort(arr, gt + 2, high);
    }
}

int main() {
    int arr[] = {50, 90, 70, 20, 10, 30, 40, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 雙輪排序.
    dualPivotQuickSort(arr, 0, n - 1);

    // 排序後數列.
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
