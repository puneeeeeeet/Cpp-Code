#include <iostream>
using namespace std;

int greatestThree(int a,int b, int c){
            
            if(a<b){
                if(a<c){
                    return c;
                }else{
                    return b;
                }
            }else{
                return a;
            }
}

int ThreeSum(int a, int b,int c){
    return a+b+c;
}


int main (){
    cout<<"Greatest = "<<greatestThree(10,20,3)<<endl;
    cout<<"ThreeSum = "<<ThreeSum(1,2,3);
    return 0;
}