#include <iostream>
using namespace std;

void MaxAndMin(int arr[], int sz){
    int max =0,min=0;
    for(int i=0; i<sz; i++){
        if(arr[i]>arr[max]){
            max = i;
        }  if (arr[i]<arr[min])
        {
            min = i;
        }
           
    }
     swap(arr[max],arr[min]);
        
    
}

int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;
    MaxAndMin(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}