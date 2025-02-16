#include <iostream>
using namespace std;
int countPairsWithDifference(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] - arr[j] == k) || (arr[j] - arr[i] == k)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k;
        cout << countPairsWithDifference(arr, n, k) << endl;
        return 0;
}
