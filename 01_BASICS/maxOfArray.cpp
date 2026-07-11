#include <iostream>
using namespace std;

// write the function for this as well
int largestInAnArray(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;

}

int main()
{
    int arr[6] = {12, 42, 98, -11, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largestElement = largestInAnArray(arr, size);

    cout << "=======" << endl;
    cout << "This is the largest number of an array : " << largestElement << endl;
    cout << "=======" << endl;
    return 0;
}