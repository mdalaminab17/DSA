#include <iostream>
using namespace std;

    void bubblesort(int nums[], int n){
        for(int i=0; i<n-1; i++){
           bool f = 0;
           for(int j=0; j<n-1-i; j++){
              if(nums[j]>nums[j+1]){
                 int temp = nums[j];
                 nums[j] = nums[j+1];
                 nums[j+1] = temp; //swap(nums[j],nums[j+1]);
                 f = 1;
              } 
           } if(!f){
                break;
           }
        }
    }


int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int nums[n];
    
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    bubblesort(nums,n);
    cout <<"Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

}
