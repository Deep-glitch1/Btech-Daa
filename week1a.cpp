#include <iostream>
using namespace std;
void linearSearch(int arr[], int n, int key) {
    int comparisons = 0;
    int found = 0;
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        cout << "Present " << comparisons << endl;
    else
        cout << "Not Present " << comparisons << endl;
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key element to search: ";
    cin >> key;
    linearSearch(arr, n, key);
    return 0;
}
