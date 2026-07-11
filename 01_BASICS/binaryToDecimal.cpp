#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binaryNumber)
{
    int decimalNumber = 0;
    int power = 0;
    while (binaryNumber > 0)
    {
        int remainder = binaryNumber % 10;
        decimalNumber += remainder * pow(2, power);
        binaryNumber /= 10;
        power++;
    }
    return decimalNumber;
}
int main()
{
    int binary;
    cout << "Enter the binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "==========" << endl;

    cout << "This is the decimal of this following binary number : " << decimal << endl;
    cout << "==========" << endl;

    return 0;
}