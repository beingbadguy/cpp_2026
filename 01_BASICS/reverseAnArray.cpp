#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    };

    printArray(arr, size);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << " this is the size: " << size << endl;
    reverseArray(arr, size);
    return 0;
}