#include <iostream>
using namespace std;

    int linearSearch(int nums[], int n, int target){
        for(int i=0; i<n; i++){
           if(nums[i] == target){
               return i;
           }
        } return -1;
    }


int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int nums[n];
    int target;
    
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter Target: ";
    cin>>target;
    
    int found = linearSearch(nums,n,target);
    if(found == -1){
        cout<<"Target Not Found";
    }else{
        cout<<"Target Found at index " <<found;
    }
    
    cout << endl;

}
