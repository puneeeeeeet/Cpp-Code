#include <iostream>
using namespace std;
 void UniqueValue(int arr[],int sz){
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz-1;j++){
            if(arr[i]!=arr[j]){
                cout<<arr[i];
            }
        }
    }

 }
int main(){
    int arr[]={1,2,3,3,4,5};
    int sz = 6;
    UniqueValue(arr,sz);

    return 0;

}