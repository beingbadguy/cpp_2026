#include <iostream>
using namespace std;

// write a function as well
int smallestInAnArray(int arr[], int size)
{
    int smallest = INT_MAX;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[5] = {-13, 14, 26, -11, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestElement = smallestInAnArray(arr, size);

    cout << "=======" << endl;
    cout << "This is the smallest number in the array: " << smallestElement << endl;
    cout << "=======" << endl;
    return 0;
}