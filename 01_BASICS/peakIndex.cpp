#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int peakIndex(vector<int> &nums, int size){
    int start = 1;
    int end = size - 2;

    while (start<=end)
    {

        int mid = start + (end - start) / 2;

        if(nums[mid]>=nums[mid -1] && nums[mid]>=nums[mid+1]){
            return mid;
        }
        else if(nums[mid]>=nums[mid-1]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1, 3, 5, 7, 9, 6, 4, 2};
    int index = peakIndex(nums, nums.size());
    cout << "=====" << endl;
    cout << "The peak index of this vector is : " << index << endl;
    cout << "=====" << endl;
    return 0;
}