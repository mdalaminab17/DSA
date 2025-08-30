#include <iostream>
using namespace std;

int linear(int data[], int n, int item){
    for(int i=0; i<n; i++){
        if(data[i] == item){
            return i;
        }
    }
    return -1;
}

int main(){
    int s;
    int item;
    int val = -1;
    cin>>s;
    
    int data[s];
    for(int i=0; i<s; i++){
        cin>>data[i];
    }
    
    cin>>item;
    
    int found = linear(data,s,item);
    
    if(found >=0){
    for(int i=s-1;i>found;i--){
        data[i+1] = data[i];
        
    }
    data[found+1] = val;
    s = s+1;
    
    for(int i=0; i<s; i++){
        cout<<data[i] <<" ";
    }
    }else{
        cout<<"NOT FOUND";
    }
    
cout<<endl;
}
