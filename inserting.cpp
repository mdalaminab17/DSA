#include <iostream>
using namespace std;

int main() {
    int n;
    int index;
    int value;

    cout <<"Enter Array Size: ";
    cin >>n;

    int arr[n];
    cout <<"Enter Array Elements: " <<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Array before inserting value:" <<endl;
    for(int i=0; i<n; i++) {
        cout <<arr[i] << " ";
    }
    cout<<endl;

    cout<<"Enter array index & inserting value: ";
    cin>>index>>value;

    for (int i=n; i>index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    n = n+1;

    cout <<"Array after inserting value: ";
    for(int i=0; i<n; i++) {
        cout <<arr[i] << " ";
    }
    cout << endl;

    return 0;
}
