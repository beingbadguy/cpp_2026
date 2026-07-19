#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearch(vector<int> &nums, int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == key)
        {
            return mid;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{

    vector<int> nums = {2, 10, 17, 29};
    int index = binarySearch(nums, nums.size(), 17);
    cout << "=====" << endl;
    cout << "The Index at which the element is present is : " << index << endl;
    cout << "=====" << endl;

    return 0;
}
