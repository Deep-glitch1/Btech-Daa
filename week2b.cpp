#include <iostream>
using namespace std;
void findSequence(int arr[], int n) {
    for (int k = 2; k < n; k++) {
        int i = 0, j = k - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == arr[k]) {
                cout << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
                return;
            } else if (sum < arr[k]) {
                i++;
            } else {
                j--;
            }
        }
    }
    cout << "No sequence found." << endl;
}

int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        findSequence(arr, n);
        return 0;
}
