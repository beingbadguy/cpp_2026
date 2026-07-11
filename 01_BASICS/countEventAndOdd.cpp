#include <iostream>
using namespace std;

void countEvenAndOdd(int arr[], int size)
{

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout << "======" << endl;
    cout << "The Even count is : " << evenCount << endl;
    cout << "The Odd count is : " << oddCount << endl;
    cout << "=======" << endl;
    
}

int main()
{

    int arr[6] = {0, 1, 2, 3, 4, 5};
    int size = 6;
    countEvenAndOdd(arr, size);
    return 0;
}