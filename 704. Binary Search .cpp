#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end = nums.size()-1;
        int start = 0;
        while(end-start>=0){
            int mid = start  + (end-start)/2;
            if (nums[mid]>target){
                end = mid - 1;
            }else if (nums[mid]<target){
                start = mid + 1;
            }
            else {
                return mid;
            }
        }
        return -1;
    }
};

//
// Created by dim on 2/25/23.
//
