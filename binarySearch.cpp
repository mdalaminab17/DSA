#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n){
 int target ;
 int st = 0;
 int end = n-1;
 
 cout<<"Enter Target: ";
 cin>>target;
 
 while(st<=end){
   int mid = (st+end)/2;
   
   if(arr[mid] == target){
   return mid;
   } else if(arr[mid]>target){
    end = mid -1;
   } else{
    st = mid+1;
   }
 } return -1;
}

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
    
    cout<<BinarySearch(arr,n);


    return 0;
}
