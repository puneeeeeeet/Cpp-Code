#include <iostream>
using namespace std;



int main(){
    int n=10;
    int count = 0;
    
    for(int i=0; i<n; i++){
        for(int k=n-1-i;k>0;k--){
            cout<<" ";
        }
        
       for (int j=0; j<i;j++){
        cout<<"*";
        count++;
       }
       for(int l=0-1;l<i;l++){
        cout<<"*";
       }
       cout<<endl;
    }


    return 0;
}