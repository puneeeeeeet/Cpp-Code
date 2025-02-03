#include <iostream>
using namespace std;

int decimalToBinary(int deciNum){
    int ans =0; int pow=1;

    while(deciNum>0){
        int rem= deciNum%2;
        deciNum /= 2;
         
         ans += (rem *pow);
         pow *=10;
    }
     return ans;
}
int binaryToDecimal(int binNum){
    int ans=0; int pow=1;

    while(binNum>0){
        int rem = binNum%10;
        binNum /= 10;

        ans+=(rem*pow);
        pow *= 2;
    }
    return ans;
}
int main(){

    cout<<"Decimal to Bianary "<<decimalToBinary(50)<<endl;
    cout<<"Binary to Decimal "<<binaryToDecimal(110010);
    return 0;
}