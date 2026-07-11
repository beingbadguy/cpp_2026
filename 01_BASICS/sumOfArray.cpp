#include<iostream>
using namespace std;

int sumOfAnArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[10] = {1, 42, 1, 2, 42, 123, 233, 123123, 123123, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfAnArray(arr, size);
    cout << "======"<<endl;
    cout << "The sum of the array is : " << sum << endl;
    cout << "======" << endl;
    return 0;
}