#include <iostream>
using namespace std;

void getSumAndProduct(int arr[], int size, int &sum, int &product) {
    sum = 0;
    product = 1;  // Initialize product to 1

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];  // Declaring array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Input array elements
    }

    int sum, product;
    getSumAndProduct(arr, size, sum, product);

    cout << "Sum of elements: " << sum << endl;
    cout << "Product of elements: " << product << endl;

    return 0;
}
