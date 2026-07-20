#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int searchRotated(vector<int> &nums, int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // check mid
        if (nums[mid] == key)
        {
            return mid;
        }
        // check which side is sorted
        else if (nums[start] <= nums[mid])
        {
            // left half is sorted
            if(nums[mid]<=key && key <=nums[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        else
        {
            // right half is sorted
            if (nums[start] <= key && key <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {15, 18, 2, 3, 6, 12};
    int vectorIndex = searchRotated(nums, nums.size(), 6);
    cout << "=======" << endl;
    cout << "The index in the sorted rotated array is : " << vectorIndex << endl;
    cout << "=======" << endl;

    return 0;
}