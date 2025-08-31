#include <iostream>
using namespace std;

void linear(int data[], int n, int key){
    int count=0;
    cout<<"Searching Method: Linear Search "<<endl;
    for(int i=0; i<n; i++){
        if(data[i] == key){
            cout<<"Product code " <<key <<" found at position "<<i+1 <<endl;
            cout<<"Number of comparisons made: "<<i+1 <<endl;
        }
    count++;    
    }
    cout<<"Best case comparisons: 1" <<endl;
    cout<<"Worst case comparisons: " <<n<<endl;
}

int main(){
    int n;
    int key;
    cin>>n;
    int Basket[n];
    for(int i=0;i<n;i++){
        cin>>Basket[i];
    }
    
    cin>>key;
    
    linear(Basket, n, key);
    
cout<<endl;
}


//Basket = [501, 320, 789, 654, 210, 876, 432, 999, 245, 700]
//Search Key = 432

//Searching Method: Linear Search
//Product code 432 found at position 7
//Number of comparisons made: 7
//Best case comparisons: 1
//Worst case comparisons: 10

