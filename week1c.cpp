#include <iostream>
#include <cmath>
using namespace std;
int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < key) {
        comparisons++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1; 
    }
    while (arr[prev] < key) {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == key)
        return prev;
    
    return -1; 
}

int main() {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> key;
        int result = jumpSearch(arr, n, key);
        
        if (result != -1)
            cout << "Present " << endl;
        else
            cout << "Not Present " << endl;
    }
    
    return 0;
}
