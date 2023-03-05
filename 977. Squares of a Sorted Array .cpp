#include "vector"
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int L = 0;
        int R = nums.size()-1;
        vector<int>v(nums.size());
        for(int i = nums.size();i>=0;i--){
            if (nums[L]*nums[L]>nums[R]*nums[R]){
                v[i] =  nums[L]*nums[L];
                L++;
            }else{
                v[i] =  nums[L]*nums[L];
                R--;
            }
        }
    }
};
//
// Created by dim on 2/28/23.
//
