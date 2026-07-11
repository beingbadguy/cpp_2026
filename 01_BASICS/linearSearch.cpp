#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {23, 5, 89, 14, 67, 31, 42, 9, 55, 18};
    int size = 10;
    int key = 42;

    int index = linearSearch(arr, size, key);
    cout << "========" << endl;
    cout << "This is the index of the element : " << index << endl;
    cout << "========" << endl;
    return 0;
}