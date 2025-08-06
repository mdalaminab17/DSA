#include <iostream>
using namespace std;

int main() {
    int n;
    int index;

    cout <<"Enter Array Size: ";
    cin >> n;
    int arr[n];

    cout <<"Enter Array Elements: " << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout <<"Array before deleting value: ";
    for (int i=0; i<n; i++) {
        cout <<arr[i] << " ";
    }
    cout <<endl;

    cout <<"Enter index for delete: ";
    cin >> index;

    for (int i=index; i<n-1; i++) {
        arr[i]=arr[i+1];
    }

    n= n-1;

    cout <<"Array after deleting value: ";
    for (int i=0; i<n; i++) {
        cout <<arr[i] << " ";
    }
    cout << endl;

    return 0;
}
