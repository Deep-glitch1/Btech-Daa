#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key element to search: ";
    cin >> key;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "Present " << endl;
    else
        cout << "Not Present "  << endl;
    return 0;
}
