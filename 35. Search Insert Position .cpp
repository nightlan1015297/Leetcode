#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L_index  = 0;
        int R_index = nums.size()-1;
        int mid = R_index/2;
        while (L_index<R_index){
            if (nums[mid] > target ){
                R_index = mid-1;
            }else if(nums[mid] < target ){
                L_index = mid +1;
            }
            else { return mid ;}
            mid = L_index + (R_index - L_index)/2;
        }
        if (target > nums[L_index]){
            return L_index+1;
        }else{
            return L_index;
        }
    }
};

//
// Created by dim on 2/25/23.
//
