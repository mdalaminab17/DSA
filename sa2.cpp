#include <iostream>
using namespace std;

void bubble(int data[], int n){
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-i-1; j++){
            if(data[j] < data[j+1]){
            int temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;  
            flag = true;
           }
        }
        if(!flag) break;
    }
}
int main(){
    int n;
    cin>>n;
    int Scores[n];
    for(int i=0;i<n;i++){
        cin>>Scores[i];
    }
    
    cout<<"Sorting Method: Bubble Sort (Descending Order) " <<endl;
    cout<<"Scores before sorting: ";
    for(int i=0; i<n; i++){
        cout<<Scores[i] <<" ";
    }
    
    
    bubble(Scores, n);
    cout<<"\nScores after sorting: ";
    for(int i=0; i<n; i++){
        cout<<Scores[i] <<" ";
    }
    
cout<<endl;
}


//Scores = [45, 89, 62, 70, 55, 95, 38, 77]

//Sorting Method: Bubble Sort (Descending Order)
//Scores before sorting: 45 89 62 70 55 95 38 77
//Scores after sorting: 95 89 77 70 62 55 45 38
