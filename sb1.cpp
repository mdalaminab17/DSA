#include <iostream>
using namespace std;

int binary(int data[], int n, int item){
    int st = 0;
    int end = n -1;
    
    while(st<=end){
        int mid = (st+end)/2;
        
        if(data[mid] == item){
            return mid;
        }else if(data[mid] < item){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    } return -1;
}

int main(){
    int data[] = {101, 123, 145, 167, 189, 200, 222, 250, 275, 300};
    int s = 10;
    int item = 189;
    
    int found = binary(data,s,item);
    
    if(found >= 0){
        
        cout<<"Student Id " <<item <<" found at position " <<found;
        cout<<"\nStudent ID " <<item <<" deleted successfully.";
        for(int i=found; i<s-1; i++){
            data[i] = data[i+1];
        }
    s = s-1;
        
    cout<<"\nUpdated list of Student IDs: ";

    for(int i=0; i<s; i++){
           cout<< data[i] <<" ";
    }
        
      
    }else{
        cout<<"Student ID not Found" <<endl;
    }
    
cout<<endl;
}
