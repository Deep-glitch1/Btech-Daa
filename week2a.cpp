#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            right = mid - 1; 
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return result;
}
int lastOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return result;
}

int main() {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> key;
        int first = firstOccurrence(arr, n, key);
        if (first == -1) {
            cout << "Not Present " << endl;
        } else {
            int last = lastOccurrence(arr, n, key);
            cout << "Present " << (last - first + 1) << " " << endl;
        }
        return 0;
}

