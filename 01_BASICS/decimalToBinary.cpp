#include<iostream>
using namespace std;

int convertDecimalToBinary(int decimalNumber){

    int binary = 0;
    int power = 1;
    while(decimalNumber>0){
       int remainder = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
       binary = binary + (remainder * power);
       power = power * 10;
    }
    
    return binary;
}

int main(){
    int number = 10;
    int answer = convertDecimalToBinary(number);
    cout << answer << endl;
    return 0;
}