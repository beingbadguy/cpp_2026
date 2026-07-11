#include <iostream>
using namespace std;

void printArry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printArry(arr, 5);

    return 0;
}
