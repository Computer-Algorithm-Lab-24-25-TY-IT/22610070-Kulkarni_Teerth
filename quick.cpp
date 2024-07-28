#include <iostream>
using namespace std;

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[low];  
        int i = low + 1;  

        for (int j = low + 1; j <= high; ++j) {
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                ++i;
            }
        }
        swap(arr[low], arr[i - 1]);
        int pi = i - 1;  

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    int arr[10] = {10, 121, 32, 44, 1, 31, 44, 12, 32, 45};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    quick_sort(arr, 0, n - 1);  
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
