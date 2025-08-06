#include <iostream>
using namespace std;

int Search(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target: ";
    cin >> target;

    int index = Search(arr, target, n);
    if (index != -1) {
        cout << index << endl;
    } else {
        cout << "Target not found " << endl;
    }

    return 0;
}
